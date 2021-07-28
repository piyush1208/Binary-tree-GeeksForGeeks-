vector <int> zigZagTraversal(Node* root)
{
	
	vector <int>result;
	
	queue<Node *>q;
	if(root==NULL)return result;
	
	q.push(root);
	int level=1;
	
	
	while(!q.empty()){
	    vector <int> temp;
	    
	    
	    int s=q.size();
	    
	    while(s--){
	        Node *p=q.front();
	        temp.push_back(p->data);
	        q.pop();
	        if(p->left)q.push(p->left);
	        if(p->right)q.push(p->right);
	    }
	    
	    if(level%2==0)reverse(temp.begin(),temp.end());
	    for(int i=0;i<temp.size();i++)result.push_back(temp[i]);
	    
	    level++; 
	}
	
	return result;
}
