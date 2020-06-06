vector<int> ans;
void f(Node* root,int level){
    if(root==nullptr)return;
    if(level>ans.size()){
        ans.push_back(root->data);
    }
    f(root->left,level+1);
    f(root->right,level+1);
}
void leftView(Node *root){
    Node* cur=root;
    ans.clear();
    f(root,1);
    for(auto u:ans){
        cout<<u<<" ";
    }
}
