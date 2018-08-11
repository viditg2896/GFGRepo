#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* create(int arr[],int l,int r){
    //Very important condition - we wont find any nodes between these indices 
    if(l>r)
        return NULL;
    //set mid    
    int mid = (l+r)/2;
    //assign root
    struct node* root = (struct node*)malloc(sizeof(struct node));
    root->data = arr[mid];
    //Do the same recursively in left & right subtree
    //Making sure that the array which I traverse has atleast 2 elements
    if(l<r){
        root->left = create(arr,l,mid-1);
        root->right = create(arr,mid+1,r);
    }
    //Called when l==r (single node) - we stop recursion and return value
    return root;
}
void preorder(struct node* root){
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
	//takes in a sorted array - a sorted array is inorder travseral of the tree
	int t,n,i;
	cin>>t;
	while(t){
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    struct node *root = create(arr,0,n-1);
	    preorder(root);
	    cout<<endl;
	    t--;
	}
	return 0;
}