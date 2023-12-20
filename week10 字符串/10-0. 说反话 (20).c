/*
10-0. 说反话 (20)


给定一句英语，要求你编写程序，将句中所有单词的顺序颠倒输出。

输入格式：测试输入包含一个测试用例，在一行内给出总长度不超过80的字符串。字符串由若干单词和若干空格组成，
其中单词是由英文字母（大小写有区分）组成的字符串，单词之间用1个空格分开，输入保证句子末尾没有多余的空格。

输出格式：每个测试用例的输出占一行，输出倒序后的句子。

输入样例：
Hello World Here I Come
输出样例：
Come I Here World Hello
*/
#include<stdio.h>
#include<string.h>

int main()
{
	char a[81] = "";
	char i = 0;
//	输入 
	do{
		scanf( "%c", &a[i] );
	}while( a[i++] != '\n' );
//	找空格
	char b[81] = "";
	char k = 0, j = 0;
	for( k=0; k<i; k++ ){
		if( a[k] == ' ' ){
			b[j++] = k;
		}
	}
//输出
//	{
//		int h=0;
//		printf("%d\t%d\n", i, j);
//		for(h; h<i; h++){
//			printf("%c", a[h]);
//		}
//		
//		for(h=0; h<j; h++){
//			printf("%d\n", b[h]);
//		}
//	}
//j = 空格数
//b[] = 空格的位置
	
	int x=0;
	for( j; j>=0; j-- ){
		for( x=b[j]+1 ; a[x]!=' '&&a[x]!='\n'&&x!=b[j+1] ; x++ ){
			printf("%c", a[x]);
		}
		printf(" ");
	}
	return 0;
}

