/* Function to get the maximum width of a binary tree*/
int getMaxWidth(Node* root)
{
   // Level Order Using 2 stacks - ZigZag. Maintain a maxwidth - it will be the size of either stacks. Max val gets returned
   stack <Node *> s1,s2;
   Node *temp = root;
   s1.push(temp);
   int maxwidth = s1.size();
   while(!s1.empty() || !s2.empty()){
       if(s1.size()>maxwidth)
        maxwidth = s1.size();
       while(!s1.empty()){
           temp = s1.top();
           s1.pop();
           if(temp->left)
            s2.push(temp->left);
           if(temp->right)
            s2.push(temp->right);
       }
       if(s2.size()>maxwidth)
        maxwidth = s2.size();
       while(!s2.empty()){
           temp = s2.top();
           s2.pop();
           if(temp->right)
            s1.push(temp->right);
           if(temp->left)
            s1.push(temp->left);
       }
   }
   return maxwidth;
}
