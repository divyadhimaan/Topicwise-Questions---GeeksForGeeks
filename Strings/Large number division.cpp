#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t,num2,i;
    long int num1,n;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cin>>num2;
        istringstream(s)>>num1;
        n=(num1/num2);
        cout<<n<<endl;
    }
    return 0;
}
