/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> v;
int it;

void in(TreeNode *A){
    if(A==NULL) return;
    in(A->left);
    v.push_back(A->val);
    in(A->right);
}

BSTIterator::BSTIterator(TreeNode *root) 
{
    v.clear();
    it = 0;
    in(root);
}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext() {
    if(it<v.size()) return 1;
    else return 0;
}

/** @return the next smallest number */
int BSTIterator::next() {
    if(it<v.size()){
        int tmp = v[it];
        it++;
        return tmp;
    }
}


