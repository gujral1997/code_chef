#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
	int length,sum1=0,sum2=0,ans=1;
	scanf("%d",&length);
	int array[length],array1[length],array2[length];
	for(int i=0;i<length;++i)
	{
		scanf("%d",&array[i]);
	}
	for(int i=0;i<length;++i)
	{
		sum1+=array[i];
		array1[i]=sum1;
		sum2+=array[length-1-i];
		array2[length-1-i]=sum2;
	}
	int min=sum1+sum2;
	for(int i=0;i<length;++i)
	{
		if(min>(array1[i]+array2[i]))
		{
			min=array1[i]+array2[i];
			ans=i;
		}
	}
	printf("%d\n",ans+1);
	}
	return 0;
}