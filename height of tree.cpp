int height(struct Node* node){
      if(node==NULL)return 0;
      
      int x=height(node->right);
      int y=height(node->left);
      
      return max(x,y)+1;
    }
