vector<int> leftView(Node *root)
{
   
    queue<Node *>q;
    vector<int> result;
    if(root==NULL)return result;
    q.push(root);
    
    while(!q.empty()){
       
        result.push_back(q.front()->data);
        int size=q.size();
        while(size--){
            Node * temp=q.front();
            q.pop();
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
            
        }
    }
    return result;
}
