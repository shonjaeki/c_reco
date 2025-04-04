#include <stdio.h>
int main(void)
{



	printf("int : % d\n",1);
	printf("char : %d\n", '1');
	printf("print integer : %d\n", 127);
	printf("%d + %d = %d\n", 5, 7,5+7);
	printf("int %d, f load %f, char %c string %s\n", 1, 1.f, '1', "1");


	// 이름, 국어점수, 영어점수, 수학점수, 총점, 평균
	printf("이름 국어 영어 수학 총점 평균\n");
	printf("============================== \n");
	printf("%s   %d    %d   %d  %d  %.2f\n", "김길동", 80, 90, 80, 80 + 90 + 80, (80 + 90 + 80) / 3.f);
	
	printf("%10s%s\n", "hello", "world");
	printf("%-10s%s\n", "hello", "world");
	printf("%10.2s%s\n", "hello", "world");
	
	printf("lead zero lest : %d\n", 3);
	printf("lead zero lest : %3d\n", 3);
	printf("lead zero lest : %03d\n", 3);

	printf("abcde12345\r123");
	printf("쌍따옴표 표현 :\" ");
	printf("홑따옴표 표현 :\' ");
	printf("역슬래시 표현 :\\" );
	printf("현재 작업중인 폴더 이름은 C:\\Users\\TJ\\source\\repos\\Project1\\Project1");
	printf("int의 크기 : %d\n", sizeof(int));
	printf("f loat의 크기 : %d\n", sizeof(float));
	printf("char의 크기 : %d\n", sizeof(char));
	//printf("Hello World!"); // 설명문
	//printf("Hi,TJ");
	
	printf("\n");
	printf("%f,:: %f,:: %f,%f",1.0,-0.100,2.,.51234512345,-.100f);
	return 0;
	// 주석 메모
	// () : 소괄호, 괄호
	// {} : 중괄호. 블럭
	// [] : 대괄호
	// "  : double quoto, 쌍따옴표
	// '  : single quoto, 홑따옴표
	// `  : back tick, 백틱
	// /  : slash. 슬래시
	/*
		범위 주석 구간
	*/
}
