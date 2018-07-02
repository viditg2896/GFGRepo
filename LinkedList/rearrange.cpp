
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */
void rearrange(struct node *odd);
struct node
{
    int data;
    struct node *next;
};
    struct node *start = NULL;
/* Function to print nodes in a given linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf(" ");
    
}
void insert()
{
    int n,value;
    cin>>n;
    struct node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start=(struct node *) malloc( sizeof(struct node) );
            start->data=value;
            start->next=NULL;
            temp=start;
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
int main()
{
    int t;
    cin>>t;
    while (t--) {
        insert();
     rearrange(start);
    printList(start);
    }
    return 0;
}



/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct node
  {
     int data;
     struct node *next;
  }
*/
void rearrange(struct node *odd)
{
    //add code here
        struct node *head1 = odd,*head2=NULL,*head3=NULL,*dummy,*prev1,*prev2;
    int flag=1;
    while(head1!=NULL){
        if(flag%2==1){

        }
        else{
            dummy = (struct node*)malloc(sizeof(struct node));
            dummy->next = NULL;
            dummy->data = head1->data;
            if(head3==NULL){
                head3 = dummy;
            }
            else{
                dummy->next = head3;
                head3 = dummy;
            }
            //cout<<head3->data<<" ";
            prev2 = head1;
            if(prev2->next==NULL){
                prev1->next = NULL;
            }
            else
                prev1->next = prev2->next;
            free(prev2);
        }
        prev1 = head1;
        head1 = head1->next;
        flag++;
    }
    prev1 = odd;
    while(prev1->next!=NULL){
        prev1=prev1->next;
    }
    while(head3!=NULL){
        prev1->next = head3;
        head3=head3->next;
        prev1=prev1->next;
    }
}