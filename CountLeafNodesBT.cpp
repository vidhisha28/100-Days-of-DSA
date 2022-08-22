int countLeafNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        return 1;
    }
    int lcount=countLeafNodes(root->left);
    int rcount=countLeafNodes(root->right);
    return lcount+rcount;
}
