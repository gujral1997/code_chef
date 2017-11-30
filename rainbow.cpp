#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	str a="yes";
	while(n--)
	{
		cin>>length;
		int array[length];
		bool array1[10];
		memset(array1,false,sizeof(array1));
		for(int i=0;i<length;++i)
		{
			cin>>array[i];
			array1[array[i]-1]=true;
		}
		for(int i=0;i<length-1;++i)
		{
			if(array1[i]=false)
			{
				a="no"
			}
			if(array[i+1]-array[i]>1)
			{
				a="no";
			}
			if(array[i]!=array[length-i-1])
			{
				a="no";
			}

		}
		cout<<a<<endl;
		a="yes";
	}
	return 0;
}