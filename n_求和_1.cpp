//������������һ�������������9��������
#include<stdio.h>
int main()
{
	int number_user;
	printf("������һ������");
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
 