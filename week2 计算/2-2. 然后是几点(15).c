#include <stdio.h>

int main()

{	
    int origin = 0;
	int change = 0;
	
	scanf("%d %d", &origin, &change);
	
	int a = origin / 100;
	int b = origin % 100;
	int c = 60*a+b;
	int d = c+change;
	
	int e = d/60;
	int f = d%60;
	
	int result = e*100+f;
	
	printf("%d", result);
	
	return 0;
}
