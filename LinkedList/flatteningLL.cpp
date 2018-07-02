
#include <bits/stdc++.h>
struct Node{
	int data;
	struct Node * next;
	struct Node * bottom ;
};
using namespace std;
void printList(Node *Node)
{
    while (Node != NULL)
    {
        printf("%d ", Node->data);
        Node = Node->bottom;
    }
}
Node* flatten (Node* root);
int main(void) {
	int t;
	cin>>t;
	while(t--){
    int n,m,flag=1,flag1=1;
    struct Node * temp=NULL;
	struct Node * head=NULL;
	struct Node * pre=NULL;
	struct Node * tempB=NULL;
	struct Node * preB=NULL;
		cin>>n;
        int work[n];
		for(int i=0;i<n;i++)
            cin>>work[i];
		for(int i=0;i<n;i++){
			m=work[i];
			--m;
			temp = (struct Node*)malloc(sizeof(struct Node));
			scanf("%d",&temp->data);
			temp->next=NULL;
			temp->bottom=NULL;
			if(flag){
				head=temp;
				pre=temp;
				flag=0;
				flag1=1;
			}
			else{
				pre->next=temp;
				pre=temp;
				flag1=1;
			}
			for(int j=0;j<m;j++){
				tempB = (struct Node*)malloc(sizeof(struct Node));
				scanf("%d",&tempB->data);
				tempB->next=tempB->bottom=NULL;
				if(flag1){
					temp->bottom=tempB;
					preB=tempB;
					flag1=0;
				}
				else{
					preB->bottom=tempB;
					preB=tempB;
				}
			}
		}
		   Node *fun = head;
		   Node *fun2=head;
		   /*
		while(fun!=NULL)
            {
                cout<<fun->data<<" ";
                fun2 = fun->bottom;
                fun=fun->next;
                while(fun2){
                cout<<fun2->data<<" ";
                fun2=fun2->bottom;
                }
                cout<<endl;
            }*/
            Node* root = flatten(head);
            printList(root);
            cout<<endl;
	}
	return 0;
}



/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Node structure  used in the program
struct Node{
	int data;
	struct Node * next;
	struct Node * bottom ;
}; */
/*  Function which returns the  root of 
    the flattened linked list. */
//Function that returns node with least value (horizontal traversal)
Node *getMinindex(Node *top){
    Node *temp = top;
    int min = temp->data;
    Node *minNode = temp;
    while(temp!=NULL){
        if(min>temp->data){
            min = temp->data;
            minNode = temp;
        }
        temp = temp->next;
    }
    return minNode;
}
//Function to add nodes to final LL
void push(Node **head_ref,int value){
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    Node *iterator;
    temp->data = value;
    if(*head_ref == NULL){
        *head_ref = temp;
        temp->bottom = NULL;
    }
    else{
        iterator = *head_ref;
        while(iterator->bottom!=NULL){
            iterator = iterator->bottom;
        }
        iterator->bottom = temp;
        temp->bottom = NULL;
    }
}
//Main Function
Node *flatten(Node *root)
{
   // I ran into a rare - "double free" error because I tried to free up a particular node twice. Dont do that.
   // The idea is to keep comparing heads of connected vertical lists to find a minimum. That minimum is pushed in result and popped from main list.
   int flag = 0;
   struct Node *head = NULL;
   struct Node *temp = root,*prev;
   temp = root;

   while(flag!=1){
       //get min by horizontal traversal
       Node *tempMin = getMinindex(root);
       //If its the first element
       if(tempMin == root){
           //If vertical list is not empty, re-assign root
           if(root->bottom!=NULL){
                root = root->bottom;
                root->next = tempMin->next;
                push(&head,tempMin->data);
           }
           else{
                //If horizontal list has more than one element
                if(tempMin->next!=NULL){
                    root = tempMin->next;
                    push(&head,tempMin->data);
                }
                //If only one element remains - breaking condition
                else{
                    flag = 1;
                    push(&head,tempMin->data);
                }
           }
       //Dont forget to free the node
       free(tempMin);
       }
       //Traverse to the desired node horizontally
       else{
           Node *dummy = root;
           while(tempMin!=dummy){
               prev = dummy;
               dummy = dummy->next;
           }
           //If its the last node
           if(dummy->next==NULL){
               //If the vertical list is not empty
               if(dummy->bottom!=NULL){
                   prev->next = dummy->bottom;
                   dummy->bottom->next = NULL;
                   push(&head,tempMin->data);
               }
               else{
                   prev->next = NULL;
                   push(&head,tempMin->data);
               }
               free(tempMin);
           }
           //If its an intermediate node
           else{
               //If the vertical list is not empty
               if(dummy->bottom!=NULL){
                   prev->next = dummy->bottom;
                   dummy->bottom->next = dummy->next;
                   push(&head,tempMin->data);
               }
               else{
                   prev->next = dummy->next;
                   push(&head,tempMin->data);
               }
               free(tempMin);
           }
       }
   }
   return head;
}