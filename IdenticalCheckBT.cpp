bool isIdentical(Node *one, Node *two){
    if(one==nullptr && two==nullptr)return true;
    if(one==nullptr && two!=nullptr || two==nullptr && one!=nullptr)return false;
    if(one->data != two->data)return false;
    if(one->left!=nullptr && two->left!=nullptr && one->left->data!=two->left->data)return false;
    if(one->right!=nullptr && two->right!=nullptr && one->right->data!=two->right->data)return false;
    return (isIdentical(one->left,two->left) & isIdentical(one->right,two->right));
}
    
