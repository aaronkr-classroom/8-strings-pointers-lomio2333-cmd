// tips.c
#include<stdio.h>


void Test1(short data) {
	short soft = 0;
	soft = data;
	printf("soft=%d\n",soft);

	// tips =3;// tips 변수가 재정의하면 오류발생


}

void Test2(short* ptr) {
	short soft = 0;
	soft = *ptr;
	printf("soft=%d\n",soft);

	*ptr = 3;//tips 변수(*ptr에 가리키는 것)을 업데이트
}



int main(void) {
	short tips = 5;
	printf("tips=%d\n",tips); 

	Test1(tips);//tips에 변수 값 주기
	printf("Test1 후 , tips=%d\n",tips);
	
	Test2(&tips);//tips 변수의 주소 주기
	printf("Test2 후 , tips=%d\n", tips);
	
	return 0;
}