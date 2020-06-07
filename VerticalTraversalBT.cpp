map<int,vector<int>> m;

void bfs(Node* root,int loc){
    queue<pair<int,Node*>> q;
    q.push({loc,root});
    while(!q.empty()){
        pair<int,Node*> temp=q.front();
        q.pop();
        if(temp.second==nullptr)continue;
        m[temp.first].push_back(temp.second->data);
        q.push({temp.first-1,temp.second->left});
        q.push({temp.first+1,temp.second->right});
    }
}

void verticalOrder(Node *root){
    m.clear();
    bfs(root,0);
    for(auto &u:m){
        for(auto x:u.second){
            cout<<x<<" ";
        }
    }
}
