#include <bits/stdc++.h>

#define all(c) c.begin(), c.end()
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vvi vector< vi >
#define vvl vector< vector<ll> >
#define mk make_pair
#define ii pair <int, int>
#define LL pair <ll, ll>
#define fi first
#define se second
#define mx max_element
#define mn min_element
#define rep(i,n)    for(__typeof(n) i = 0; i < n; i++)
#define rep1(i,n)   for(__typeof(n) i = 1; i <= n; i++)
double tick(){static clock_t oldt,newt=clock();double diff=100.0*(newt-oldt)/CLOCKS_PER_SEC;oldt=newt;return diff;}

using namespace std;

ll inf=1e18+1;  
ll N,M;
int x1, x2, y11, y2;
vll v,q,st;
ll in=0,i=0,j=0,k=0,ans=0;
ll n=0,m=0,t=0,v1=0,v2=0;
char c; string s;

map<pair<int, int>, int > vis, dis;
int knight(){
    int dx[] = {1, -1, 1, -1, 2, -2, 2, -2};
    int dy[] = {2, -2, -2, 2, 1, -1, -1, 1};
    vector<pair<int, int> > q; int ans=0;
    q.push_back(make_pair(x1, y11));
    while(!q.empty()){
        int x = q.front().first; 
        int y = q.front().second;
        q.erase(q.begin());
        for(int i=0; i<8; i++){
            int xt = x+dx[i]; int yt = y+dy[i];
            if(xt>0 && xt<= N && yt<= M && yt>0){
                if(!vis[make_pair(xt, yt)]){
                    vis[make_pair(xt, yt)] = 1;
                    dis[make_pair(xt, yt)] = dis[make_pair(x, y)] + 1;
                    if(xt == x2 && yt == y2) return dis[make_pair(xt,yt)];
                    else{
                        q.push_back(make_pair(xt, yt));
                    }
                }
            }
        }
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin >> N >> M >> x1 >> y11 >> x2 >> y2;
    cout << knight() << endl;
    for(i = 1; i<=N; i++){
        for(j=1; j<=M; j++){
            if(vis[mk(i,j)] != 0) cout << dis[mk(i,j)];
            else cout << "X";
        }
        cout << endl;
    }
    //cout<<"\n"<<"Execution time : "<<tick()<<"\n";
    return 0;
}

