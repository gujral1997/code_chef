#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	while(n--)
	{
		int a,ignored,tracked;
		cin>>a>>ignored>>tracked;
		bool array1[a],array2[a];
		memset(array1,false,sizeof(array1));
		memset(array2,false,sizeof(array1));
		for(int i=0;i<ignored;++i)
		{
			int a;
			cin>>a;
			array1[a-1]=true;
		}
		for(int i=0;i<tracked;++i)
		{
			int a;
			cin>>a;
			array2[a-1]=true;
		}
		int count1=0,count2=0;
		for(int i=0;i<a;i++)
		{
			if(array1[i]&array2[i])
			{
				count2++;
			}
			if(array1[i]|array2[i])
			{
				count1++;
			}
		}
		cout<<count2<<" "<<a-count1<<endl;
	}
	return 0;
}