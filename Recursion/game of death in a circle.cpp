#include<iostream>
using namespace std;

int executed(int n,int k)
{
    if(n<=0)
    {
        return 0;
    }
    
    return (executed(n - 1, k) + k-1) % n + 1;
}

int main()
 {
	int t,n,k;
    cin>>t;
    while(t--)
    {
		cin>>n>>k;
		int a[n];
		cout<<executed(n,k)<<endl;
    }
	return 0;
}
