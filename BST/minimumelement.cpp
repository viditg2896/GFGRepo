int minValue(struct node* root)
{
    // Just recurse through left subtrees, return data when you reach the leaf node
    if(root->left==NULL){
        return root->data;
    }
    else{
        return minValue(root->left);
    }
}