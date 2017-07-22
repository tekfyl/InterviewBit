/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 
int Solution::kthsmallest(TreeNode* root, int k) {
    stack<TreeNode*> st;
    vector<int> v;
    
    TreeNode *curr=root;
    int done = 0;
    while(!done){
        if(curr != NULL) st.push(curr), curr=curr->left;
        else{
            if(!st.empty()) curr=st.top(),v.push_back(curr->val), st.pop(), curr=curr->right;
            else done = 1;
        }
    }
    return v[k-1];
}

