// Problem: KATHTHI
// Contest: SPOJ - Classical
// URL: https://www.spoj.com/problems/KATHTHI/
// Memory Limit: 1536 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

// Powered by AlgoHacker

#include<bits/stdc++.h>
#define int long long
#define ld long double
#define m_p make_pair
#define que queue<int>
using namespace std;
const ld err=1e-7;
const ld pi=3.1415926535897932384626433832795;
const int MOD=1e9+7;
const int INF=1e18;

int inrange(int i,int j,int n,int m)
{
	if(i<0 || j<0 || i>=n || j>=m)
	return 0;
	return 1;
}

char mat[1000][1000];
int dis[1000][1000];
int r,c ;
int solve(){
	int startX=0,startY=0;
	dis[startX][startY]=0;
	deque<pair<int ,int > > q;
	pair<int,int> p;
	q.push_front(make_pair(startX,startY));
	while(!q.empty()){
		p=q.front();
		q.pop_front();
		int x=p.first;
		int y=p.second;
		int a[]={0,-1,0,1};
		int b[]={1,0,-1,0};
		for(int i=0;i<4;i++){
		    int tempX=x+a[i];
				int tempY=y+b[i];
	     if(inrange(tempX,tempY,r,c)){
	     	if(mat[tempX][tempY]==mat[x][y] and dis[tempX][tempY]>dis[x][y]){
	     		dis[tempX][tempY]=dis[x][y];
	     		q.push_front(make_pair(tempX,tempY));
	     		
	     	}
	     	else if(mat[tempX][tempY]!=mat[x][y] ){
	     		if(dis[tempX][tempY]>dis[x][y]+1){
	     		dis[tempX][tempY]=dis[x][y]+1;
	     		q.push_front(make_pair(tempX,tempY));
	     		}
	     	}
	     } 
		}
	}
    
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1; 
    cin>>t;
    while(t--){
	 cin>>r>>c;
		for(int i=0;i<r;i++)
		 for(int j=0;j<c;j++)
		  cin>>mat[i][j];
		  
		for(int i=0;i<1000;i++)
		 for(int j=0;j<1000;j++)
		  dis[i][j]=INF;
		  
		  solve();
		  cout<<dis[r-1][c-1]<<endl;
    }
}








