class Solution {
public:
    int diameter(TreeNode* root , int* height){
        if(root==NULL){
            *height = 0;
            return 0;
        }
        int lh=0,rh=0;
        int ld = diameter(root->left,&lh);
        int rd = diameter(root->right,&rh);
         int currD = lh+rh;
        *height = max(lh,rh)+1;
       
        return max(currD,max(ld,rd));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int height = 0;
        return diameter(root,&height);
        
    }
};
