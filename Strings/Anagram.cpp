bool isAnagram(string a, string b){
    int h[26] = {0};
    transform(a.begin(), a.end(), a.begin(), ::tolower); 
    transform(b.begin(), b.end(), b.begin(), ::tolower); 
    int l1=a.length();
    int l2=b.length();
    if(l1==l2)
    {
        for(int i=0;i<l1;i++)
        {
            h[a[i]-'a']++;
        }
        for(int j=0;j<l1;j++)
        {
            h[b[j]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(h[i]!=0)
            {
                return false;
            }
            
        }
        return true;
    }
    return false;
}
