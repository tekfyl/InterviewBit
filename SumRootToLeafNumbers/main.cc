/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 int sum(TreeNode* A, int v){
     if(A==NULL) return 0;
     v = (v*10)%1003 + A->val%1003;
     if(A->left == NULL && A->right == NULL) return v;
     return (sum(A->left,v)%1003+sum(A->right,v)%1003)%1003;
 }
 
int Solution::sumNumbers(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    return sum(A,0)%1003;
}

