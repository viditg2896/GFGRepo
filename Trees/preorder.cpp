void preorder(Node* root)
{
  // Your code here
  if(root==NULL)
    return;
  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);
}