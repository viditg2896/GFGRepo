Node *convertToDLL(Node *root,Node **head_ref)
{
//Converting all leaf nodes to a doubly linked list
    static Node *prev = NULL;
    if(root==NULL)
        return NULL;
    convertToDLL(root->left,head_ref);
    if(root->left==NULL && root->right==NULL){
        Node *temp;
        if(*head_ref==NULL){
            *head_ref = root;
        }
        else{
            root->left = prev;
            prev->right = root;
        }
        prev = root;
    }
    convertToDLL(root->right,head_ref);
    return *head_ref;
}