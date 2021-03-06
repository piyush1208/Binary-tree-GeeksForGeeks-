vector <int> bottomView(Node *root)
{
   queue < pair <Node *,int> > q; //node and their height
   map<int,int> mp;
   vector<int>result;
   if(root==NULL)return result;
   q.push({root,0});
   while(!q.empty()){
       Node* t=q.front().first;
       int h=q.front().second;
       q.pop();
       mp[h]=t->data;
       if(t->left)q.push({t->left,h-1});
       if(t->right)q.push({t->right,h+1});
   }
   
   for(auto x:mp) result.push_back(x.second);
   
   return result;
}
