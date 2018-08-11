//This function does all the job
void utilfn(Node *root,int *count){
    if(root==NULL)
        return;
    utilfn(root->right,count);
    //Dont use *count--; - doesnt work
    *count = *count-1;
    if(*count==0){
        cout<<root->key<<endl;
        return;
    }
    utilfn(root->left,count);
}    
void kthLargest(Node *root, int k)
{
    //We will do reverse inorder traversal and decrement the counter till its zero
    //We are using a pointer variable to accomodate more than 1 test case
    int count = k;
    int *ptr = &count;
    utilfn(root,ptr);
}