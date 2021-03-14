void selectionSort(int arr[], int n)
    {
       int i,j,k;
       for(int i=0;i<n-1;i++)
       {
           k = i;
           for(int j=i;j<n;j++)
           {
                if(arr[j]<arr[k])
                    k = j;
           }
           int temp = arr[i];
           arr[i] = arr[k];
           arr[k] = temp;
       }
    }
