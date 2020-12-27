class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    sort(arr,arr+n, greater<int>());
	    vector<int> v;
	    int i=0;
	    while(k--)
	    {
	        v.push_back(arr[i]);
	        i++;
	    }
	    return v;
	}

};
