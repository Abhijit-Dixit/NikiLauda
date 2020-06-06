bool check(Node* root,int mi,int ma){
    if(root==nullptr)return true;
    if(ma!=-1 && root->data>=ma)return false;
    if(mi!=-1 && root->data<=mi)return false;
    return (check(root->left,mi,root->data)&check(root->right,root->data,ma));
}

bool isBST(Node* root) {
    return check(root,-1,-1);
}
