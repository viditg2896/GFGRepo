/* Should return true if trees with roots as r1 and 
   r2 are identical */
bool isIdentical(Node *r1, Node *r2)
{
    //Your Code here
    //If both are null(leaf-node case) then its fine - return true
    if(r2==NULL && r1==NULL){
        return true;
    }
    //Handling cases when one node is NULL and one is not - return false
    if(r2==NULL || r1==NULL){
        return false;
    }
    //Recurse through the left & right subtree
    bool i1 = isIdentical(r1->left,r2->left);
    bool i2 = isIdentical(r1->right,r2->right);
    //If both equal return true
    if(i2==true && i1==true)
        return true;
    else
        return false;
}