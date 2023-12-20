#include <stdio.h>

int main()

{
	int cm = 0 ;
	
	scanf("%d", &cm);
	
	int A = cm / 30.48 * 12;
    int foot = A / 12;
    int inch = A % 12;
	
	printf("%d %d", foot, inch);
	
	return 0;
}
