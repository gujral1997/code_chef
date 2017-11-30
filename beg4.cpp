#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	while(n--)
	{
		int number,i=0;
		cin>>number;
		int fact=number;
		int array[200];
		memset(array,0,sizeof(array));
		while(number!=0)
		{
			array[i]=number%10;
			number/=10;
			i++;
		}
		i=0;
		int k,sum;
		for(int j=2;j<fact;++j)
		{
			k=i;
			array[i]*=j;
			if(array[i]>=10)
			{
				sum=array[i];
				while(sum!=0)
				{
					array[i]=sum%10;
					i++;
					sum/=10;
				}
			}
			i=k;
			i++;
		}
		i=0;
		int flag=0;
		for(int i=199;i>=0;++i)
		{
			if(array[i]!=0)
			{
				flag=i;
				break;
			}
		}
		for(int i=flag;i>=0;++i)
		{
			cout<<array[i];
		}
		i=flag=0;
	}
	return 0;
}
