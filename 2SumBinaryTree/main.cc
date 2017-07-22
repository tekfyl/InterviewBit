/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::t2Sum(TreeNode* A, int B) {
    
    /**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
    stack<TreeNode*> st;
    map<int,int> hash;
    TreeNode *curr=A;
    int done = 0;
    while(!done){
        if(curr != NULL) st.push(curr), curr=curr->left;
        else{
            if(!st.empty()){
                curr=st.top();
                int t = curr->val;
                if(hash[t] == 0) hash[B-t] = 1;
                else return 1;
                st.pop();
                curr=curr->right;
            } 
            else done = 1;
        }
    }
   return 0;
}

