class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0;
        int n= s.size();
        int end = n-1;
        while(start<end)
        {
            int temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }
    }
};
