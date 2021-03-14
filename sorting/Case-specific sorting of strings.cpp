string caseSort(string str, int n){
    
    vector<int> l;
    vector<int> u;
    
    for(int i=0;i<n;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            u.push_back(str[i]);
        }
        else
        {
            l.push_back(str[i]);
        }
    }
    sort(u.begin(),u.end());
    sort(l.begin(),l.end());
    int cl=0,cu=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=u[cu];
            cu++;
        }
        else
        {
            str[i]=l[cl];
            cl++;
        }
    }
    return str;
}
