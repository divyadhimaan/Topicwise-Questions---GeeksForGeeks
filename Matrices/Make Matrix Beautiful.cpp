class Solution
{
public:
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        int maxsum=-1024;
        int sum;
        int total=0;
        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=0;j<n;j++)
            {
                sum+=matrix[i][j]; 
                total += matrix[i][j];
            }
            if(sum>maxsum)
            maxsum=sum;
        }
        for(int j=0;j<n;j++)
        {
            sum=0;
            for(int i=0;i<n;i++)
            {
                sum+=matrix[i][j];   
            }
            if(sum>maxsum)
            maxsum=sum;
        }
        // cout<<maxsum<<endl;
        
        return ((n * maxsum) - total);
    } 
};
