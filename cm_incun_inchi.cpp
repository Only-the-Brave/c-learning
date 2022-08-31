#include<stdio.h>
int main()
{
	int hight;
	int inchi;
	int incun;
	printf("请输入身高cm:");
	scanf("%d",&hight);
	inchi = hight/30.48;
	incun = ((hight/30.48)-inchi)*12.0;
	printf("你的身高是%d尺%d寸",inchi,incun);
	return 0;    
}