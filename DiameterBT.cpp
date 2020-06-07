int dia=0;
int f(Node* node){
    if(node==nullptr)return 0;
    int l=f(node->left);
    int r=f(node->right);
    dia=max(dia,1+l+r);
    return max(l,r)+1;
}
int diameter(Node* node) {
    dia=0;
    f(node);
    return dia;
}
