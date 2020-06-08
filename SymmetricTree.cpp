bool f(Node* one, Node* two){
    if(one==nullptr && two==nullptr)return true;
    if(one==nullptr && two!=nullptr || two==nullptr && one!=nullptr)return false;
    if(one->left!=nullptr && two->right!=nullptr && one->left->data!=two->right->data)return false;
    if(one->right!=nullptr && two->left!=nullptr && one->right->data!=two->left->data)return false;
    return (f(one->left,two->right) & f(one->right,two->left));
}
bool isSymmetric(struct Node* root){
	return f(root,root);
}
