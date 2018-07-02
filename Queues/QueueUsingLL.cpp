
#include<bits/stdc++.h>
using namespace std;
struct QueueNode
{
    int data;
    QueueNode *next;
};
class Queue {
private:
    QueueNode *front;
    QueueNode *rear;
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
        Queue *sq = new Queue();
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
The structure of the node of the queue is
struct QueueNode
{
    int data;
    QueueNode *next;
};
and the structure of the class is
class Queue {
private:
    QueueNode *front;
    QueueNode *rear;
public :
    void push(int);
    int pop();
};
 */
/* The method push to push element into the queue*/
void Queue:: push(int x)
{
        // Your Code
        QueueNode *node = (QueueNode*)malloc(sizeof(QueueNode));
        node->data = x;
        node->next = NULL;
        if(front == NULL){
            front = rear = node;
        }
        else{
            rear->next = node;
            rear = rear->next;
            //rear->next = NULL;
        }
}
/*The method pop which return the element poped out of the queue*/
int Queue :: pop()
{
        // Your Code
        int val; 
        if(front==NULL){
            val = -1;
        }
        else{
            val = front->data;
            QueueNode *temp = front;
            free(temp);
            front=front->next;
        }
        return val;
}