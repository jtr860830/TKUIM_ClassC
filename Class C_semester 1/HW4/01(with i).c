#include <stdio.h>
#include <math.h>
int main(void){
	int a, b, c;
	float x1, x2;
	printf("�п�Ja, b, c �T�Ӿ��:"); scanf("%d%d%d", &a, &b, &c);
	printf("%dx^2+%dx+%d=0\n", a, b, c);
	if (b*b-4*a*c>=0) {
		if (b*b-4*a*c>0) {
			x1=(-b+sqrt(b*b-4*a*c))/(2*a);
			x2=(-b-sqrt(b*b-4*a*c))/(2*a);
			printf("��2���\nx1=%f x2=%f", x1, x2);
		} else {
			x1=(-b+sqrt(b*b-4*a*c))/(2*a);
			printf("����\nx=%f", x1);
		}
	} else {
		float x, y;
		x=-b/(2*a);
		y=sqrt(-(b*b-4*a*c))/(2*a);
		printf("�L��� ��2���\nx1=%f+%fi x2=%f-%fi", x, y, x, y);
	}
	return 0;
} 
