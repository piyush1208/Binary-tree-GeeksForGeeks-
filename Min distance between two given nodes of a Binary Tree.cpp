Node* lca(Node* root ,int n1 ,int n2 )
{
   if(!root)return NULL;
   
   if(root->data==n1 || root->data==n2){
       return root;
   }
   Node * l=lca(root->left,n1,n2);
   Node * r=lca(root->right,n1,n2);
   
   if(l!=NULL && r!=NULL) return root;
   
   if(l!=NULL)return l;
   else return r;
}

int heightOFnode(Node *root,int val){
    if(!root)return 0;
    
    if(root->data==val)return 1;
    int a=heightOFnode(root->left,val);
    int b=heightOFnode(root->right,val);
    
    if(!a && !b)return 0;
    
    return a+b+1;
}

int findDist(Node* root, int a, int b) {
    Node * LCA=lca(root,a,b);
    int h1=heightOFnode(LCA,a);
    int h2=heightOFnode(LCA,b);
    
    return h1+h2-2;
}
