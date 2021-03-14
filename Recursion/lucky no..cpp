bool isLucky(int n, int &counter) {
    if(counter > n)
        return true;
    if(n%counter==0)
        return false;
        
    int next = n;
    next = next - next/counter;
    counter++;
    return isLucky(next,counter);
}
