#include<iostream>
using namespace std;
int main()
 {
	int t,n;
    cin>>t;
    while(t--)
    {
		cin>>n;
		int a[n];
		int min=10001;
		for(int i=0;i<n;i++)
		{
		    cin>>a[i];
		    if(a[i]<min)
		    min=a[i];
		}
		cout<<min<<endl;
		
    }
	return 0;
}
