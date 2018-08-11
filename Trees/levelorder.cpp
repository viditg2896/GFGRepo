void levelOrder(Node* node)
{
  //Your code here
  //Queue to hold left and right children. The nodeq.front() holds the value of upcoming node in level.
  queue <Node*> nodeq;
  Node *temp = node;
  while(temp!=NULL){
      cout<<temp->data<<" ";
      if(temp->left)
        nodeq.push(temp->left);
      if(temp->right)
        nodeq.push(temp->right);
      if(nodeq.empty())
        temp = NULL;
      else
        temp = nodeq.front();
      nodeq.pop();
  }
}
