/*
07-3. ������ (20)

��Pi��ʾ��i�����������θ�����������M <= N <= 104�������PM��PN������������

�����ʽ��
������һ���и���M��N������Կո�ָ���
�����ʽ��
�����PM��PN������������ÿ10������ռ1�У�����Կո�ָ�������ĩ�����ж���ո�

����������
5 27
���������
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
