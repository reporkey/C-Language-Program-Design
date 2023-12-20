#include <stdio.h>

int main()

{
	int o = 0;
	scanf("%d", &o);
	
	int a = o%10;
	int b = o/10%10;
	int c = o/10/10;
	
	int d = 100*a + 10*b + c;
	printf("%d", d);
	
	return 0;
}
