#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a[10];
	    for(int i=0;i<10;i++)
	    {
	        cin>>a[i];
	    }
	    if (a[3] == a[4]) 
        cout<< a[3]<<endl; 
        else if (a[4] == a[5]) 
        cout<< a[4]<<endl; 
        else
        cout<< a[5]<<endl; 
	}
	return 0;
}
