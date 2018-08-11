void zigZagTraversal(Node* root)
{
	// Code here
	//s1 stores elements of first, third & fifth levels etc, s2 stores second, fourth etc 
    //Funda yeh hai ki hum current aur next level ko alag stack mei save kar rahe hai, while changing the order of insertion
    int flag = 1;
	stack <Node *> s1;
	stack <Node *> s2;
    vector <int> result;
    Node *temp = root;
    s1.push(root);
    while(!s1.empty() || !s2.empty()){
        while(!s1.empty()){
            temp = s1.top();
            result.push_back(s1.top()->data);
            s1.pop();
            if(temp->left){
                s2.push(temp->left);
            }
            if(temp->right){
                s2.push(temp->right);
            }
        }
        while(!s2.empty()){
            temp = s2.top();
            result.push_back(s2.top()->data);
            s2.pop();
            if(temp->right){
                s1.push(temp->right);
            }
            if(temp->left){
                s1.push(temp->left);
            }
        }
    }
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
}