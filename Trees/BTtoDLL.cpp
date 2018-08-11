// This function should convert a given Binary tree to Doubly
// Linked List
// root --> Root of Binary Tree
// head_ref --> Pointer to head node of created doubly linked list
void BToDLL(Node *root, Node **head_ref)
{
    //Very similar to Leaves to DLL
    static Node *prev = NULL;
    if(root==NULL)
        return;
    BToDLL(root->left,head_ref);
    if(*head_ref==NULL){
        *head_ref = root;
    }
    else{
        root->left = prev;
        prev->right = root;
    }
    prev = root;
    BToDLL(root->right,head_ref);
}