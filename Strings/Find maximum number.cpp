class Solution {
  public:
    string findMax(string N) {
        int l=N.length();
        sort(N.begin(), N.end(), greater<char>()); 
        return N;
    }
};
