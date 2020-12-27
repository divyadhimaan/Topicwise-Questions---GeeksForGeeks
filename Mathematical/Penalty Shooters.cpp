#include<iostream>
using namespace std;
int main()
 {
	int t,x,y,z;
    cin>>t;
    while(t--)
    {
		cin>>x>>y>>z;
		int X=0,Y=0;
	    while(z!=1)
	    {
	        if(x%z==0)
	        {
	            X++;
	            x--;
	        }
	        else if(y%z==0)
	        {
	            Y++;
	            y--;
	        }
	        else
	        {
	            z--;
	        }
	    }
	    cout<<X<<" "<<Y<<endl;
    }
	return 0;
}
