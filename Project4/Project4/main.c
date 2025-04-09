//#include <stdio.h>
//#include <stdlib.h>

//#include <time.h>

	//srand(time(NULL));
	//int dice = rand() % 6 + 1;
	//printf("주사위 값 : %d", dice);
#include<stdio.h>
#pragma warning(disable:4996)
	int main(void)

// 1. 숫자의 부호를 판단("양수","음수","0")
	{
		int num = 1;
		printf("%s \n", num > 0 ?  "양수" :  num < 0 ? "음수" : "0");
		// 2. 정수 값을 기준으로 3의 배수 이면서 5의 배수인지 판단
		printf(num %3 == 0 && num %5 ==0 ? "3의 배수 이면서 5의 배수" : "3의 배수 이면서 5의 배수가 아님"
	}

