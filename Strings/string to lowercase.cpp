class Solution {
  public:
    string toLower(string S) {
        for(int i=0;i<S.length();i++)
        {
            if(S[i]>=65 && S[i]<=90)
            {
                S[i]+=32;
            }
        }
        return S;
    }
};
