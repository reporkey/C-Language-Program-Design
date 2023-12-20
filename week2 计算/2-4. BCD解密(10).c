#include <stdio.h>

int main()

{
	int a=0;
	scanf("%d", &a);
	
	int b=a/16;
	int c=a%16;
	
	printf("%d", b*10+c);
	
	return 0;
}
