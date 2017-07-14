vector<int> Solution::prevSmaller(vector<int> &A) {
    vector<int> ans; int f=0;
    ans.push_back(-1);
    vector<int> st; st.push_back(A[0]);
    for(int i=1; i<A.size(); i++){
        f = 0;
        while(!st.empty()){
            if(A[i] > st.back()){ ans.push_back(st.back()); f=1; st.push_back(A[i]); break;}
            else{
                st.pop_back();
            }
        }
            if(f==0) ans.push_back(-1), st.push_back(A[i]);
    }
    return ans;
}
