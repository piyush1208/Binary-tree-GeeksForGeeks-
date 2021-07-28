vector<int> levelOrder(Node* root)
{
    vector<int>result;
    if(root==NULL)
    {
        return result;
    }
    queue< Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node * t= q.front();
        result.push_back(t->data);
        q.pop();
        if(t->left)q.push(t->left);
        if(t->right)q.push(t->right);
        
    }
    return result;
}
