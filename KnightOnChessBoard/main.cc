int Solution::knight(int N, int M, int x1, int y1, int x2, int y2){
    vector<vector<int> > dis(N+1, vector<int>(M+1, 55555));
    vector<vector<int> > vis(N+1, vector<int>(M+1, 0));
    queue<pair<int,int> > q;
    int ans=0;
    int dx[] = {1, -1, 1, -1, 2, -2, 2, -2};
    int dy[] = {2, -2, -2, 2, 1, -1, -1, 1};
    dis[x1][y1] = 0;
    q.push(make_pair(x1, y1));
    if(x1 == x2 && y1 == y2) return 0;
    while(!q.empty()){
        int x = q.front().first; 
        int y = q.front().second;
        q.pop(); vis[x][y] = 1;
        for(int i=0; i<8; i++){
            int xt = x+dx[i]; int yt = y+dy[i];
            if(xt>0 && xt<= N && yt<= M && yt>0){
                if(!vis[xt][yt]){
                    vis[xt][yt] = 1;
                    int cost = dis[x][y] + 1;
                    if(dis[xt][yt] > cost){
                        dis[xt][yt] = cost; 
                        q.push(make_pair(xt, yt));
                    }
                }
            }
        }
    }
    return dis[x2][y2] == 55555 ? -1 : dis[x2][y2];
}
