int height(Node* node)
{
   // Your code here
   //If node is NULL then it wont be considered in height
   if(node==NULL)
      return 0;
   //Recurse through left & right subtree
   int l = height(node->left);
   int r = height(node->right);
   //If left subtree has more elements than right, then return l+1(including current node)
   if(l>r) 
    return l+1;
   else 
    return r+1;
}