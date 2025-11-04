// const_ptr.c
#include<stdio.h>

int main(void) {
	int x = 10 , y = 20;
	int* const p1 = &x;//주소 변경 불가능, 값 변경 가능

	*p1 = 15;
	printf("x:%d, y:%d, p1:%d\n",x,y,*p1);
	//p1=&y; 불가능

	const int* p2 = &x; //주소 변경 가능, 값 변경 불가능
	p2 = &y;
	printf("x:%d, y:%d, p2:%d\n", x, y, *p2);
	//*p2=25;불가능
	
	const int* const p3 = &x;//주소와 값 변경 불가능
	printf("x:%d, y:%d, p3:%d\n", x, y, *p3);
	//*p3=30; 불가능
	//p3=&y; 불가능




	return 0;
}