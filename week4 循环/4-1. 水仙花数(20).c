/*
4-1. 水仙花数(20)
水仙花数是指一个N位正整数（N>=3），它的每个位上的数字的N次幂之和等于它本身。例 如：153 = 13 + 53+ 33。 本题要求编写程序,计算所有N位水仙花数。

输入格式：

输入在一行中给出一个正整数N（3<=N<=7）。

输出格式：
按递增顺序输出所有N位水仙花数，每个数字占一行。

输入样例：
3
输出样例：
153
370
371
407
*/

#include<stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	int x=N;
	int i=1;
	for(x;x>1;x--){
		i*= 10;
	}
	int s=i;
	x=N;
	for(s;i<s*10;i++){
		int a, b, j=i, sum=0;
		while(j>0){
			a=b=j%10;
			j=j/10;
			for(x;x>1;x--){
				a=b*a;
			}
			x=N;
			sum+=a;
		}
		if(sum==i){
			printf("%d\n", sum);
		}
	}
	return 0;
}
