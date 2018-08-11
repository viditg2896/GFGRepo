void swap(Node** root_ref){
    Node *hold = *root_ref;
    Node *temp = hold->left;
    hold->left = hold->right;
    hold->right = temp;
}
void mirror(Node* node) 
{
     // Your Code Here
     if(node==NULL)
        return;
     //Recurse through left & right subtree. The below code is helpful for traversing every node
     mirror(node->right);
     mirror(node->left);
     //Swap the right & left nodes
     swap(&node);
}