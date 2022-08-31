//100以内的素数
#include<stdio.h>
int main()
{
	int number_user=1;
	while(number_user<=100)
	{
		int isprime=1;
	    int i=2;
		for(;i<number_user;i++)
		{
			if(number_user%i==0)
			{
				isprime = 0;
				break;;
			}
		}
		if(isprime==1)
			{
				printf("%d\n",number_user);
			}
			else
			{
			}
	number_user++;
	}
}



