#include<bits/stdc++.h>
using namespace std;

int chinkyAndDiamonds(int arr[], int N, int K)
{
    priority_queue<int> pq(arr, arr + N);
    
    int res = 0;
    while(!pq.empty() && K-- > 0)
    {
        int val = pq.top();
        pq.pop();
        
        res += val;
        
        pq.push(val / 2);
    }
    
    return res;
}

int main()
 {
	int t,n,k;
    cin>>t;
    while(t--)
    {
		cin>>n>>k;
		int d[n];
		for(int i=0;i<n;i++)
		{
		    cin>>d[i];
		}
	
		cout<<chinkyAndDiamonds(d,n,k)<<endl;
		
    }
	return 0;
}
