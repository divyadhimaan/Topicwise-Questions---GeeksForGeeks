class Solution {
  public:
    long long int convertEvenBitToZero(long long int n) {
        int count=0,sum=0,r,a=0;
        while(n>0){
        r=n%2;
        n=n/2;
        if(count%2==0)
        {
            r=0;
            sum+=r*pow(2,a);
        }
        else{
            sum+=r*pow(2,a);
        }
        count++;
        a++;
        }
        return sum;
    }
};
