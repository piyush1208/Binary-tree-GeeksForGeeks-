vector<int> inOrder(Node* root)
{
  stack< Node* >s;
  Node* curr=root;
  vector<int> result;
  while(curr!=NULL || s.empty()==false)
  {
      while(curr!=NULL)
      {
          s.push(curr);
          curr=curr->left;
      }
      curr=s.top();
      s.pop();
      result.push_back(curr->data);
      
      curr=curr->right;
  }
  return result;
}



