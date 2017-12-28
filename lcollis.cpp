#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int r,c,count=0;
		cin>>r>>c;
		char array[r][c],array2[c];
		memset(array2,0,sizeof(array2));
		for(int i=0;i<r;++i)
		{
			for(int j=0;j<c;++j)
			{
				cin>>array[i][j];
				if(array[i][j]=='1')
				{	
					array2[j]++;
				}
			}
		}
		for(int i=0;i<c;++i)
		{
			
			count=count+(((array2[i]-1)*array2[i])/2);
		
		}
		cout<<count<<endl;
	}
	return 0;
}
