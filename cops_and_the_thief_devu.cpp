#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,x,y;
		bool array[101];
		memset(array,true,sizeof(array));
		cin>>m>>x>>y;
		int number=x*y;
		while(m--)
		{
			int position;
			cin>>position;
			int flag1=position+number;
			int flag2=position-number;
			if(flag1>100)
			{
				flag1=100;
			}
			if(flag2<1)
			{
				flag2=1;
			}
			for(int i=flag2;i<=flag1;++i)
			{
				array[i]=false;
			}
		}
		int counter=0;
		for(int i=1;i<=100;++i)
		{
			if(array[i]==true)
			{
				counter++;
			}
		}
		cout<<counter<<endl;
	}
	return 0;
}