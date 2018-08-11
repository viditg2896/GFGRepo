struct node* insert(struct node* root, int data)
{
    // The idea is to compare data with root->data, if its less and left child of root is NULL
    // then push it there. If the left child is not NULL, then we have to perform the same check in left subtree by recursion
    // same code for right child as well
    if(root==NULL){
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->data = data;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    }
    if(data<root->data){
        if(root->left==NULL){
            struct node* temp = (struct node*)malloc(sizeof(struct node));
            temp->data = data;
            temp->left = NULL;
            temp->right = NULL;
            root->left = temp;
        }
        else{
            //This is very important - since the function returns modified root
            //It is necessary that we modify the correct root...root->left in this case
            //Since we are traversing the left subtree
            root->left = insert(root->left,data);
        }
    }
    if(data>root->data){
        if(root->right==NULL){
            struct node* temp = (struct node*)malloc(sizeof(struct node));
            temp->data = data;
            temp->left = NULL;
            temp->right = NULL;
            root->right = temp;
        }
        else{
            //Same reason as above
            root->right = insert(root->right,data);
        }
    }
    //Returning the root of the original tree
    return root;
}