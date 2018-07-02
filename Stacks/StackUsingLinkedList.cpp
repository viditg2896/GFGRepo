#include<bits/stdc++.h>
using namespace std;
struct StackNode
{
    int data;
    StackNode *next;
};
class Stack {
    private:
        StackNode *top;
    public :
        void push(int);
        int pop();
};
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Stack *sq = new Stack();
        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";
        }
        }
        cout<<endl;
    }
}



/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* 
The structure of the node of the stack is
struct StackNode
{
    int data;
    StackNode *next;
};
and the structure of the class is
class Stack {
private:
  StackNode *top;
public :
    void push(int);
    int pop();
};
 */
/* The method push to push element into the stack */
void Stack :: push(int x)
{
        // Your Code
        StackNode *node = (StackNode*)malloc(sizeof(StackNode));
        node->data = x;
        node->next = NULL;
        if(top==NULL){
            top=node;
        }
        else{
            node->next=top;
            top=node;
        }
}
/*The method pop which return the element poped out of the stack*/
int Stack :: pop()
{
        // Your Code
        if(top==NULL){
            return -1;
        }
        int topval = top->data;
        StackNode *temp = top;
        top=top->next;
        free(temp);
        return topval;
}
