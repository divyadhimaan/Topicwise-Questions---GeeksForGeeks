/* The method push to push element into the stack 2 */
void twoStacks :: push1(int x)
{
    top1++;
  arr[top1] = x;
}
   
/* The method push to push element into the stack 2*/
void twoStacks ::push2(int x)
{
    top2--;
    arr[top2] = x;
}
   
/* The method pop to pop element from the stack 1 */
//Return the popped element
int twoStacks ::pop1()
{
    if(top1==-1)
    return -1;
    int i=arr[top1];
    top1--;
    return i;
}

/* The method pop to pop element from the stack 2 */
//Return the popped element
int twoStacks :: pop2()
{
    if(top2==size)
    return -1;
    int i=arr[top2];
    top2++;
    return i;
}
