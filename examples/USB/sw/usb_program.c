#include "usb_regs.h"

int main(void)
{

	number_passed = 0;
	number_failed = 0;

	int data_read;

	printf("\n\n");
	delay(1000);

	data_read = read(SIM_HOST_BASE_ADDR + HOST_SLAVE_CONTROL_BASE + HOST_SLAVE_VERSION_REG); // 225
	printf("Host Version number = 0x%0X\n", data_read);
	data_read = read(SIM_SLAVE_BASE_ADDR + HOST_SLAVE_CONTROL_BASE + HOST_SLAVE_VERSION_REG); // 481
	printf("Slave Version number = 0x%0X\n", data_read);

	printf("Testing host register read/write \n");
	write(SIM_HOST_BASE_ADDR + HCREG_BASE + TX_LINE_CONTROL_REG, 0x18); // 2
	cmp(SIM_HOST_BASE_ADDR + HCREG_BASE + TX_LINE_CONTROL_REG, 0x18); // 2
	printf("Testing slave register read/write \n");
	write(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_CONTROL_REG, 0x70); // 336
	cmp(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_CONTROL_REG , 0x70); // 336

	printf("Testing register reset \n");
	write(SIM_HOST_BASE_ADDR + HOST_SLAVE_CONTROL_BASE + HOST_SLAVE_CONTROL_REG, 0x2); // 224
	write(SIM_SLAVE_BASE_ADDR + HOST_SLAVE_CONTROL_BASE + HOST_SLAVE_CONTROL_REG, 0x2); // 480
	delay(1000);
	cmp(SIM_HOST_BASE_ADDR + HCREG_BASE + TX_LINE_CONTROL_REG, 0x00); // 2
	cmp(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_CONTROL_REG, 0x00); // 336
	delay(1000);

	printf("Configure host and slave mode.\n");
	write(SIM_HOST_BASE_ADDR + HOST_SLAVE_CONTROL_BASE + HOST_SLAVE_CONTROL_REG, 0x1);
	write(SIM_SLAVE_BASE_ADDR + HOST_SLAVE_CONTROL_BASE + HOST_SLAVE_CONTROL_REG, 0x0);

	printf("Connect full speed\n");
	write(SIM_HOST_BASE_ADDR + HCREG_BASE + TX_LINE_CONTROL_REG, 0x18);
	write(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_CONTROL_REG, 0x70);
	delay(20000);
	//expecting connection event interrupt
	cmp(SIM_HOST_BASE_ADDR + HCREG_BASE + INTERRUPT_STATUS_REG, 0x04);
	//expecting full speed connect
	cmp(SIM_HOST_BASE_ADDR + HCREG_BASE + RX_CONNECT_STATE_REG, 0x02);
	//expecting change in reset state event, and change in vbus state event
	cmp(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_INTERRUPT_STATUS_REG, 0x24);
	//expecting full speed connect and vbus present
	cmp(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_LINE_STATUS_REG, 0x06);

	printf("Cancel interrupts\n");
	write(SIM_HOST_BASE_ADDR + HCREG_BASE + INTERRUPT_STATUS_REG, 0x04);
	write(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_INTERRUPT_STATUS_REG, 0x24);
	//expecting all interrupts cancelled
	cmp(SIM_HOST_BASE_ADDR + HCREG_BASE + INTERRUPT_STATUS_REG, 0x00);
	//expecting all interrupts cancelled
	cmp(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_INTERRUPT_STATUS_REG, 0x00);
	delay(1000);

	printf("Disconnect\n");
	write(SIM_HOST_BASE_ADDR + HCREG_BASE + TX_LINE_CONTROL_REG, 0x18);
	write(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_CONTROL_REG , 0x30);
	delay(10000);
	//expecting connection event interrupt
	cmp(SIM_HOST_BASE_ADDR + HCREG_BASE + INTERRUPT_STATUS_REG, 0x04);
	//expecting disconnect state
	cmp(SIM_HOST_BASE_ADDR + HCREG_BASE + RX_CONNECT_STATE_REG, 0x00);
	//expecting change in reset state event
	cmp(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_INTERRUPT_STATUS_REG, 0x04);
	//expecting vbus present, and disconnect state
	cmp(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_LINE_STATUS_REG, 0x04);
	//cancel interrupts
	write(SIM_HOST_BASE_ADDR + HCREG_BASE + INTERRUPT_STATUS_REG, 0x04);
	write(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_INTERRUPT_STATUS_REG, 0x04);

	printf("Connect full speed\n");
	write(SIM_HOST_BASE_ADDR + HCREG_BASE + TX_LINE_CONTROL_REG, 0x18);
	write(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_CONTROL_REG, 0x70);
	delay(20000);
	//expecting connection event interrupt
	cmp(SIM_HOST_BASE_ADDR + HCREG_BASE + INTERRUPT_STATUS_REG, 0x04);
	//expecting full speed connect
	cmp(SIM_HOST_BASE_ADDR + HCREG_BASE + RX_CONNECT_STATE_REG, 0x02);
	//expecting change in reset state event
	cmp(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_INTERRUPT_STATUS_REG, 0x04);
	//expecting full speed connect and vbus present
	cmp(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_LINE_STATUS_REG, 0x06);
	//cancel interrupts
	write(SIM_HOST_BASE_ADDR + HCREG_BASE + INTERRUPT_STATUS_REG, 0x04);
	write(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_INTERRUPT_STATUS_REG, 0x04);
	cmp(SIM_HOST_BASE_ADDR + HCREG_BASE + INTERRUPT_STATUS_REG, 0x00);
	cmp(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_INTERRUPT_STATUS_REG, 0x00);
	delay(1000);

	printf("Host forcing reset\n");
	write(SIM_HOST_BASE_ADDR + HCREG_BASE+TX_LINE_CONTROL_REG, 0x1c);
	delay(20000);
	//expecting change in reset state event
	cmp(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_INTERRUPT_STATUS_REG, 0x04);
	//expecting vbus present, and disconnect state
	cmp(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_LINE_STATUS_REG, 0x04);
	//cancel interrupt
	write(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_INTERRUPT_STATUS_REG, 0x04);

	printf("Connect full speed\n");
	write(SIM_HOST_BASE_ADDR + HCREG_BASE + TX_LINE_CONTROL_REG, 0x18);
	write(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_CONTROL_REG, 0x70);
	delay(20000);
	//expecting no host interrupts
	cmp(SIM_HOST_BASE_ADDR + HCREG_BASE + INTERRUPT_STATUS_REG, 0x00);
	//expecting full speed connect
	cmp(SIM_HOST_BASE_ADDR + HCREG_BASE + RX_CONNECT_STATE_REG, 0x02);
	//expecting change in reset state event
	cmp(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_INTERRUPT_STATUS_REG, 0x04);
	//expecting full speed connect and vbus present
	cmp(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_LINE_STATUS_REG, 0x06);
	//cancel interrupts
	write(SIM_HOST_BASE_ADDR + HCREG_BASE + INTERRUPT_STATUS_REG, 0x04);
	write(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_INTERRUPT_STATUS_REG, 0x04);
	cmp(SIM_HOST_BASE_ADDR + HCREG_BASE + INTERRUPT_STATUS_REG, 0x00);
	cmp(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_INTERRUPT_STATUS_REG, 0x00);
	delay(1000);

	printf("Trans test: Device address = 0x00, 2 byte SETUP transaction to Endpoint 0.\n");
	int USBAddress = 0x00;
	int USBEndPoint = 0x00;
	int transType = SETUP_TRANS;
	int dataSize = 2;
	//enable endpoint, and make ready
	write(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_CONTROL_REG, 0x71);
	write(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_ADDRESS, USBAddress);
	write(SIM_SLAVE_BASE_ADDR + SCREG_BASE + EP0_CTRL_REG, 0x03);
	write(SIM_HOST_BASE_ADDR + HCREG_BASE + TX_ADDR_REG, USBAddress);
	write(SIM_HOST_BASE_ADDR + HCREG_BASE + TX_ENDP_REG, USBEndPoint);
	write(SIM_HOST_BASE_ADDR + HCREG_BASE + TX_TRANS_TYPE_REG, transType);
	int data = 0x00;
	int i;
	for (i=0; i<dataSize; i=i+1)
	{
		write(SIM_HOST_BASE_ADDR + HOST_TX_FIFO_BASE + FIFO_DATA_REG, data);
		data = data + 1;
	}
	write(SIM_HOST_BASE_ADDR + HCREG_BASE + TX_CONTROL_REG, 0x01);
	delay(20000);
	//expecting transaction done interrupt
	cmp(SIM_HOST_BASE_ADDR + HCREG_BASE + INTERRUPT_STATUS_REG, 0x01);
	//expecting transaction done interrupt
	cmp(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_INTERRUPT_STATUS_REG, 0x01);
	//endpoint enabled, and endpoint ready cleared
	cmp(SIM_SLAVE_BASE_ADDR + SCREG_BASE + EP0_CTRL_REG, 0x01);
	printf("Checking receive data\n");
	data = 0x00;
	for (i=0; i<dataSize; i=i+1) 
	{
		cmp(SIM_SLAVE_BASE_ADDR + EP0_RX_FIFO_BASE + FIFO_DATA_REG, data);
		data = data + 1;
	}

	printf("Trans test: Device address = 0x5a, 20 byte OUT DATA0 transaction to Endpoint 1.\n");
	USBAddress = 0x5a;
	USBEndPoint = 0x01;
	transType = OUTDATA0_TRANS;
	dataSize = 20;
	//enable endpoint, and make ready
	write(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_CONTROL_REG, 0x71);
	write(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_ADDRESS, USBAddress);
	write(SIM_SLAVE_BASE_ADDR + SCREG_BASE + EP1_CTRL_REG, 0x03);
	write(SIM_HOST_BASE_ADDR + HCREG_BASE + TX_ADDR_REG, USBAddress);
	write(SIM_HOST_BASE_ADDR + HCREG_BASE + TX_ENDP_REG, USBEndPoint);
	write(SIM_HOST_BASE_ADDR + HCREG_BASE + TX_TRANS_TYPE_REG, transType);
	data = 0x00;
	for (i=0; i<dataSize; i=i+1)
	{
		write(SIM_HOST_BASE_ADDR + HOST_TX_FIFO_BASE + FIFO_DATA_REG, data);
		data = data + 1;
	}
	write(SIM_HOST_BASE_ADDR + HCREG_BASE + TX_CONTROL_REG, 0x01);
	delay(20000);
	//expecting transaction done interrupt
	cmp(SIM_HOST_BASE_ADDR + HCREG_BASE + INTERRUPT_STATUS_REG, 0x01);
	//expecting transaction done interrupt
	cmp(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_INTERRUPT_STATUS_REG, 0x01);
	//endpoint enabled, and endpoint ready cleared
	cmp(SIM_SLAVE_BASE_ADDR + SCREG_BASE + EP1_CTRL_REG, 0x01);
	printf("Checking receive data\n");
	data = 0x00;
	for (i=0; i<dataSize; i=i+1)
	{
		cmp(SIM_SLAVE_BASE_ADDR + EP1_RX_FIFO_BASE + FIFO_DATA_REG, data);
		data = data + 1;
	}

	printf("Trans test: Device address = 0x01, 2 byte IN transaction to Endpoint 2.\n");
	USBAddress = 0x01;
	USBEndPoint = 0x02;
	transType = IN_TRANS;
	dataSize = 2;
	//enable endpoint, and make ready
	write(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_CONTROL_REG, 0x71);
	write(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_ADDRESS, USBAddress);
	write(SIM_SLAVE_BASE_ADDR + SCREG_BASE + EP2_CTRL_REG, 0x03);
	write(SIM_HOST_BASE_ADDR + HCREG_BASE + TX_ADDR_REG, USBAddress);
	write(SIM_HOST_BASE_ADDR + HCREG_BASE + TX_ENDP_REG, USBEndPoint);
	write(SIM_HOST_BASE_ADDR + HCREG_BASE + TX_TRANS_TYPE_REG, transType);
	data = 0x00;
	for (i=0; i<dataSize; i=i+1)
	{
		write(SIM_SLAVE_BASE_ADDR + EP2_TX_FIFO_BASE + FIFO_DATA_REG, data);
		data = data + 1;
	}
	write(SIM_HOST_BASE_ADDR + HCREG_BASE + TX_CONTROL_REG, 0x01);
	delay(20000);
	//expecting transaction done interrupt
	cmp(SIM_HOST_BASE_ADDR + HCREG_BASE + INTERRUPT_STATUS_REG, 0x01);
	//expecting transaction done interrupt
	cmp(SIM_SLAVE_BASE_ADDR + SCREG_BASE + SC_INTERRUPT_STATUS_REG, 0x01);
	//endpoint enabled, and endpoint ready cleared
	cmp(SIM_SLAVE_BASE_ADDR + SCREG_BASE + EP2_CTRL_REG, 0x01);
	printf("Checking receive data\n");
	data = 0x00;
	for (i=0; i<dataSize; i=i+1)
	{
		cmp(SIM_HOST_BASE_ADDR + HOST_RX_FIFO_BASE + FIFO_DATA_REG, data);
		data = data + 1;
	}

	printf("Finished all tests (%d passed, %d failed)\n", 
			number_passed, number_failed);

	// delay loop
	for (i=0; i<1000; i++) {}

	// end simulation by writing exit sequence
	printf("%c", SIM_END_SEQ);

	return(0);
}
