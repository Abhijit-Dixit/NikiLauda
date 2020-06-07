

void f(Node* root){
    queue<Node*> q;
    vector<Node*> v;
    int flag=0;
    q.push(root);
    cout<<root->data<<" ";
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        if(temp!=nullptr){
            v.push_back(temp->left);
            v.push_back(temp->right);
        }
        if(q.empty() && !v.empty()){
            for(auto u:v){
                q.push(u);
            }
            if(flag)reverse(v.begin(),v.end());
            for(auto u:v){
                if(u!=nullptr)cout<<u->data<<" ";
            }
            v.clear();
            flag=(flag^1);
        }
    }
}

void printSpiral(Node *root)
{   
    if(root==nullptr)return;
    f(root);
}
