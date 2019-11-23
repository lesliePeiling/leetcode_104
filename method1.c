/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int maxDepth(struct TreeNode* root){
    if(root==NULL) return 0;
    if((root->left==NULL)&&(root->right==NULL)){
        return(1);
        //printf("root=%d;\thL=%d,hR=%d;\n",root->val);
    }
    if((root->left)&&(root->right==NULL)){
        return(1+maxDepth(root->left));
    }
    if((root->left==NULL)&&(root->right)){
        return(1+maxDepth(root->right));
    }
    
    //both children exist;
    int tmpL,tmpR;
    tmpL=maxDepth(root->left);
    tmpR=maxDepth(root->right);
    //printf("root=%d;\thL=%d,hR=%d;\n",root->val,tmpL,tmpR);
    return (tmpL>tmpR?tmpL:tmpR)+1;
}

