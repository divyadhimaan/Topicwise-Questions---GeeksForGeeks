#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    stack <char> st;
	    st.push(s[0]);
	    cout<<s[0];
	    for(int i=1;i<s.length();i++)
	    {
	        if(st.top()!=s[i])
	        {
	            st.push(s[i]);
	            cout<<s[i];
	            
	        }
	        
	    }
	    cout<<endl;
	}
	return 0;
}
