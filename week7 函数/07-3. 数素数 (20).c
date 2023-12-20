/*
07-3. 数素数 (20)

令Pi表示第i个素数。现任给两个正整数M <= N <= 104，请输出PM到PN的所有素数。

输入格式：
输入在一行中给出M和N，其间以空格分隔。
输出格式：
输出从PM到PN的所有素数，每10个数字占1行，其间以空格分隔，但行末不得有多余空格。

输入样例：
5 27
输出样例：
11 13 17 19 23 29 31 37 41 43
47 53 59 61 67 71 73 79 83 89
97 101 103
*/
#include<stdio.h>
#include <math.h>

int isPrime(int i);
int main()

{
	int M, N;
	scanf("%d %d", &M, &N);
	
	
	int i=2, v=0, m=0;
	for(i;m<M-1;i++){
		if(isPrime(i)) m++;
	}
	for(i;m<N;i++){
		if(isPrime(i)){
			printf("%d", i);
			v++;
			m++;
			if(v<10&&m!=N){
				printf(" ");
			}else{
				printf("\n");
				v=0;
			}
		}
	}
	
	return 0;
}

int isPrime(int i){
	int x=2, y=1;
	for(x;x<=sqrt(i);x++){
		if(i%x==0){
			y=0;
			break;
		}
	}
	return y;
}
