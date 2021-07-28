

int ma=INT_MIN;
int fun(Node *root){
	if(!root)return 0;
	
	int r=fun(root->right);
	int l=fun(root->left);
	ma=max(ma,l+r+root->data);
	return l+r+root->data;
}
