vector<int> rightSideView(TreeNode* root) {
	queue<TreeNode *>q;
    vector<int> result;
    if(root==NULL)return result;
    q.push(root);
    
    while(!q.empty()){
       
        result.push_back(q.front()->val);
        int size=q.size();
        while(size--){
            TreeNode * temp=q.front();
            q.pop();
            if(temp->right)q.push(temp->right);
            if(temp->left)q.push(temp->left);
            
            
        }
    }
    return result;
    }

