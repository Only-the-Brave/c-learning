//初见函数输入两个整数，计算这两数之间所有数累加求和
#include<stdio.h>
void sum(int begin,int end)
{
	int sum=0;
	int i;
	for(i=begin;i<=end;i++)
	{
		sum+=i;
	}
	printf("%d_%dsum is%d\n",begin,end,sum);
}
int main()
{
	sum(1,10);
	sum(20,30);
	sum(35,45);
	return 0;
}