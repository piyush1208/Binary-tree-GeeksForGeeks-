int flag=1;
int height(Node *root,int h,int &prev_h){
    if(!root)return 0;
    
    if(!root->left && !root->right){
        if(prev_h==-1){
            prev_h=h;
        }
        else if(prev_h!=h){
            flag=0;
        }
    }
    height(root->left,h+1,prev_h);
    height(root->right,h+1,prev_h);
}


bool check(Node *root){
    flag=1;
    int prev_h=-1;
    height(root,0,prev_h);
    
    return flag;
}
