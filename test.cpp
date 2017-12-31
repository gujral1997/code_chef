#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		char array[50],a=' ';
		int i=0,count=0;
		while(a!='\n')
			{
				cin>>array[i++];
				a=cin.get();
				count++;
			}
			int max=0;
		for(int j=0;j<count;++j)
			{
				if(max<array[j]&&array[j]!=count)
				{
					max=array[j];
				}
			}
	cout<<max<<endl;
	}
	return 0;
}