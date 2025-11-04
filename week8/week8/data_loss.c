//data_loss.c
#include<stdio.h>

int main(void) {

	unsigned int x = 0x12345678;
	long lg = 2147483648;//롱의 최댓값
	double xl = 123456789123.456789;
	printf("Uint:%d\n",x);
	printf("Uint->Short:%d\n",(short)x);
	printf("Uint->Char:%d\n", (char)x);
	printf("\nLong:%d\n", lg);
	printf("Long->int:%d\n", (int)lg);
	printf("Long->Char:%d\n", (char)lg);
	printf("Dbl:%lf\n", xl);
	printf("Dbl->long:%d\n", (long)xl);
	printf("Dbl->short:%d\n", (short)xl);

	
	
	return 0;
}