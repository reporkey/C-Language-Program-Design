/*
7-0. д������� (20)

����һ����Ȼ��n���������λ����֮�ͣ��ú���ƴ��д���͵�ÿһλ���֡�

�����ʽ��ÿ�������������1��������������������Ȼ��n��ֵ�����ﱣ֤nС��10e100��
�����ʽ����һ�������n�ĸ�λ����֮�͵�ÿһλ��ƴ�����ּ���1 �ո񣬵�һ�������һ��ƴ�����ֺ�û�пո�

����������
1234567890987654321123456789
���������
yi san wu
*/

#include<stdio.h>
int main()
{
	double sum =0;
	int num=0;
	while(scanf("%c", &num) &&num!='\n'){
		sum =sum+num-'0';
	}
	
	int i=1;
	double sum1 =sum;
	while(sum1>9){
		i*=10;
		sum1/=10;
	}
	
	int read;
	do{
		read=sum/i;
		sum=sum-read*i;
		i/=10;
		switch(read){
			case 0:
				printf("ling");
				break;
			case 1:
				printf("yi");
				break;
			case 2:
				printf("er");
				break;
			case 3:
				printf("san");
				break;
			case 4:
				printf("si");
				break;
			case 5:
				printf("wu");
				break;
			case 6:
				printf("liu");
				break;
			case 7:
				printf("qi");
				break;
			case 8:
				printf("ba");
				break;
			case 9:
				printf("jiu");
				break;
		}
		if(i>0){
			printf(" ");
		}
	}while(i>0);
	return 0;
}
