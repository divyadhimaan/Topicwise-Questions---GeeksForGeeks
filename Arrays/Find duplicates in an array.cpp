vector<int> duplicates(int a[], int n) {
    int h[100000]={};
    vector<int> v;
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(h[a[i]]==0)
        {
            h[a[i]]++;
        }
        else if(h[a[i]]==1)
        {
            v.push_back(a[i]);
            h[a[i]]++;
        }
    }
    // sort(v.begin(),v.end());
    if(v.size()==0)
    v.push_back(-1);
    
    return v;
}
