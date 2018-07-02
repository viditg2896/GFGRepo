#include<bits/stdc++.h>
using namespace std;
/* Link list Node */
struct Node
{
    int coeff;
    int pow;
    struct Node* next;
};
void append(struct Node** head_ref, struct Node **tail_ref,
            int new_data, int new_data1)
{
    struct Node* new_node = new Node;
    new_node->coeff  = new_data;
    new_node->pow  = new_data1;
    new_node->next = NULL;
    if (*head_ref == NULL)
        *head_ref = new_node;
    else
        (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
       printf("%d %d ", temp->coeff,temp->pow);
       temp  = temp->next;
    }
}
void addPolynomial(Node *p1, Node *p2);
void create_node(int x, int y, struct Node **temp)
{
    struct Node *r, *z;
    z = *temp;
    if(z == NULL)
    {
        r =(struct Node*)malloc(sizeof(struct Node));
        r->coeff = x;
        r->pow = y;
        *temp = r;
        r->next = NULL;
    }
    else
    {
        r->coeff = x;
        r->pow = y;
        r->next = (struct Node*)malloc(sizeof(struct Node));
        r = r->next;
        r->next = NULL;
    }
}
 
/* Driver program to test above function*/
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        struct Node *poly1 = NULL, *poly2 = NULL, *poly = NULL;
        struct Node *tail1  = NULL,*tail2 = NULL;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            	append(&poly1,&tail1,x,y);
        }
        
         int m;
        cin>>m;
        for(int i=0;i<m;i++)
        {
            int x,y;
            cin>>x>>y;
            	append(&poly2,&tail2,x,y);
        }
        
        //show(poly2);
        // printList(poly1);
        // cout<<endl;
        // printList(poly2);
     
        addPolynomial(poly1,poly2);
        
        cout<<endl;
       
    }
}



/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Structure of Node used
struct Node
{
    int coeff;  // coefficient of the polynomial 
    int pow;   // power of the polynomial 
    Node* next;
};
*/
/* The below method print the required sum of polynomial
p1 and p2 as specified in output  */
void addPolynomial(Node *p1, Node *p2)
{
    //Brute Force - Can be improved by hashing!
    struct Node *head1=p1,*head2=p2;
    int s1,s2;
    s1=s2=0;
    while(head1!=NULL){
        head1=head1->next;
        s1++;
    }
    while(head2!=NULL){
        head2=head2->next;
        s2++;
    }
    if(s1>=s2){
        head1=p1;
        head2=p2;
    }
    else{
        head1=p2;
        head2=p1;
    }
    while(head1!=NULL){
        if(s1>=s2)
            head2 = p2;
        else
            head2 = p1;
        while(head2!=NULL){
            if(head1->pow == head2->pow){
                head1->coeff += head2->coeff;
                break;
            }
            head2=head2->next;
        }
        head1=head1->next;
    }
    if(s1>=s2)
        head1 = p1;
    else
        head1 = p2;
    while(head1!=NULL){
        cout<<head1->coeff<<"x^"<<head1->pow;
        if(head1->next!=NULL){
            cout<<" + ";
        }
        head1=head1->next;
    }
}