#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	int test[1000]={0};
	scanf("%d",&n);
	int aa[n];
	int bb[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&aa[i]);
		test[aa[i]]++;
		bb[i]=test[aa[i]];
	}
	for(int i=0;i<n;i++)
	{
		printf("%d",bb[i]);
		if(i==(n-1))
		{
			break;
		}
		else
		{
			printf(" ");
		}
		
	}
	return 0;
}
