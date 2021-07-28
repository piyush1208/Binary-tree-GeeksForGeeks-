vector<double> averageOfLevels(TreeNode* root) {
        vector<double>result;
        if(root==NULL)
        {
        return result;
        }
        queue< TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            double levelsum=0;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode * t= q.front();
                q.pop();
                levelsum+=t->val;
                if(t->left)q.push(t->left);
                if(t->right)q.push(t->right);
            }
            result.push_back(levelsum/size);
        }
        return result;
    }
