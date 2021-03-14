#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t,n;
    cin>>t;
    while(t--)
    {
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
		    cin>>a[i];
		}
		int c=0,max=0;
		for(int i=0;i<n;i++)
		{
		    if(a[i]>0)
		    {
		        c++;
		    }
		    else
		    {
		        c=0;
		    }
		    if(c>max)
		        max=c;
		}
		cout<<max<<endl;
		
    }
	return 0;
}
