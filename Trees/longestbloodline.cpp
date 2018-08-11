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
   if(l>r){
    return l+1;
   }
   else{
    return r+1;
   }
}
int sumOfLongRootToLeafPath(Node* root)
{
	// Code here
	if(root==NULL)
	    return 0;
	//Get the height of left & right subtree    
	int lh = height(root->left);
	int rh = height(root->right);
	//If height of left subtree is greater then add data of root & recurse through left subtree 
	if(lh>rh){
	    return root->data+sumOfLongRootToLeafPath(root->left);
	}
	else if(lh<rh){
	    return root->data+sumOfLongRootToLeafPath(root->right);
	}
	//If height is equal
	else{
	    //Recurse through subtree which has greater value
	    if(sumOfLongRootToLeafPath(root->right)>=sumOfLongRootToLeafPath(root->left)){
	        return root->data+sumOfLongRootToLeafPath(root->right);
	    }
	    else{
	        return root->data+sumOfLongRootToLeafPath(root->left);
	    }
	}
}