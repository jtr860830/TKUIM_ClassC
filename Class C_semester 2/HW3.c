//��ޤ@C 404632407 �¬�Y 
#include<stdio.h>
int sum1(int x);//�̫�T�줧�M 
int sum2(int y);//�̫e�T�줧�M 

int main(void) {
	int n;
	printf("�п�J���@���:");
	scanf("%d", &n);
	printf("�̫e��T���`�M���O��:%d,%d", sum1(n), sum2(n));
	return 0;
}

int sum1(int x) {
	int a[3];
	for(int i=0; i<=2; i++) {
		a[i]=x%10;
		x/=10;
	}
	return a[0]+a[1]+a[2];
} //�}�C���C�ӼƳ�����x���Ӧ�� �M��C�����h�@�� ���T��

int sum2(int y) {
	int b[3];
	while (true) {
		if (y/1000<1) {
			b[0]=y%10;
			b[1]=y/10%10;
			b[2]=y/100%10;
			break;
		}
		y/=10;
	}
	return b[0]+b[1]+b[2];
} //���N�ư���ѤT�� �M��N�i�H���O�x�s�F 
