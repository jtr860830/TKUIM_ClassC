//��ޤ@C 404632407 �¬�Y
#include<stdio.h>

void exchange3(int *x, int *y, int *z);

int main(void) {
	int a, b, c;
	printf("�п�J�T�Ӿ��:");
	scanf("%d%d%d", &a, &b, &c);
	exchange3(&a, &b, &c);
	printf("a=%d, b=%d, c=%d", a, b, c);
	return 0;
}

void exchange3(int *x, int *y, int *z) {
	int temp;
	temp=*x;
	*x=*y;
	*y=*z;
	*z=temp;
}
