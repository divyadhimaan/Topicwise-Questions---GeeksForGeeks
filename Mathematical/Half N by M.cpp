class Solution{
public:
    int mthHalf(int N, int M){
        for(int i=1;i<M && N>0;i++)
        {
            N = N/2;
        }
        return N;
    }
};
