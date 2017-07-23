Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

Example:

Given s = "Hello World",

return 5 as length("World") = 5.

Please make sure you try to solve this problem without using library functions. Make sure you only traverse the string once.

int Solution::lengthOfLastWord(const string &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int length = 0;
    for(int i = A.size()-1 ; i >=0; i--){
        char c = A[i];
        if(isspace(c)){
            if(length != 0) return length;
        }
        else{
            length++;    
        }
    }
    return length;
}
