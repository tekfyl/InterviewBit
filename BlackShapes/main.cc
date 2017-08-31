Given N * M field of O's and X's, where O=white, X=black
Return the number of black shapes. A black shape consists of one or more adjacent X's (diagonals not included)

Example:

OOOXOOO
OOXXOXO
OXOOOXO

answer is 3 shapes are  :
(i)    X
     X X
(ii)
      X
 (iii)
      X
      X
Note that we are looking for connected shapes here.

For example,

XXX
XXX
XXX
is just one single connected black shape.

int Solution::black(vector<string> &A) {
    // Do not write main() function.
    //Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int movx[] = {0,0,-1,+1};
    int movy[] = {+1,-1,0,0};
    vector<vector<int> > vis(A.size(), vector<int> (A[0].size(), 0) );
    int count = 0;
    queue<pair<int,int> > q;
    for(int i=0; i<A.size(); i++){
        for(int j=0; j<A[i].size(); j++){
            if(A[i][j] == 'X' && vis[i][j]==0) {
                q.push(make_pair(i,j)); count++;
                while(!q.empty()){
                pair<int,int> p = q.front();
                    int x,y;
                    x = p.first; y = p.second;
                    q.pop(); 
                    vis[x][y] = 1;
                    for(int k=0; k<4; k++){
                        int tx,ty;
                        tx = x+movx[k]; ty = y+movy[k];
                        if(tx>-1 && tx < A.size() && ty > -1 && ty<A[i].size()){
                            if(vis[tx][ty] == 0 && A[tx][ty] == 'X'){
                                vis[tx][ty] = 1;
                                q.push(make_pair(tx,ty));
                            }
                        }
                    }
                }
            }
        }
    }
    return count;
}
