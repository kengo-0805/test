#include<stdio.h>
int main(void)
	{
	long x;
	long i;
	long ans=1;
	printf("数値を入力してね♡:");
	scanf("%ld",&x);
	for(i=1;i<=x;++i){
	ans=ans*i;
	}
	printf("%ldの階乗は%ld",x,ans);
	return 0;
	}
