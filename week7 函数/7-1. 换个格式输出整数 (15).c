/*
07-1. ������ʽ������� (15)

����������ĸB����ʾ���١�����ĸS��ʾ��ʮ�����á�12...n������ʾ��λ����n��<10����������ʽ�������һ��������3λ����������
����234Ӧ�ñ����ΪBBSSS1234����Ϊ����2�����١���3����ʮ�����Լ���λ��4��

�����ʽ��ÿ�������������1����������������������n��<1000����
�����ʽ��ÿ���������������ռһ�У��ù涨�ĸ�ʽ���n��

��������1��
234
�������1��
BBSSS1234
��������2��
23
�������2��
SS123
*/
#include<stdio.h>
int main()
{
	int num;
	scanf("%d", &num);

//λ��	
	int num1=num, n=1;
	while(num1>9){
		num1/=10;
		n*=10;
	}
	
	int hundred, decade, unit;
	if(n=100){
		hundred=num/100;
		num=num-100*hundred;
		n/=10;
	}
	if(n=10){
		decade=num/10;
		num=num-10*decade;
		n/=10;
	}
	if(n=1){
		unit=num;
	}
	
	for(;hundred>0;hundred--){
		printf("B");
	}
	for(;decade>0;decade--){
		printf("S");
	}
	int i=1;
	for(i;i<=unit;i++){
		printf("%d", i);
	}
	return 0;
}
