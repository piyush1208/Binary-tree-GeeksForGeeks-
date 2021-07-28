map<string,int>mp;

string solve(Node *root){
    if(!root)return "#";
    string x="";
    if(!root->left && !root->right){
        x=to_string(root->data);
        return x;
    }
    x=x+to_string(root->data);
    x=x+(solve(root->left));
    x=x+(solve(root->right));
    mp[x]++;
    return x;
}

bool dupSub(Node *root)
{
     mp.clear();
     solve(root);
     for(auto x:mp)if(x.second>1)return 1;
     
     return 0;
}
