//Global vector to store all leaf nodes
vector <Node *> Leaves;
//Storing Leaf Nodes
void ReturnLeaves(Node *root){
    if(root==NULL)
        return;
    ReturnLeaves(root->left);
    if(root->left==NULL && root->right==NULL){
        Leaves.push_back(root);
    }
    ReturnLeaves(root->right);
}
void pairwiseSwap(Node *root)
{
    // Question - Exchange leaf nodes pair-wise
    ReturnLeaves(root);
    //Swap the leaf nodes
    for(int i = 0 ; i < Leaves.size() ; i=i+2){
        int j = i+1;
        if(j<Leaves.size()){
            int temp = Leaves[i]->data;
            Leaves[i]->data = Leaves[j]->data;
            Leaves[j]->data = temp;
        }
    }
    //Clear the global vector for next testcase 
    Leaves.clear();
}