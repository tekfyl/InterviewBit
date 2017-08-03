Given an array where elements are sorted in ascending order, convert it to a height balanced BST.

 Balanced tree : a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1. 
Example :


Given A : [1, 2, 3]
A height balanced BST  : 

      2
    /   \
   1     3

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void tr(const vector<int> &v, int low, int high, TreeNode* &r){
    if(low > high) return;
    
    int mid = low+(high-low)/2;
    TreeNode *root = new TreeNode(v[mid]);
    r = root;
    tr(v, low, mid-1, r->left);
    tr(v, mid+1, high, r->right);
}

TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    TreeNode *ret = NULL;
    tr(A, 0, A.size()-1, ret);
    return ret;
}

