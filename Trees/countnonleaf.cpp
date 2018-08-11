int countNonLeafNodes(Node* root)
{
  // Code here
  //Important check - to save you from segmentation fault
  if(root==NULL)
    return 0;
  //Condition for Non-leaf node - negation of leaf-node condition    
  if(!(root->left==NULL && root->right==NULL)){
      //If root is non-leaf - then recurse through left & right subtree. Dont forget to add 1 (for root)
      return countNonLeafNodes(root->right)+countNonLeafNodes(root->left)+1;
  }
  //Leaf node condition
  else
      return 0;
}