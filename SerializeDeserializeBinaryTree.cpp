void serialize(Node *root,vector<int> &A){
    if(root==nullptr){
        A.push_back(-1);
        return;
    }
    A.push_back(root->data);
    serialize(root->left,A);
    serialize(root->right,A);
}

Node* f(queue<int> &q){
    //if(q.empty())return nullptr;
    int val=q.front();
    q.pop();
    if(val==-1)return nullptr;
    Node* nn=new Node(val);
    nn->left=f(q);
    nn->right=f(q);
    return nn;
}
Node* deSerialize(vector<int> &A){
   queue<int> q;
   for(auto u:A){
       q.push(u);
   }
   return f(q);
}
