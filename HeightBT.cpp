int ma=0;
void f(Node* root,int h){
    if(root==nullptr)return;
    ma=max(ma,h);
    f(root->left,h+1);
    f(root->right,h+1);
}
int height(Node* root)
{
   ma=0;
   f(root,1);
   return ma;
}
