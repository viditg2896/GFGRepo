int getLevelDiff(Node *root)
{
   //This is traversing levels in a zig-zag manner
   stack <Node *> s1;
   stack <Node *> s2;
   int sum1=0,sum2=0;
   Node *temp = root;
   s1.push(temp);
   while(!s1.empty() || !s2.empty()){
       while(!s1.empty()){
           temp = s1.top();
           sum1+=temp->data;
           s1.pop();
           if(temp->left!=NULL)
                s2.push(temp->left);
           if(temp->right!=NULL)
                s2.push(temp->right);
       }
       while(!s2.empty()){
           temp = s2.top();
           sum2+=temp->data;
           s2.pop();
           if(temp->left!=NULL)
                s1.push(temp->left);
           if(temp->right!=NULL)
                s1.push(temp->right);
       }
   }
   return sum1-sum2;
}