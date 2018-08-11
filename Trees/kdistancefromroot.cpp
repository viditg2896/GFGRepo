void printKdistance(Node *root, int k)
{
  // Preorder traversal is used to traverse throughh every node in O(n) time. Remember it
  // We can also print Kth level order traversal 
  if(root==NULL || k<0)
    return;
  if(k==0){
      cout<<root->data<<" ";
      return;
  }
  printKdistance(root->left,k-1);
  printKdistance(root->right,k-1);
}