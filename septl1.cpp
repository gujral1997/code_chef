#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int length,array[length],array1[length],array2[length],sum1=0,sum2=0,ans=0;
	scanf("%d",&length);
	for(int i=0;i<length;++i)
	{
		scanf("%d",&array[i]);
	}
	for(int i=0;i<length;++i)
	{
		sum1+=array[i];
		array1[i]=sum1;
		sum2+=array[length-1-i];
		array2[i]=sum2;
	}
	int min=array1[0]+array2[0];
	for(int i=0;i<n;++i)
	{
		if(min>array1[i]+array2[n-i-1])
		{
			min=array1[i]+array2[n-i-1];
			ans=i+1;
		}
	}
	printf("%d\n",ans);
	}
	return 0;
}