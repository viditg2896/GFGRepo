
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
}*head;
void rotate(struct node **head_ref, int k);
  void insert()
{
    int n,i,value;
    struct node *temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&value);
        if(i==0)
        {
            head=(struct node *) malloc( sizeof(struct node) );
            head->data=value;
            head->next=NULL;
            temp=head;
            continue;
        }
        else
        {
            temp->next= (struct node *) malloc( sizeof(struct node) );
            temp=temp->next;
            temp->data=value;
            temp->next=NULL;
        }
    }
}
void printList(struct node *node)
{
    while (node != NULL)
    {
        cout<<node->data<<" ";
        node = node->next;
    }
    printf(" ");
}
/* Drier program to test above function*/
int main(void)
{
    /* Start with the empty list */
    int t,k,n,value;
     /* Created Linked list is 1->2->3->4->5->6->7->8->9 */
     scanf("%d",&t);
     while(t--)
     {
     insert();
     scanf("%d",&k);
     rotate(&head,k);
     printList(head);
     }
     return(0);
}



/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
  Rotate a linked list after node k
  The input list will have at least one element  
  A Linked List node has following structure.
  struct node
  {
     int data;
     struct node *next;
  }
*/
/*  **head_ref is a pointer to head pointer.  This function
    should modify value at head_ref to change head (if required)*/
void add(struct node **head,struct node **ptr){
    struct node *temp = *head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    struct node *dummy = *ptr;
    temp->next = dummy;
    dummy->next = NULL;
}
void pop(struct node **head){
    struct node *temp = *head;
    temp=temp->next;
    *head = temp;
    free(temp);
}
void rotate(struct node **head_ref, int k)
{
   struct node * temp = *head_ref,*flag,*dummy,*temp1;
   //shift head by 1 element, add the previous element at the end of the list. Do this k times
   while(k>0){
       flag=*head_ref;
       while(flag->next!=NULL){
           flag = flag->next;
       }
       //temp1 = temp;
       temp = dummy = *head_ref;
       dummy = dummy->next;
       *head_ref = dummy; 
       //free(dummy);
       flag->next = temp;
       temp->next = NULL;
       k--;
   }
   //temp->next = NULL;
}