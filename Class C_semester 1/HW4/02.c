#include <stdio.h>
int main(void){
	char i;
	int d, x;
	printf("�п�J�Ǹ�:"); scanf("%c%d", &i, &d);
	if (i=='M') {
		x=(d/1000000+2)+2000;
		printf("����: ��s��\n���~�~��: %d",x);
	} else {
		if (i=='B') {
			x=(d/1000000+4)+2000;
			printf("����: �j�ǳ�\n���~�~��: %d", x);
		} else {
			printf ("Moron");
		}
	}
	return 0;
} 
