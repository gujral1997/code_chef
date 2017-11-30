#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int array1[n],array2[n],array3[n];
		for(int i=0;i<n;i++)
		{
			cin>>array1[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>array2[i];
			array3[i]=array1[i]*array2[i];
		}
		int max=array3[0];
		int max1=array2[0];
		int ans=0;
		for(int i=1;i<n;++i)
		{
			if(max==array3[i]&&max1<array2[i])
			{
				max1=array2[i];
				max=array3[i];
				ans=i;
			}
			if(max<array3[i])
			{
				max1=array2[i];
				max=array3[i];
				ans=i;	
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}