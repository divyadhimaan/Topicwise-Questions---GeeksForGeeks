#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    string str="";
	    cin>>s;
	    int sum=0;
	    for(int i=0;i<s.length();i++)
	    {
	       // sum=0;
	        if(s[i]>=65 && s[i]<=90)
	        str+=s[i];
	        else if(s[i]>=48 && s[i]<=57)
	        sum += (s[i]-'0');
	    }
	    sort(str.begin(), str.end()); 
	    cout<<str;
	    cout<<sum<<endl;
	}
	return 0;
}
