#include<stdio.h>
int main()
{
	int hight;
	int inchi;
	int incun;
	printf("���������cm:");
	scanf("%d",&hight);
	inchi = hight/30.48;
	incun = ((hight/30.48)-inchi)*12.0;
	printf("��������%d��%d��",inchi,incun);
	return 0;    
}