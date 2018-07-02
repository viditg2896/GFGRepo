
#include<bits/stdc++.h>
using namespace std;
/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};
void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}
struct Node * mergeResult(struct Node *node1,struct Node *node2);
Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;
        struct Node* headA=NULL;
        struct Node* tempA = headA;
        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);
            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }
        struct Node* headB=NULL;
        struct Node* tempB = headB;
        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);
            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }
        

struct Node* result = mergeResult(headA,headB);
        print(result);
        cout<<endl;
    }
}



/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
The structure of linked list is the following
struct Node
{
int data;
Node* next;
};
*/
void reverse(struct Node **head_ref){
    struct Node *current,*prev,*forward;
    current = *head_ref;
    prev = forward = NULL;
    while(current!=NULL){
        //cout<<"WOAH";
        forward = current->next;
        current->next = prev;
        prev = current;
        current = forward;
    }
    *head_ref = prev;
}
struct Node * mergeResult(Node *node1,Node *node2)
{
    // your code goes here
    //cout<<"in";
            reverse(&node1);

    reverse(&node2);
    struct Node *head = NULL,*temp,*prev;
    struct Node *temp1 = node1,*temp2 = node2;
    while(temp1!=NULL && temp2!=NULL){
        //cout<<"in";
        if(temp1->data>=temp2->data){
            temp = (struct Node*)malloc(sizeof(struct Node));
            temp->data = temp1->data;
            temp->next = NULL;
            if(head==NULL){
                head = temp;
            }
            else{
                prev->next = temp;
            }
            temp1 = temp1->next;
        }
        else{
            temp = (struct Node*)malloc(sizeof(struct Node));
            temp->data = temp2->data;
            temp->next = NULL;
            if(head==NULL){
                head = temp;
            }
            else{
                prev->next = temp;
            }
            temp2 = temp2->next;
        }
        prev = temp;
    }
    while(temp1!=NULL){
        //cout<<"in";
                    temp = (struct Node*)malloc(sizeof(struct Node));
            temp->data = temp1->data;
            temp->next = NULL;
        prev->next = temp;
        temp1 = temp1->next;
        prev = temp;
    }
    while(temp2!=NULL){
        //cout<<"in";
                    temp = (struct Node*)malloc(sizeof(struct Node));
            temp->data = temp2->data;
            temp->next = NULL;
        prev->next = temp;
        temp2 = temp2->next;
        prev = temp;
    }
    return head;
}