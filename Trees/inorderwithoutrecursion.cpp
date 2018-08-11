void inOrder(Node* root)
{
  // Think ki recursion kaise kaam karta hai - it remembers previous nodes via the call stack
  //Thats why we will use stack here...dhyaan se dekhega to its very similar to the recursive solution
  stack <Node *> in;
  Node *current_node;
  current_node = root;
  while(in.empty()!=1 || current_node!=NULL){
      while(current_node!=NULL){
          in.push(current_node);
          current_node=current_node->left;
      }
      Node *temp = in.top();
      cout<<temp->data<<" ";
      in.pop();
      current_node = temp->right;
  }
}
