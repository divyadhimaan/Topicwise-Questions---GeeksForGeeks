#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int A[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>A[i];
	    }
	    stack<int> st;
	    
	    for(int i=0;i<n;i++)
	    {
	        while (!st.empty() && st.top() >= A[i]) 
            st.pop(); 
  
            if (st.empty()) 
                cout << "-1 "; 
            else 
                cout << st.top() << " "; 
  
            st.push(A[i]); 
	    }
	    cout<<endl;
	}
	return 0;
}
