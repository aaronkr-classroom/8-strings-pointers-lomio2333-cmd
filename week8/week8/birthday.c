//birthday.c
#include<stdio.h>

int main(void) {

	short birthday;
	short* ptr;//포인터 변수 선언
	ptr = &birthday;//birthday 변수 주소를 ptr에 대입

	//변수 정의
	int intVar = 42;
	float floatVar = 3.1415972;
	char charVar = 'A';
	double doubleVar = 9.81;//중력값

	//포인터 저의

	int* intPtr = &intVar;
	float* floatPtr = &floatVar;
	char* charPtr = &charVar;
	double* doublePtr = &doubleVar;
	//%p 성식은 메모리 주소를 16진수 형태로 출력
	printf("birthday 변수 주소는 %p 입니다\n",ptr);

	//변수 값과 주소를 출력
	printf("   intVar 변수 값 %d,\t 주소:%p\n",*intPtr,intPtr);
	printf(" floatVar 변수 값 %.5f,\t 주소:%p\n", *floatPtr, floatPtr);
	printf("   charVar 변수 값 %c,\t 주소:%p\n", *charPtr, charPtr);
	printf(" doubleVar 변수 값 %.2f,\t 주소:%p\n", *doublePtr, doublePtr);
	
	return 0;
}