int findSubArraySum(int arr[], int N, int k)
    {
        unordered_map<int, int> mp;
        int pre_sum = 0;
        int res = 0;
        
        for(int i = 0; i < N; i++)
        {
            pre_sum += arr[i];
            
            if(pre_sum == k)
            {
                res++;
            }
            
            if(mp.find(pre_sum - k) != mp.end())
            {
                res += mp[pre_sum - k];
            }
            
            mp[pre_sum]++;
        }
        
        return res;
    }
