//初见函数输入一个整数求其与后9个整数和
#include<stdio.h>
int main()
{
	int number_user;
	printf("请输入一个整数");
	scanf("%d",&number_user);
	int sum=0;
	int i;
	for(i=0;i<10;i++)
	{
		sum+=number_user;
		number_user++;
	}
	printf("sum=%d",sum);
	return 0;
}
 