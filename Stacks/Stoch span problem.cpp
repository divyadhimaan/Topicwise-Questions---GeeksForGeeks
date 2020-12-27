vector<int> calculateSpan(int price[], int n)
{
    vector<int> S;
   stack<int> st; 
    st.push(0); 
 
    S.push_back(1); 

    for (int i = 1; i < n; i++) { 

        while (!st.empty() && price[st.top()] <= price[i]) 
            st.pop(); 

        if(st.empty())
        S.push_back(i+1);
        else
        S.push_back(i-st.top());
  
        st.push(i); 
    } 
    return S;
}
