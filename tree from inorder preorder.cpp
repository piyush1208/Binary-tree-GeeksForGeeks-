unordered_map<int,int>mp;
int idx=0;
Node* solve(int in[],int pre[],int l,int r){
    if(l>r)return NULL;
    Node* res=new Node(pre[idx++]);
    if(l==r)return res;
    int mid=mp[res->data];
    
    res->left=solve(in,pre,l,mid-1);
    res->right=solve(in,pre,mid+1,r);
    
    return res;
}


Node* buildTree(int in[],int pre[], int n)
{
    mp.clear();
    idx=0;
    for(int i=0;i<n;i++)mp[in[i]]=i;
    
    Node* root=solve(in,pre,0,n-1);
    
    return root;
}
