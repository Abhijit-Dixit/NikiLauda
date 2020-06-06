map<int,pair<int,int>> m;
void f(Node* root,int loc,int depth){
    if(root==nullptr)return;
    if(m.find(loc)==m.end())m[loc]={root->data,depth};
    else{
        if(m[loc].second<=depth){
            m[loc]={root->data,depth};
        }
    }
    f(root->left,loc-1,depth+1);
    f(root->right,loc+1,depth+1);
}
void bottomView(Node *root){
    m.clear();
    f(root,0,0);
    for(auto u:m){
        cout<<u.second.first<<" ";
    }
}
