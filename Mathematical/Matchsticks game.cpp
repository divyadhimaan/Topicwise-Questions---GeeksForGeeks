class Solution {
  public:
    int matchGame(long long N) {
        if(N%5==0)
        return -1;
        else
        return N%5;
    }
};
