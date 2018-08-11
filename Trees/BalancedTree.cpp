int height(Node *root){
    if(root==NULL){
        return 0;
    }
    int l = height(root->left);
    int r = height(root->right);
    if(l>r)
        return l+1;
    else
        return r+1;
}
bool isBalanced(Node *root)
{
    //  Important thing is to check this recursively
    if(root==NULL)
        return true;
    int l = height(root->left);
    int r = height(root->right);
    // Condition for balanced tree
    if(l-r==1 || l-r==-1 || l-r==0)
        //Check recursively
        if(isBalanced(root->left) && isBalanced(root->right))
            return true;
    
    return false;
}
