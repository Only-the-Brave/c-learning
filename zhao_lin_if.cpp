// ��������������û�������ʱ����ʾ�û�
#include<stdio.h>
int main()
{
	int price;
	int money;
	int remain;
	printf("������Ʊ��ͽ�");
	scanf("%d %d",&money,&price);
	remain = money - price;
	if(remain<0)
	{
	printf("�ֵ��������");
	}
	else
	{
	printf("����%dԪ",remain);
	}
	return 0;
}