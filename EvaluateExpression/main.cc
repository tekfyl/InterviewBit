int Solution::evalRPN(vector<string> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> st;
    for(int i=0; i<A.size(); i++){
        if(A[i] != "+" && A[i] != "-" && A[i] != "/" && A[i] != "*"){
            st.push_back(atoi(A[i].c_str()));
        }
        else{
            int a,b,c;
            a = st.back(); st.pop_back();
            b = st.back(); st.pop_back();
            if(A[i] == "+") c = b+a;
            else if(A[i] == "-") c = b-a;
            else if(A[i] == "*") c = b*a;
            else if(A[i] == "/") c = b/a;
            st.push_back(c);
        }
    }
    return st.back();
}
