#include<stdio.h>

int main()
{
	int a=0, b=0;
	
	scanf("%d:%d", &a, &b);
	
	if(a<12){
		printf("%d:%d AM", a, b);
	}else if(a>12){
		printf("%d:%d PM", a-12, b);
	}else{
		printf("%d:%d PM", a, b);
	}
	
	return 0;
}
