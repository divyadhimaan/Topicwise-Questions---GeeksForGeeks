int columnWithMaxZeros(int N){
    int max = 0, num = 0;
    for(int i = 0; i < N; i++)
    {
        int count = 0;
        for(int j = 0; j < N; j++)
        {
            if(M[j][i] == 0)
            {
                count++;
            }
        }
        if(count > num){
            num = count;
            max = i;
        }
    }
    return max;
}
