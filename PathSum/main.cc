/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 int check(TreeNode* A, int sum){
     if(A==NULL) return 0;
     if(A->val-sum == 0 && A->left == NULL && A->right == NULL) return 1;
     return max(check(A->left, sum-A->val), check(A->right, sum-A->val));
 }
 
int Solution::hasPathSum(TreeNode* A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    return check(A,B);
}

