int countLeaves(Node* root)
{
  // Your code here
  //Solve the subproblem - ie - for a node to be a leaf-node, its left and right children should be NULL
  if(root->left==NULL && root->right==NULL){
      return 1;
  }
  //Recurse through the left & right subtree
  return countLeaves(root->right)+countLeaves(root->left);
}