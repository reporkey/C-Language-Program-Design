#include <stdio.h>

int main()
{
	int hours1 = 0, minutes1 = 0;
	int hours2 = 0, minutes2 = 0;
	
	scanf("%d %d", &hours1, &minutes1);
	scanf("%d %d", &hours2, &minutes2);
	
	int t1 = hours1 * 60 + minutes1;
	int t2 = hours2 * 60 + minutes2;
	
	int T = t2 - t1;
	
	printf("时间是%d小时%d分。\n", T/60, T%60);
	
	return 0; 

}
