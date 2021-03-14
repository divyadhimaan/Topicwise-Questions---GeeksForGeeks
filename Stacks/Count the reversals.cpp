#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        
        if(str.size() % 2 != 0)
        {
            cout<<"-1"<<endl;
            continue;
        }
        
        stack<char> s;
        int unbalance = 0;
            
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == '{')
                s.push('{');
            else
            {
                if(s.empty())
                    unbalance++;
                else
                    s.pop();
            }
        }
        cout<<(unbalance+1)/2+((s.size()+1)/2)<<endl; 
        
    }
    return 0;

}
