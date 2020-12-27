int area(Rectangle r)
{
    
   return r.length*r.breadth;
}


void maxArea(Rectangle arr[],int n)
{
   
    // int Max = 0;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        v.push_back(area(arr[i]));
    }
    cout<<*max_element(v.begin(),v.end());
    cout<<endl;
}
