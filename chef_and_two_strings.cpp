#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
	while(n--)
	{
		string a,b;
		int counter1=0,counter2=0;
		cin>>a>>b;
		
		for(int i=0;i<a.length();++i)
		{
			if(a.at(i)==b.at(i)&&(a.at(i)!='?'&&b.at(i)!='?'))
			{
				counter1++;
			}
			if(a.at(i)!=b.at(i)&&(a.at(i)!='?'&&b.at(i)!='?'))
			{
				counter2++;
			}
		}
		cout<<counter2<<" "<<a.length()-counter1<<endl;
	}
	return 0;
}