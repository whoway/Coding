#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int a=0,b=0,c=0;

	while(1)
	{
		for(int i=1;;i++)
		{
			if((n-50*i)<0)
			{
				a=i-1;
				break;
			}
		}
		
		for(int i=1;;i++)
		{
			if((n-50*a-30*i)<0)
			{
				b=i-1;
				break;
			}
		}
		
		for(int i=1;;i++)
		{
			if((n-50*a-30*b-10*i)<0)
			{
				c=i-1;
				break;
			}
		}
		
		if((50*a+30*b+10*c)==n)
		{
			break;
		}
	}
	printf("%d",(7*a+4*b+c));
	return 0;
}
