#include<stdio.h>
int main()
{
	int number;
	int baiwei;
	int shiwei;
	int gewei;
	printf("������һ����λ����:");
	scanf("%d",&number);
	baiwei = number/100;
	shiwei = (number%100)/10;
	gewei = number%10;
	printf("��������������%d",gewei*100+shiwei*10+baiwei);
	return 0;    
}