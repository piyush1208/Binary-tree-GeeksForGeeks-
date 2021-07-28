vector<int> reverseLevelOrder(Node *root)
{
    vector<int> result;
    if(root==NULL){
        return result;
    }
    queue<Node *> q;
    q.push(root);
    
    while(!q.empty()){
        Node * t=q.front();
        result.push_back(t->data);
        q.pop();
        if(t->right)q.push(t->right);
        if(t->left)q.push(t->left);
    }
    vector<int> ans;
    for(int i=0;i<result.size();i++)
    {
        ans.push_back(result[result.size()-i-1]);
    }
    return ans;
}
