#include<iostream>
using namespace std;

int geekonacci(int a,int b,int c,int n)
{
    if(n==1)
        return a;
    else if(n==2)
        return b;
    else if(n==3)
        return c;
     
    return geekonacci(a,b,c,n-1) + geekonacci(a,b,c,n-2) + geekonacci(a,b,c,n-3);
}

int main()
 {
	int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,n;
		cin>>a>>b>>c>>n;
		int result = geekonacci(a,b,c,n);
		cout<<result<<endl;
		
    }
	return 0;
}
