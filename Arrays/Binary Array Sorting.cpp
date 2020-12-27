vector<int> SortBinaryArray(vector<int> binArray)
{
    int c=0;
    int l=binArray.size();
    for(int i=0;i<l;i++)
    {
        if(binArray[i]==0)
            c++;
    }
    binArray.clear();
    for(int i=0;i<l;i++)
    {
        if(c>0)
        {
            binArray.push_back(0);
            c--;
        }
            
        else
            binArray.push_back(1);
        
    }
    return binArray;
}
