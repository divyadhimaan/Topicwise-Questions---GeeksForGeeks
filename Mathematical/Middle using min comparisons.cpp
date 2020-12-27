class Solution{
  public:
    int middle(int A, int B, int C){
        int a = max(A,B);
        int b = min(A,B);
        
        a = max(a,C);
        b = min(b,C);
        
        return ((A+B+C)-a-b);
    }
};
