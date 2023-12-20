/*
07-1. 换个格式输出整数 (15)

让我们用字母B来表示“百”、字母S表示“十”，用“12...n”来表示个位数字n（<10），换个格式来输出任一个不超过3位的正整数。
例如234应该被输出为BBSSS1234，因为它有2个“百”、3个“十”、以及个位的4。

输入格式：每个测试输入包含1个测试用例，给出正整数n（<1000）。
输出格式：每个测试用例的输出占一行，用规定的格式输出n。

输入样例1：
234
输出样例1：
BBSSS1234
输入样例2：
23
输出样例2：
SS123
*/
#include<stdio.h>
int main()
{
	int num;
	scanf("%d", &num);

//位数	
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
