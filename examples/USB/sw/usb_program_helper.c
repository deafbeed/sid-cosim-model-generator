#include "usb_regs.h"

void write(long int addr, int data)
{
//	printf("Function: write %ld %d.\n", addr, data);
	addr += SID_BASE_ADDR;
	*(volatile char *)addr = data;
}

int read(long int addr)
{
//	printf("Function: read %ld.\n", addr);
	addr += SID_BASE_ADDR;
	int data = *(volatile char *)addr;
	return(data);
}

void delay(int count)
{
	clock_t start_time = clock();
	clock_t end_time = clock();
	while ((end_time - start_time) < count)
		end_time = clock();
}

bool cmp(long int addr, int reference)
{
	bool return_value = true;
//	printf("Function: cmp %ld %d.\n", addr, reference);
	addr += SID_BASE_ADDR;
	int data = *(volatile char *)addr;
	if (data != reference)
	{
		return_value = false;
		printf("--- ERROR: At address 0x%X, got 0x%X, expected 0x%X.\n", 
				addr, data, reference);
		number_failed ++;
	}
	else
	{
		number_passed ++;
//		printf("--- PASSED \n");
	}
	return(return_value);
}
