#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
    int  a = 0, b = 0, c = 0;
    int sum = 0;
    printf("���ڸ� ���� �Է� \n");
    scanf("&d &d &d", &a, &b, &c);
    sum = a + b + c;
    printf("������ �� %d",sum);

    return 0;
}