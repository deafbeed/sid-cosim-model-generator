/* this is a simple hello world program */
#include <cyg/infra/cyg_type.h>
#include <sys/types.h>
#include <stdio.h>

#define REG0	0xD800060
#define REG1	0xD800064
#define REG2	0xD800068
#define REG3	0xD80006C
#define REG4	0xD800070
#define REG5	0xD800062

void reg_write ( void );
void reg_read1( void );
void reg_read2( void );

int main(void)
{
	printf("Starting pwm programming..\n");

	reg_write();
//	reg_read1();
//	reg_read2();
  
	return 0;
}

void reg_write (void) {
  cyg_uint32 reg_val;
	unsigned int count=0;
	cyg_uint32 input_i;

	// Perform PWM Programming
	// PWM Interrupt Reg
//	*(volatile cyg_uint32 *)REG2 = 0x7;
//	*(volatile cyg_uint32 *)REG5 = 0x7;

	// PWM Sample Reg
	*(volatile cyg_uint32 *)REG3 = 0x1;
	*(volatile cyg_uint32 *)REG3 = 0x2;
	*(volatile cyg_uint32 *)REG3 = 0x4;
	*(volatile cyg_uint32 *)REG3 = 0x8;

	// PWM Period Reg
	*(volatile cyg_uint32 *)REG4 = 0x11;
	
	// PWM Control Reg
	*(volatile cyg_uint32 *)REG0 = 0x10005;

	// end simulation by writing exit sequence
	printf("%c", (char)4);
}

void reg_read1(void) {
  cyg_uint32 reg_val;

	// Read the Reg
	reg_val = *(volatile cyg_uint32 *)REG3;
	//printf("Value at 0x%X : 0x%X\n", REG3, reg_val);

	// Read the Reg
	reg_val = *(volatile cyg_uint32 *)REG4;
	//printf("Value at 0x%X : 0x%X\n", REG4, reg_val);
}

void reg_read2(void) {
  cyg_uint32 reg_val;

	
	// Read the Reg
	reg_val = *(volatile cyg_uint32 *)REG0;
	//printf("Value at 0x%X : 0x%X\n", REG0, reg_val);

}
