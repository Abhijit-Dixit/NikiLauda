int ma=INT_MIN;

int f(Node* root){
    if(root==nullptr)return 0;
    int l=f(root->left);
    int r=f(root->right);
    if(root->left!=nullptr && root->right!=nullptr)ma=max(ma,l+r+root->data);
    if(root->left==nullptr && root->right==nullptr)return root->data;
    else if(root->left==nullptr)return r+root->data;
    else if(root->right==nullptr)return l+root->data;
    else return max(l,r)+root->data;
}
int maxPathSum(Node *root) {
    ma=INT_MIN;
    f(root);
    return ma;
    // code here
}
