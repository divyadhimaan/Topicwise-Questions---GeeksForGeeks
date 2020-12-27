int convertToWave(int *arr, int n){
    for(int i=1;i<n;i++)
    {
        if(i%2!=0)
        {
            int temp=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;
        }
    }
    return *arr;
}
