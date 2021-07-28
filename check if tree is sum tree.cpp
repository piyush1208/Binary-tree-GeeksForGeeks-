int f=1;
int solve(Node * node){
    
    if(!node)return 0;
    if(!node->left && !node->right)return node->data;
    if(f==0)return 0;
    int a=solve(node->left);
    int b=solve(node->right);
    int x=node->data;
    if(a+b !=x)f=0;
    
    return x+a+b;
}
bool isSumTree(Node* root)
{
    f=1;
    solve(root);
    return f;
}
