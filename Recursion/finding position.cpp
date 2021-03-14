#include <bits/stdc++.h>

using namespace std;

int findingPosition(vector<int> arr)
{
    if(arr.size() == 1)
    {
        return arr[0];
    }
    
    if(arr.size() == 2)
    {
        return arr[1];
    }
    
    vector<int> temp;
    for(int i = 0; i < arr.size(); i++)
    {
        if((i+1)%2 == 0)
        {
            temp.push_back(arr[i]);
        }
    }
    
    return findingPosition(temp);
}

int main()
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int N;
        cin >> N;
        
        vector<int> arr;
        for(int i = 1; i <= N; i++)
        {
            arr.push_back(i);
        }
        
        cout << findingPosition(arr)<<endl;
    }
    
    return 0;
}
