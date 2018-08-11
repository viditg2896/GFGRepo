bool search(node* root, int x)
{
    //Your code here
    if(root!=NULL){
        if(root->data == x){
            return true;
        }
        if(x<root->data){
            return search(root->left,x);
        }
        if(x>root->data){
            return search(root->right,x);
        }
    }
    if(root==NULL)
        return false;
}