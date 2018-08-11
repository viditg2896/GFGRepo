// Should return true if tree is Sum Tree, else false
int returnSum(Node* root){
    //Doubt - yeh condition kyu nhi chali - segmentation fault kyu aya?
    // if(root->left==NULL && root->right==NULL)
        // return root->data;
    if(root==NULL)
        return 0;
    int old_data = root->data;
    int l = returnSum(root->left);
    int r = returnSum(root->right);
    return old_data+l+r;
}
bool isSumTree(Node* root)
{
     // Your code here
     if(root==NULL || (root->left==NULL && root->right==NULL))
        return true;
     int l = returnSum(root->left);
     int r = returnSum(root->right);
     if(root->data==(l+r) && isSumTree(root->right) && isSumTree(root->left))
        return true;
     else
        return false;
}