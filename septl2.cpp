#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	while(n--)
	{
		int length;
		cin>>length;
		int array[length+1];
		for(int i=1;i<=length;++i)
		{
		    array[i]=i;
		}
		for(int i=1;i<length;++i)
		{
			if(array[i]==i)
			{
				swap(array[i],array[i+1]);
			}
		}
		if(array[length]==length)
		{
		    swap(array[length],array[length-1]);
		}
		for(int i=1;i<=length;++i)
		{
			cout<<array[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}