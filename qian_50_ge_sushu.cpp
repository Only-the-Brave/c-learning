//100以内的素数
#include<stdio.h>
int main()
{
	int number_user=1;
	int count=0;
	while(count<50)
	{
		int isprime=1;
	    int i=2;
		for(;i<number_user;i++)
		{
			if(number_user%i==0)
			{
				isprime = 0;
				break;
			}
		}
		if(isprime==1)
		{
			printf("%d\t",number_user);
			count++;
			if(count%5==0)
			{
				printf("\n");
			}
		}
   	number_user++;
    }
	return 0;
}
