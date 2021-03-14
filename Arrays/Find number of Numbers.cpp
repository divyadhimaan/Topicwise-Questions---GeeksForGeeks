int countk(int n, int k)
{
    int count = 0;
    
    if(n == 0 && k == 0)
    {
        count++;
    }
    
    while(n)
    {
        if(n%10 == k)
        {
            count++;
        }
        
        n /= 10;
    }
    
    return count;
}

int num(int arr[], int n, int k)
{
    int res = 0;
    
    for(int i = 0; i < n; i++)
    {
        res += countk(arr[i], k);
    }
    
    return res;
}
