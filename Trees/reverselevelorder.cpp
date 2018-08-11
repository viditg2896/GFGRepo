void reversePrint(Node *root)
{
    //Your code here
    //Approach is similar to level order traversal, instead of pushing left & right, I am pushing right & left children and reversing the result array
    queue <Node *> q;
    vector <int> result;
    Node *temp = root;
    q.push(root);
    while(!q.empty()){
        result.push_back(temp->data);
        q.pop();
        if(temp->right)
            q.push(temp->right);
        if(temp->left)
            q.push(temp->left);
        temp = q.front();
    }
    for(int i=result.size()-1;i>=0;i--){
        cout<<result[i]<<" ";
    }
}
