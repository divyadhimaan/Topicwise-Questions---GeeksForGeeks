#include<iostream>
using namespace std;
int main()
 {
	int t,n,k;
    cin>>t;
    while(t--)
    {
		cin>>n>>k;
		int a[n];
		int h[10000]={0};
		for(int i=0;i<n;i++)
		{
		    cin>>a[i];
		    h[a[i]]++;
		}
		for(int i=0;i<n;i++)
		{
		    if(h[a[i]]==1)
		    {
		        cout<<a[i]<<endl;
		    }
		}
    }
	return 0;
}
