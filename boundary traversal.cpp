void left(Node *root,vector <int>&ans){
    if(!root)return;
    
    if(root->left){
        ans.push_back(root->data);
        left(root->left,ans);
    }
    else if(root->right){
        ans.push_back(root->data);
        left(root->right,ans);
    }
}
void leaf(Node *root,vector <int>&ans){
    if(!root)return;
    
    leaf(root->left,ans);
    
    if(!root->left && !root->right)ans.push_back(root->data);
    
    leaf(root->right,ans);
    
    
}
void right(Node *root, vector <int>&ans){
    if(!root)return;
    
    if(root->right){
        right(root->right,ans);
        ans.push_back(root->data);
    }
    else if(root->left){
        right(root->left,ans);
        ans.push_back(root->data);
    }
}

vector <int> printBoundary(Node *root){
     vector<int>ans1;
     ans1.push_back(root->data);
     left(root->left,ans1);
     leaf(root,ans1);
     right(root->right,ans1);
     return ans1;
}
