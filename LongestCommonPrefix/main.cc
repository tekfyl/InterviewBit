Write a function to find the longest common prefix string amongst an array of strings.

Longest common prefix for a pair of strings S1 and S2 is the longest string S which is the prefix of both S1 and S2.

As an example, longest common prefix of "abcdefgh" and "abcefgh" is "abc".

Given the array of strings, you need to find the longest S which is the prefix of ALL the strings in the array.

Example:

Given the array as:

[

  "abcdefgh",

  "aefghijk",

  "abcefgh"
]
The answer would be “a”.

string Solution::longestCommonPrefix(vector<string> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    string s, prefix;
    s = A[0];
    int i,j, count=0, min=99999;
    for(i=1; i<A.size(); i++){
        count = 0;
        string tr;
        tr = A[i];
            for(j=0; j<s.size() ; j++){
                if(s[j] == tr[j]) {count++;}
                else break;
            }
            if(min > count) min = count;
    }
    return s.substr(0,min); 
}

