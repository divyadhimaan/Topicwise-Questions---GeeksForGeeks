#include<iostream>
using namespace std;
int getRank(int arr[][3])
{
    int x, y, z, det, p, q, r, s;
	    x = arr[0][0]*(arr[1][1]*arr[2][2] - arr[1][2]*arr[2][1]);
	    y = arr[0][1]*(arr[1][0]*arr[2][2] - arr[1][2]*arr[2][0]);
	    z = arr[0][2]*(arr[1][0]*arr[2][1] - arr[1][1]*arr[2][0]);
	    det = x - y + z;
	    if(det != 0)
	    return 3;
	    else{
	        p = arr[0][0]*arr[1][1] - arr[0][1]*arr[1][0];
	        q = arr[0][1]*arr[1][2] - arr[0][2]*arr[1][1];
	        r = arr[1][0]*arr[2][1] - arr[1][1]*arr[2][0];
	        s = arr[1][1]*arr[2][2] - arr[2][2]*arr[2][1];
	        
	        if(p != 0 || q != 0 || r != 0 || s != 0)
	        return 2;
	    }
	    return 1;
}

int main()
 {
	int t;
    cin>>t;
    while(t--)
    {
		int arr[3][3];
	    int flag = 0;
	    
	    for(int i = 0; i < 3; i++)
	    for(int j = 0; j < 3; j++)
	    {
	        cin>>arr[i][j];
	        if(arr[i][j] == 0) flag++;
	    }
	    if(flag == 9)
	    cout<<0<<endl;
	    cout<<getRank(arr)<<endl;
    }
	return 0;
}
