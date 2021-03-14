#include<iostream>
using namespace std;
int main()
 {
	int t,n,k;
    cin>>t;
    while(t--)
    {
		cin>>n;
		int a[n];
		int b[n];
		for(int i=0;i<n;i++)
		{
		    cin>>a[i];
		    int temp = a[i];
		  //  cout<<temp<<endl;
		    b[temp] = i+1;
		    
		}
		
		for(int i=1;i<=n;i++)
		{
		    cout<<b[i]<<" ";
		}
		cout<<endl;
    }
	return 0;
}
