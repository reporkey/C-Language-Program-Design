#include<stdio.h>

int main()
{
	int a = 0;
	
	scanf("%d", &a);
	printf("Speed: %d - ", a);
	
	if(a<=60){
		printf("OK");
	}else{
		printf("Speeding\n");
	};
	return 0;
}
