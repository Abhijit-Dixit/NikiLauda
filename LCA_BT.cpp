bool check(Node* root, vector<Node*>& v, int k){
    if(root==nullptr)return false;
    v.push_back(root);
    if(root->data==k)return true;
    if(root->left!=nullptr && check(root->left,v,k) || root->right && check(root->right,v,k))return true;
    v.pop_back();
    return false;
}

Node* lca(Node* root ,int n1 ,int n2 ){
    vector<Node*> v1,v2;
    if(check(root,v1,n1) && check(root,v2,n2)){
        int i=0;
        int n=min(v1.size(),v2.size());
        Node* temp=nullptr;
        for(int i=0;i<n;i++){
            if(v1[i]->data==v2[i]->data){
                temp=v1[i];
            }
            else{
                break;
            }
        }
        return temp;
    }
    else{
        return nullptr;
    }
     
}
