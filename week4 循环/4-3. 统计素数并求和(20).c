/*
4-3. 统计素数并求和(20)

本题要求统计给定整数M和N区间内素数的个数并对它们求和。

输入格式：
输入在一行中给出2个正整数M和N（1<=M<=N<=500）。

输出格式：
在一行中顺序输出M和N区间内素数的个数以及它们的和，数字间以空格分隔。

输入样例：
10 31
输出样例：
7 143
*/

#include<stdio.h>

int main()
{
	int M, N;
	scanf("%d %d", &M, &N);
	
	int number=0, sum=0;
	int a=2;
	for(M;M<=N;M++){
		a=2;
		for(2;a<=M;a++){
			if(M%a==0){
				if(a!=M){
					break;
				}else{
					number++;
					sum+=M;
				}
			}
		}
	}
	printf("%d %d", number, sum);
	return 0;
}
