You are given an n x n 2D matrix representing an image.

Rotate the image by 90 degrees (clockwise).

You need to do this in place.

Note that if you end up using an additional array, you will only receive partial score.

Example:

If the array is

[
    [1, 2],
    [3, 4]
]
Then the rotated array becomes:

[
    [3, 1],
    [4, 2]
]

/* You are given an n x n 2D matrix representing an image.
 *Rotate the image by 90 degrees (clockwise).
 *You need to do this in place.
 */
#define rep(i,n)    for(__typeof(n) i = 0; i < n; i++)
#define vi vector<int>
#define vll vector<ll>
#define vvi vector< vi >

void Solution::rotate(vector<vector<int> > &mat) {
    int n=mat.size();
     //call iteratively for all outer boundaries
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int j,t;
    rep(i,n/2) 
        for(j=i; j<n-1-i; j++){
            t = mat[i][j];
            mat[i][j] = mat[n-1-j][i];
            mat[n-1-j][i] = mat[n-1-i][n-1-j];
            mat[n-1-i][n-1-j] = mat[j][n-1-i];
            mat[j][n-1-i] = t;
        }
}
