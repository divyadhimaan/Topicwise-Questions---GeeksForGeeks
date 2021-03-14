#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printEvenOdd(Node *head)
{
    Node *curr = head;
    while(curr)
    {
        if(curr->data%2 == 0)
        {
            cout << curr->data << " ";
        }
        
        curr = curr->next;
    }
    
    curr = head;
    while(curr)
    {
        if(curr->data%2 == 1)
        {
            cout << curr->data << " ";
        }
        
        curr = curr->next;
    }
}

int main()
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int N;
        cin >> N;
        
        
        Node *head, *tail;
        for(int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            
            if(i == 0)
            {
                head = new Node(x);
                tail = head;
            }
            else
            {
                tail->next = new Node(x);
                tail = tail->next;
            }
        }
        
        printEvenOdd(head);
        
        cout << endl;
    }
	return 0;
}
