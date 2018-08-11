/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
// Convert a given tree to a tree where every node contains sum of values of
// nodes in left and right subtrees in the original tree
int manipulate(Node *root){
    //Agar leaf node hai toh uski old value return karo and uski value zero set kardo
    if(root->left==NULL && root->right==NULL){
        int dummy = root->data;
        root->data = 0;
        return dummy;
    }
    int old_data = root->data;
    int left = manipulate(root->left);
    int right = manipulate(root->right);
    root->data =   left + right;
    //This is very important - end mei humko pure tree ka sum return karna hai - root(old) + left + right 
    return root->data+old_data;
}
void toSumTree(Node *root)
{
    // Your code here
    int x = manipulate(root);
}
