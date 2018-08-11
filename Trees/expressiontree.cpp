int evalTree(node* root)
{
    //Perform inorder traversal to evaluate the tree
    //IMPORTANT - The evaluation can only be performed on non-leaf nodes
    //We wont encounter any root==NULL condition as we wont traverse below leaf node
    if(root->left!=NULL && root->right!=NULL){
        int l = evalTree(root->left);
        string op = root->data;
        int r = evalTree(root->right);
        
        if(op=="+")
                return int(l)+int(r);
        if(op=="-")
                return int(l)-int(r);
        if(op=="*")
                return int(l)*int(r);
        if(op=="/")
                return int(l)/int(r);
        
    }
    //In case of leaf nodes - return its value - so that it can be directly used
    else{
        int x = stoi(root->data);
        return x;
    }
}
