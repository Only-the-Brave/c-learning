#include<stdio.h>
int main()
{
	int number_user=0;
	int i_count=0;
	int count;
	int sum=0;
	double avg;
	do
	{
		printf("请输入整数:");
		scanf("%d",&number_user);
		sum = sum+number_user;
		i_count++;
		count=i_count;
	}
	while(number_user!=-1);
	if(i_count==1)
	{
		i_count++;
		count=i_count-1;
	}
	avg=(sum+1)/(i_count-1);
	printf("你输入的%d个整数,他们的和是%d,平均数是%f",count-1,sum+1,avg);
	return 0;
}