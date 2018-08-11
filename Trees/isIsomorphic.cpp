bool isIsomorphic(Node *root1,Node *root2)
{
    //Funda - If 2 trees with 2 children each are isomorphic then their children should be same
    //All I have done is apply recursion for right and left subtree
    if(root1==NULL && root2==NULL)
        return true;
    if(root1==NULL || root1==NULL)
        return false;
    if(root1->data!=root2->data)
        return false;
    //IMPORTANT - Dont use the below else condition - it wont allow recursion
    // else
        // return true;
    bool c1 = isIsomorphic(root1->left,root2->left);
    bool c2 = isIsomorphic(root1->left,root2->right);
    bool c3 = isIsomorphic(root1->right,root2->right);
    bool c4 = isIsomorphic(root1->right,root2->left);
    if((c1||c2)&&(c3||c4))
        return true;
    else
        return false;
}