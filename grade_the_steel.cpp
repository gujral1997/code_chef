#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		bool array[3];
		memset(array,false,sizeof(array));
		int a,c;
		float b;
		cin>>a>>b>>c;
		if(a>50)
		{
			array[0]=true;
		}
		if(b<0.7)
		{
			array[1]=true;
		}
		if(c>5600)
		{
			array[2]=true;
		}
		if(array[0]&&array[1]&&array[2])
		{
			cout<<10<<endl;
		}
		else if(array[0]&&array[1]&&array[2]==false)
		{
			cout<<9<<endl;
		}
		else if(array[1]&&array[2]&&array[0]==false)
		{
			cout<<8<<endl;
		}
		else if(array[0]&&array[2]&&array[1]==false)
		{
			cout<<7<<endl;
		}
		else if((array[0]==true&&array[2]==false&&array[1]==false)||(array[0]==false&&array[2]==true&&array[1]==false)||(array[0]==false&&array[2]==false&&array[1]==true))
		{
			cout<<6<<endl;
		}
		else
		{
			cout<<5<<endl;
		}
	}
	return 0;
}