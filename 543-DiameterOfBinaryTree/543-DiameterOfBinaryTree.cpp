// Last updated: 7/11/2025, 12:07:45 AM

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
/*
int getHeight(TreeNode*root){
    if(root==NULL){
        return 0;
    }
    int left=getHeight(root->left);
    int right=getHeight(root->right);
    int maxHeight = max(left,right);
    int totalHeight=maxHeight+1;
    return totalHeight;
}
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int option1 = diameterOfBinaryTree(root->left);
        int option2 = diameterOfBinaryTree(root->right);
        int option3 = getHeight(root->left)+getHeight(root->right);
        int maxDiameter=max(option1,max(option2,option3));
        return maxDiameter;
}
    */
//  pair<int,int> getdia(TreeNode* root)
//  {
//     if(root==NULL)
//     {
//      pair<int,int> p=make_pair(0,0);    //<diameter,height>
//      return p;
//     }
//     pair<int,int> left=getdia(root->left);
//     pair<int,int> right=getdia(root->right);

//     int opt1= left.first;
//     int opt2=right.first;
//     int opt3= left.second+right.second+1;
//     pair<int, int> ans;
//     ans.first=max(opt1,max(opt2,opt3));
//     ans.second=max(left.second,right.second)+1;
//     return ans;
//  }

int solve(TreeNode* root,int &ans){
    if(root==NULL){
        
        return 0;
    }
    int lh=solve(root->left,ans);
   
    int rh=solve(root->right,ans);
   
    // cout<<"return value is  "<<max(lh,rh)+1<<endl;
    ans=max(ans,lh+rh+1);
    // cout<<"ans is "<<ans<<endl;
    return max(lh,rh)+1;
// [p=l-]

}

 
    int diameterOfBinaryTree(TreeNode* root) {
    int ans=0;
     solve(root,ans );
     return ans-1; 
    }
};