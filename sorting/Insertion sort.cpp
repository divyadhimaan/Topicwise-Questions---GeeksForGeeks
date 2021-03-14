void insertionSort(int arr[], int n)
    {
        int j,x;
        for(int i =1;i<n;i++)
        {
            j = i-1;
            x = arr[i];
            while(j>=0 && arr[j]>x)
            {
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = x;
        }
    }
