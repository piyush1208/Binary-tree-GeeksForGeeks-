vector<int> diagonal(Node *root)
{
   vector<int> result;
   queue<Node *> q;
   q.push(root);
   if(root==NULL)return result;
   
   while(!q.empty()){
       Node *temp=q.front();
       
       q.pop();
       while(temp){
           if(temp->left)q.push(temp->left);
           result.push_back(temp->data);
           temp=temp->right;
       }
   }
   return result;
}
