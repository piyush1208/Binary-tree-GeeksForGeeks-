unordered_map<Node*,int>mp;

int func(Node *root){
	if(!root)return 0;
	if(dp[root])return dp[root];
	
	int inclu=root->data;
	
	if(root->left){
		inclu += func(root->left->left);
		inclu += func(root->left->right);
	}
	if(root->right){
		inclu += func(root->right->left);
		inclu += func(root->right->right);
	}
	
	int exclu=func(root->left) + func(root->right);
	
	dp[root]=max(inclu,exclu);
	
	return dp[root];
}
