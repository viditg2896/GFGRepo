void printNearNodes(Node *root, int l, int h)
{
  // Inorder traversal - with a check for l & h
  if(root==NULL)
    return;
  printNearNodes(root->left,l,h);
  if(root->data>=l && root->data<=h){
      cout<<root->data<<" ";
  }
  printNearNodes(root->right,l,h);
}