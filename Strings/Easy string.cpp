#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int count=1;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]>=65 && s[i]<=90)
	        {
	            s[i] += 32;
	        }
	    }
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]==s[i+1])
	        {
	            count++;
	        }
	        else
	        {
	            cout<<count<<s[i];
	            count=1;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
