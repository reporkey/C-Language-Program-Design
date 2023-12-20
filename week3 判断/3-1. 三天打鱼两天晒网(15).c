#include<stdio.h>

int main()
{
	int a=0;
	int type=0;
	
	scanf("%d", &a);
	
	type = a % 5;
	
	switch(type){
		case 1:
		case 2:
		case 3:
			printf("Fishing ");
			break;
		default:
			printf("Drying ");
			break;
	}
	
	printf("in day %d", a);
	
	return 0;
}
