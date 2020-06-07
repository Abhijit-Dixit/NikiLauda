bool check=true;
int f(Node* root){
    if(root==nullptr)return 0;
    int l=f(root->left);
    int r=f(root->right);
    if(abs(l-r)>1)check=false;
    return max(l,r)+1;
}

bool isBalanced(Node *root){
    check=true;
    f(root);
    return check;
}
