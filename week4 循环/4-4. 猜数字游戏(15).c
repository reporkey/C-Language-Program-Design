/*
4-4. ��������Ϸ(15)

��������Ϸ����ϵͳ�������һ��100���ڵ����������û�����һ����������в²⣬��Ҫ���д�����Զ���������������ı��������бȽϣ�
����ʾ���ˣ���Too big����������С�ˣ���Too small��������ȱ�ʾ�µ��ˡ�����µ�����������򡣳���Ҫ��ͳ�ƲµĴ�����
���1�β³���������ʾ��Bingo!�������3�����ڲµ�����������ʾ��Lucky You!�����������3�ε�����N��>3�������ڣ�������N�Σ�
�µ�����������ʾ��Good Guess!�����������N�ζ�û�вµ�������ʾ��Game Over������������������ڵ���N��֮ǰ��
�û�������һ��������Ҳ�����Game Over��������������

�����ʽ��
�����һ���и���2��������100����
�������ֱ���ϵͳ��������������Լ��²��������N�����ÿ�и���һ���û������룬ֱ�����ָ���Ϊֹ��

�����ʽ��
��һ�������ÿ�β²���Ӧ�Ľ����ֱ������¶ԵĽ����Game Over���������

����������
58 4   
70
50
56
58
60
-2
���������
Too big
Too small
Too small
Good Guess!
*/

#include<stdio.h>

int main()
{
	int o, N;
	scanf("%d %d", &o, &N);
	int given;
	int t=1;
	for(t;t<=N;t++){
		scanf("%d", &given);
		if(given<0){
			break;
		}else if(given<o){
			printf("Too small\n");
		}else if(given>o){
			printf("Too big\n");
		}else if(given==o){
			break;
		}
	}
	if(given==o){
		if(t==1){
			printf("Bingo!");
		}else if(t<=3){
			printf("Lucky You!");
		}else {
			printf("Good Guess!");
		}
	}else if(given<0){
		printf("Game Over");
	}else{
		printf("Game Over");
	}
	return 0;
}
