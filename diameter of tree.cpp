int result;
int dia(Node * node){
    if(node==NULL)return 0;
    
    int x=dia(node->right);
    int y=dia(node->left);
    
    result=max(result,x+y+1);

    return (max(x,y)+1);
}
int diameter(Node* root) {
    result=INT_MIN;
    dia(root);
    return result;
    
}
