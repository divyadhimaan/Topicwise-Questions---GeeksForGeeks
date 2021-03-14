#include <bits/stdc++.h>

using namespace std;

long long int recursiveSequence(int curr, int N, int iter)
{
    if(curr > N)
    {
        return 0;
    }
    
    long long int pro = 1, i;
    for(i = iter; i < curr + iter; i++)
    {
        pro *= i;
    }
    
    return pro + recursiveSequence(curr+1, N, i);
}

int main()
{
    int T;
    cin >> T;
    
    while(T--)
    {
        long long int N;
        cin >> N;
        
        cout << recursiveSequence(1, N, 1) << endl;
    }
    
    return 0;
}
