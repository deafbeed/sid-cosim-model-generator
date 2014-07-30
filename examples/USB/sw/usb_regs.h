#ifndef _USB_REGS_H_
#define _USB_REGS_H_

#include <cyg/infra/cyg_type.h>
#include <sys/types.h>
#include <stdio.h>
#include <time.h>

#define SID_BASE_ADDR 0xD800060
#define SIM_HOST_BASE_ADDR 0x000
#define SIM_SLAVE_BASE_ADDR 0x100
#define HCREG_BASE 0x00
#define HCREG_BASE_PLUS_0X10 0x10
#define HOST_RX_FIFO_BASE 0x20
#define HOST_TX_FIFO_BASE 0x30
#define SCREG_BASE 0x40
#define SCREG_BASE_PLUS_0X10 0x50
#define EP0_RX_FIFO_BASE 0x60
#define EP0_TX_FIFO_BASE 0x70
#define EP1_RX_FIFO_BASE 0x80
#define EP1_TX_FIFO_BASE 0x90
#define EP2_RX_FIFO_BASE 0xa0
#define EP2_TX_FIFO_BASE 0xb0
#define EP3_RX_FIFO_BASE 0xc0
#define EP3_TX_FIFO_BASE 0xd0
#define HOST_SLAVE_CONTROL_BASE 0xe0
#define ADDRESS_DECODE_MASK 0xf0
#define HOST_SLAVE_CONTROL_REG 0x0
#define HOST_SLAVE_VERSION_REG 0x1
#define USBHOSTSLAVE_VERSION_NUM 0x20
#define SC_CONTROL_REG 0x10
#define TX_LINE_CONTROL_REG 0x2
#define SETUP_TRANS 0x0
#define OUTDATA0_TRANS 0x2
#define IN_TRANS 0x1
#define INTERRUPT_STATUS_REG 0x8
#define RX_CONNECT_STATE_REG 0xe
#define SC_INTERRUPT_STATUS_REG 0x12
#define SC_LINE_STATUS_REG 0x11
#define SC_ADDRESS 0x14
#define EP0_CTRL_REG 0x0
#define TX_ADDR_REG 0x4
#define TX_ENDP_REG 0x5
#define TX_TRANS_TYPE_REG 0x1
#define FIFO_DATA_REG 0x0
#define TX_CONTROL_REG 0x0
#define EP1_CTRL_REG 0x4
#define EP2_CTRL_REG 0x8
#define SIM_END_SEQ (char)4

// Integers to keep track of test cases passed/failed
int number_passed;
int number_failed;

#endif // _USB_REGS_H_
