int cnt=0;
void f(Node* root){
    if(root==nullptr)return;
    if(root->left==nullptr && root->right==nullptr)cnt++;
    f(root->left);
    f(root->right);
}
int countLeaves(Node* root){
  cnt=0;
  f(root);
  return cnt;
}
