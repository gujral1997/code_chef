#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int number=n+k;
		bool array[number+1];
		memset(array,false,sizeof(array));
		int a;
		while(n--)
		{
			cin>>a;
			array[a]=true;
		}
		int i=0;
		while(k)
		{
			if(array[i]==false)
			{
				array[i]=true;
				k--;
			}
			i++;
			if(i==number)
			{
				break;
			}
		}
		i=0;
		for(int j=0;j<number;++j)
		{
			if(array[j]==false)
			{
				i=1;
				cout<<j<<endl;
				break;
			}
		}
		if(i==0)
		{
			cout<<number<<endl;
		}
	}
	return 0;
}