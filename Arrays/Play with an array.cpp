vector<int> formatArray(vector<int> arr,int n)
{
    for(int i = 1; i < n; i += 2)
    {
        if(arr[i-1] > arr[i])
        {
            swap(arr[i-1], arr[i]);
        }
    }
    
    return arr;
}
