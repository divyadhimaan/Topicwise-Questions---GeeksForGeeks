#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    char a,b;
	    cin>>a>>b;
	    if(a==b)
	    cout<<"DRAW"<<endl;
	    else if((a=='R' && b=='S') || (a=='P' && b=='R') || (a=='S' && b=='P'))
	    cout<<"A"<<endl;
	    else if((a=='S' && b=='R') || (a=='R' && b=='P') || (a=='P' && b=='S'))
	    cout<<"B"<<endl;
	}
	return 0;
}
