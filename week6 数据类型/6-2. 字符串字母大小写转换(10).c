/*
6-2. 字符串字母大小写转换(10)

输入一个以#结束的字符串，本题要求将小写字母全部转换成大写字母，把大写字母全部转换成小写字母，其它字符不变。

输入格式：
输入在一行中给出一个长度不超过40的、以#结束的非空字符串。
输出格式：
在一行中按照要求输出转换后的字符串。

输入样例：
Hello World! 123#
输出样例：
hELLO wORLD! 123
a-z  97-122
A-Z  65-90
*/
#include<stdio.h>
int main()
{
	int a;
	do{
		scanf("%c", &a);
		if(a>96&&a<123){
			printf("%c", a-32);
		}else if(a>64&&a<91){
			printf("%c", a+32);
		}else if(a=='#'){
			break;
		}else{
			printf("%c", a);
		}
	}while(a!='#');
	return 0;
}
