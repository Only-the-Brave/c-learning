#include<stdio.h>
int main()
{
	int a;
//	int b;
//	int c;
//	int d;
	printf("请输入一个小于6的整数：");
	scanf("%d",&a);
	int i,j,k;
	int count=0;
	for(i=a;i<=a+3;i++)
	{
		for(j=a;j<=a+3;j++)
		{
			for(k=a;k<=a+3;k++)
			{
				 if(i!=j)
				 {
				 	if(i!=k)
				 	{
				 		if(j!=k)
				 		printf("%d ",i*100+j*10+k);
				 		count++;
				 		if(count%6==0)
				 		{
				 			printf("\n");
						}
					}
				 }
			}
		}
	}
	return 0;
}