
#include <bits/stdc++.h>
#define MAX 20
using namespace std;
struct Node
{
	int data;
	Node* right, *down;
};
void display(Node* head)
{
    Node* Rp;
	Node* Dp = head;
	while (Dp) {
		Rp = Dp;
		while (Rp) {
			cout << Rp->data << " ";
			Rp = Rp->right;
		}
		//cout << " ";
		Dp = Dp->down;
	}
}
Node* constructLinkedMatrix(int mat[MAX][MAX], int n);
// driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int mat[MAX][MAX];
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                cin>>mat[i][j];
        Node* head = constructLinkedMatrix(mat, n);
        if(!head)cout<<"-1";
	    else display(head);
	    cout<<" ";
    }
	return 0;
}



/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*structure of the node of the linked list is as
struct Node
{
	int data;
	Node* right, *down;
};*/
// n is the size of the matrix
// function must return the pointer to the first element 
// of the in linked list i.e. that should be the element at arr[0][0]
Node* constructLinkedMatrix(int mat[MAX][MAX], int n)
{
    // code here
    struct Node *head = NULL,*prev,*temp,*dummy,*flag,*holder;
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            temp = (struct Node*)malloc(sizeof(struct Node));
            temp->data = mat[i][j];
            if(head==NULL){
                temp->right = NULL;
                temp->down = NULL;
                head = temp;
                holder = head;
            }
            else{
                prev->right = temp;
                temp->right = NULL;
                temp->down = NULL;
            }
            prev = temp;
        }
        if(i>0 && dummy!=NULL){
            dummy = holder;
            flag = holder->down;
            if(flag!=NULL){
                while(dummy!=NULL){
                    dummy->down = flag;
                    dummy = dummy->right;
                    flag = flag->right;
                    //cout<<"IN";
                }
            }
            else{
                while(dummy!=NULL){
                    dummy->down = NULL;
                    dummy = dummy->right;
                    //cout<<"IN";
                }
            }
            holder = holder->down;
        }
    }
    //cout<<head->data;
    return head;
}