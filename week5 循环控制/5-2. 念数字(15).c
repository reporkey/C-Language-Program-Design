/*
5-2. ������(15)

����һ�����������ÿ�����ֶ�Ӧ��ƴ����������Ϊ����ʱ���������fu���֡�ʮ�����ֶ�Ӧ��ƴ�����£�

0: ling
1: yi
2: er
3: san
4: si
5: wu
6: liu
7: qi
8: ba
9: jiu
�����ʽ��
������һ���и���һ���������磺 1234 ��
��ʾ�������������������������

�����ʽ��
��һ����������������Ӧ��ƴ����ÿ�����ֵ�ƴ��֮���ÿո�ֿ�����ĩû�����Ŀո��� yi er san si��

����������
-600
���������
fu liu ling ling
*/

#include<stdio.h>
int main()
{
	int o;
	scanf("%d", &o);
	
	if(o<0){
		printf("fu ");
		o*=-1;
	}
//	��λ�� 
	int n=1, o1=o;
	while(o1>9){
		n*=10;
		o1/=10;
	}
//	print
	int o2=o, dushu;
	do{
		dushu=o2/n;
		o2=o2-dushu*n;
		n/=10;
		switch(dushu){
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
		if(o2>0){
			printf(" ");
		}
	}while(o2!=0);
//	�ж�0
	while(n!=0){
		printf(" ling");
		n/=10;
	} 
	return 0;
}
