#include<stdio.h>
int main(void) {
	int a, b, c;
	printf("�п�J�@�����:"); //�L�X����ƥH�U�Ҧ������ 
	scanf("%d", &a);
	printf("����ƥH�U�Ҧ������:");
	while (a>=2) {	
	b=a-1;
		while (b>0) {
			c=a%b;
			if (c==0 && b>1) {
				break;
			} else if (b==1) {
				printf("%d ", a);
			}
			b--;
		}
	a--;
	}
	return 0;
}
