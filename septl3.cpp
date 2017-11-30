#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	while(n--)
	{
		bool array[10],array1[10];
		memset(array,false,sizeof(array));
		string a;
		cin>>a;
		char searched='0';
		for(int i=0;i<10;++i)
		{
			if(a.find(searched)!=-1)
			{
				array[i]=true;
			}
			searched++;
		}
		searched='0';
		for(int i=0;i<10;++i)
		{
			if(a.find(searched)!=-1)
			{
				array[i]=true;
			}
			searched++;
		}
		for(int i=0;i<10;++i)
		{
			if(a.find(searched)!=-1)
			{
				a.erase(a.find(searched));
			}
			searched++;
		}
		for(int i=0;i<10;++i)
		{
			if(a.find(searched)!=-1)
			{
				array1[i]=true;
			}
			searched++;
		}
		if(array[6]==true)
		{
			for(int i=5;i<10;++i)
			{
				if(i==6&&array1[6]==true)
				{
					i++;
				}
				if(array[i]==true)
				cout<<char(60+i);
			}
		}
		if(array[7]==true)
		{
			for(int i=0;i<10;++i)
			{
				if(i==7&&array1[7]==true)
				{
					i++;
				}
				if(array[i]==true)
				cout<<char(70+i);
			}
		}
		if(array[8]==true)
		{
			for(int i=0;i<10;++i)
			{
				if(i==8&&array1[8]==true)
				{
					i++;
				}
				if(array[i]==true)
				cout<<char(80+i);
			}
		}
		if(array[9]==true)
		{
			for(int i=0;i<2;++i)
			{
				if(array[i]==true)
				cout<<char(90+i);
			}
		}

	}
	return 0;
}