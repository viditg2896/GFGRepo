/* Computes the diameter of binary tree with given root.  */
int height(Node* root){
    if(root==NULL)
        return 0;
    int l = height(root->left);
    int r = height(root->right);
    if(l>r)
        return l+1;
    else
        return r+1;
}
int maxi(int a,int b){
    if(a>=b)
        return a;
    else
        return b;
}
int diameter(Node* root)
{
   // 2 cases exist - diameter passes through root/ doesnt pass through root
   // If it passes, then its height of right & left subtree plus 1(for root)
   // If it doesnt, then it must exist in either left subtree or right subtree
   //This condition is very important - if root is NULL then the diameter should be 0
   if(root==NULL)
    return 0;
   int lst = height(root->left);
   int rst = height(root->right);
   int throughroot = lst+rst+1;
   return maxi(maxi(diameter(root->left),diameter(root->right)),throughroot);
}