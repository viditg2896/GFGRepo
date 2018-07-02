
#include<bits/stdc++.h>
/* structure for a Node */
struct Node
{
  int data;
  struct Node *next;
};
   void sortedInsert(struct Node**head_ref, int x);
/* function to insert a new_Node in a list in sorted way.
   Note that this function expects a pointer to head Node
   as this can modify the head of the input linked list */
/* Function to print Nodes in a given linked list */
void printList(struct Node *start)
{
  struct Node *temp;
  if(start != NULL)
  {
    temp = start;
    do { printf("%d ", temp->data);
      temp = temp->next;
    } while(temp != start);
    printf(" ");
  }
}
/* Driver program to test above functions */
int main()
{
int t,n,x;
scanf("%d",&t);
int arr;
  while(t--){
  scanf("%d",&n);
  int list_size, i;
  /* start with empty linked list */
  struct Node *start = NULL;
  struct Node *temp,*r;
  /* Create linked list from the array arr[].
    Created linked list will be 1->2->11->56->12 */
    if(n>0){
     scanf("%d",&arr);
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data=arr;
    temp->next=NULL;
    start=temp;
    r=start;}
 for (i = 0; i<n-1; i++)
  {
   scanf("%d",&arr);
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = arr;
    temp->next=NULL;
     r->next=temp;
     r=r->next;
  }
  if(n>0)
  temp->next=start;
 // printList(start);
  scanf("%d",&x);
  sortedInsert(&start,x);
  printList(start);
  r=start;
  while(r!=start->next)
  {
      temp=start;
      start=start->next;
      free(temp);
  }
  free(start);
 }
  return 0;
}



/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* structure for a node */
/*
struct Node
{
  int data;
  Node *next;
};
 */
void sortedInsert(Node** head_ref, int x)
{
   //Your code here
   struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
   temp->data = x;
   //No head
   if(*head_ref == NULL){
       *head_ref = temp;
       temp->next = NULL;
   }
   else{
       struct Node *iterator = *head_ref;
       struct Node *prev = NULL;
       while(x>=iterator->data){
           prev = iterator;
           iterator = iterator->next;
           if(iterator==*head_ref){
               break;
           }
       }
       //Insert before head
       if(prev==NULL){
           temp->next = *head_ref;
           struct Node *dummy = *head_ref;
           do{
               dummy = dummy->next;
           }while(dummy->next != *head_ref);
           dummy->next = temp;
           *head_ref = temp;
       }
       else{
           //Insert at last
           if(iterator==*head_ref){
               prev->next = temp;
               temp->next = *head_ref;
           }
           //Insert in middle
           else{
               prev->next = temp;
               temp->next = iterator;
           }
       }
   }
}