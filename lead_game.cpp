#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b,n;
	cin>>n;
	int array[n];
	bool array2[n];
	memset(array2,true,sizeof(array2));
	for(int i=0;i<n;++i)
	{
		cin>>a>>b;
		int c=a-b;
		if(c<0)
		{
		    
			array2[i]=false;
		}
		array[i]=abs(c);
	}
	int max=array[0];
	int flag=0;
	for(int i=0;i<n;++i)
	{
		if(max<=array[i])
		{
			max=array[i];
			flag=i;
		}
	}
	if(array2[flag]==false)
	{
		flag=2;
	}
	else
	{
		flag=1;
	}
	cout<<flag<<" "<<max;
	return 0;
}