#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	int a=n, b=n+1, c=n+2, d=n+3;
	
	printf("%d%d%d %d%d%d %d%d%d %d%d%d %d%d%d %d%d%d\n", a,b,c, a,b,d, a,c,b, a,c,d, a,d,b, a,d,c);
	printf("%d%d%d %d%d%d %d%d%d %d%d%d %d%d%d %d%d%d\n", b,a,c, b,a,d, b,c,a, b,c,d, b,d,a, b,d,c);
	printf("%d%d%d %d%d%d %d%d%d %d%d%d %d%d%d %d%d%d\n", c,a,b, c,a,d, c,b,a, c,b,d, c,d,a, c,d,b);
	printf("%d%d%d %d%d%d %d%d%d %d%d%d %d%d%d %d%d%d\n", d,a,b, d,a,c, d,b,a, d,b,c, d,c,a, d,c,b);
	
	
	return 0;
}
