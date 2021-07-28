int height(Node *node,int &flag){
    if(node==NULL)return 0;
    
    int x=height(node->left,flag);
    int y=height(node->right,flag);
    if(abs(x-y)>1)flag=1;
    
    return max(x,y)+1;
}
bool isBalanced(Node *root){
    if(root==NULL)return 0;
    
    int flag=0;
    height(root,flag);
    flag=!flag;
    return flag;
}
