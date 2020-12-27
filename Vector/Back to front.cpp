//User function Template for C++

/*Function to print vector in reverse order
* using iterator
* it1 : v.rbegin(), reverse iterator
* it2 : v.rend(), reverse iterator
*/
void reverseIterator(vector<int>::reverse_iterator it1, vector<int>::reverse_iterator it2){
    
    for(auto i = it1; i!= it2; i++)
    {
        cout<< *i << " ";
    }
    
    cout<<endl;
    
}
