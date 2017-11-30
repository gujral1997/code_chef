#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,count=0;
		cin>>n;
		int array1[n],array2[n],array3[n];
		for(int i=0;i<n;++i)
		{
			cin>>array1[i];
			if(i>0)
			{
				array3[i]=array1[i]-array1[i-1];
			}
			else
			{
			    array3[i]=array1[i];
			}
		}
		for(int i=0;i<n;++i)
		{
			cin>>array2[i];
		}
		for(int i=0;i<n;++i)
		{
			if(array3[i]>=array2[i])
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}