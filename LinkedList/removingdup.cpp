
//Code by Shubham Joshi 
#include <bits/stdc++.h>
using namespace std;
struct Node
{
int data;
Node* next;
};
Node *newNode(int data)
{
    Node *new_node = new Node;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
 
void print(Node *root)
{
Node *temp = root;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}
Node* removeDuplicates(Node *root);
int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=newNode(data);
			else
			{
				temp->next = newNode(data);
				temp=temp->next;
			}
		}
		
	
		Node *result  = removeDuplicates(head);
		print(result);
		cout<<endl;
		
	}
	return 0;
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
// void pop(struct Node **head_ref,int pos){
//     struct Node *temp = *head_ref,*prev = *head_ref;
//     while(pos>1){
//         prev = temp;
//         temp = temp->next;
//         //cout<<"in";
//         pos--;
//     }
//     if(temp->next==NULL){
//         prev->next = NULL;
//     }
//     else
//         prev->next = temp->next;
//     //cout<<"Popped "<<temp->data;
//     free(temp);
// }
int findElement(vector <int> arr,int k){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==k){
            return 1;
        }    
    }
    return 0;
}
Node *removeDuplicates(Node *root)
{
 // your code goes here
    vector <int> ll;
    int cnt = 1;
    struct Node* temp = root,*prev;
    struct Node* newHead = NULL;
    struct Node* dummy;
    while(temp!=NULL){
        
        if(!findElement(ll,temp->data)){
            //cout<<"IN";
            //pop(&root,cnt);
            if(newHead == NULL){
                dummy = newNode(temp->data);
                newHead = dummy;
            }
            else{
                dummy = newNode(temp->data);
                prev->next = dummy;
            }
            prev = dummy;
             ll.push_back(temp->data);


        }
        //cout<<"In";
        cnt++;
        temp = temp->next;
    }
    //cout<<endl;
    return newHead;
}