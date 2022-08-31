// 找零计算器并当用户·金额不足时候提示用户
#include<stdio.h>
int main()
{
	int price;
	int money;
	int remain;
	printf("请输入票面和金额：");
	scanf("%d %d",&money,&price);
	remain = money - price;
	if(remain<0)
	{
	printf("兄弟你得余额不足");
	}
	else
	{
	printf("找你%d元",remain);
	}
	return 0;
}