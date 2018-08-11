bool checkLeaf(Node *node){
    if(node->left==NULL && node->right==NULL){
        return true; 
    }
    return false;
}
//Printing all leaf nodes
void traverseLeaf(Node *root){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        cout<<root->data<<" ";
    }
    traverseLeaf(root->left);
    traverseLeaf(root->right);
}
//Traversing the left side
void traverseLeft(Node *root){
    if(root==NULL)
        return;
    if(checkLeaf(root))
        return;
    //printing in top-down fashion    
    cout<<root->data<<" ";
    if(root->left!=NULL)
        traverseLeft(root->left);
    //Very important edge case - agar left child nahi hai...but right hai then it will be in traversal    
    else if(root->right!=NULL)
        traverseLeft(root->right);
}
void traverseRight(Node *root){
    if(root==NULL)
        return;
    if(checkLeaf(root))
        return;
    if(root->right!=NULL)
        traverseRight(root->right);
    //wahi important edge case    
    else if(root->left!=NULL)
        traverseRight(root->left);
    //Printing in bottom-up fashion    
    cout<<root->data<<" ";
}
void printBoundary(Node *root)
{
     //Your code here
     cout<<root->data<<" ";
     traverseLeft(root->left);
     traverseLeaf(root);
     traverseRight(root->right);
}