
#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node* next;
};
void printList(struct node *node)
{
    while(node!=NULL){
        cout<<node->data<<' ';
        node = node->next;
    }
    printf(" ");
}
void push(struct node** head_ref, int new_data)
{
    struct node* new_node =	(struct node*) malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
struct node* findIntersection(struct node* head1, struct node* head2);
int main()
{
    long test;
    cin>>test;
    while(test--)
    {
        struct node* a = NULL;
        struct node* b = NULL;
        int n, m, tmp;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>tmp;
            push(&a, tmp);
        }
        cin>>m;
        for(int i=0; i<m; i++)
        {
            cin>>tmp;
            push(&b, tmp);
        }
        printList(findIntersection(a, b));
    }
    return 0;
}



/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
structure of the node is as
struct node
{
	int data;
	struct node* next;
};
*/
void add(struct node** head_ref,int val){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    if(*head_ref==NULL){
        *head_ref = temp;
    }
    else{
        struct node *iterator = *head_ref;
        while(iterator->next!=NULL){
            iterator = iterator->next;
        }
        iterator->next = temp;
    }
}
int exists(vector <int> arr,int val){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==val)
            return 1;
    }
    return 0;
}
struct node* findIntersection(struct node* head1, struct node* head2)
{
    // code here
    struct node *temp1 = head1,*temp2 = head2;
    vector <int> result;
    while(temp1!=NULL){
        while(temp2!=NULL){
            if(temp1->data == temp2->data){
                if(!exists(result,temp1->data))
                    result.push_back(temp1->data);
                break;      
            }
            temp2 = temp2->next;
        }
        temp1=temp1->next;
        temp2 = head2;
    }
    struct node *head3 = NULL;
    sort(result.begin(),result.end());
    for(int i=0;i<result.size();i++){
        add(&head3,result[i]);
    }
    return head3;
}