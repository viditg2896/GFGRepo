int getMax(int a,int b,int c){
    if(a>=b && a>=c)
        return a;
    if(b>=a && b>=c)
        return b;
    if(c>=a && c>=b)
        return c;
}
int getMin(int a,int b,int c){
    if(a<=b && a<=c)
        return a;
    if(b<=a && b<=c)
        return b;
    if(c<=a && c<=b)
        return c;
}
int findMax(struct node* root)
{
// Your code goes here
    if(root==NULL)
        return INT_MIN;
    return getMax(root->data,findMax(root->left),findMax(root->right));
}
// Returns minimum value in a given Binary Tree
int findMin(struct node* root)
{
// Your code goes here
    if(root==NULL)
        return INT_MAX;
    return getMin(root->data,findMin(root->left),findMin(root->right));
}