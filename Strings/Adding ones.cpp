#include <iostream>
using namespace std;

int main() {
	int t,n,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    int a[k];
	    for(int i=0;i<k;i++)
	    {
	        cin>>a[i];
	       // a[i]-=1;
	    }
	    int arr[n] = {};
	   // int j=0;
	    for(int j=0;j<k;j++)
	    {
	        int c=a[j];
	        for(int i=0;i<n;i++)
	        {
	            if(i+1>=c)
	                arr[i]++;
	           else
	           continue;
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
