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

void pushall(TreeNode* A){
    while(A != NULL){
        st.push(A);
        A = A->left;
    }
}

BSTIterator::BSTIterator(TreeNode *root) {
    pushall(root);
}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext() {
    return !st.empty();
}

/** @return the next smallest number */
int BSTIterator::next() {
    if(hasNext()){
        TreeNode *temp = st.top();
        st.pop();
        pushall(temp->right);
        return temp->val;
    }
}


/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */

