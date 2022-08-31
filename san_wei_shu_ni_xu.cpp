#include<stdio.h>
int main()
{
	int number;
	int baiwei;
	int shiwei;
	int gewei;
	printf("请输入一个三位整数:");
	scanf("%d",&number);
	baiwei = number/100;
	shiwei = (number%100)/10;
	gewei = number%10;
	printf("该整数的逆序是%d",gewei*100+shiwei*10+baiwei);
	return 0;    
}