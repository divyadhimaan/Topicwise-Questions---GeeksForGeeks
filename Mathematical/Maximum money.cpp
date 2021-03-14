int maximizeMoney(int N , int K) {
        if(N%2!=0)
        {
            N = N/2 +1;
        }
        else
            N = N/2;
        return N*K;
    }
