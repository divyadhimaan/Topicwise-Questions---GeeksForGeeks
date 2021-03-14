long long power(int N,int R)
{
    if (R<=1) 
        return N;
        
    return (N * power(N, --R))%1000000007;
}

