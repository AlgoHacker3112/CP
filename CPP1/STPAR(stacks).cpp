// Problem: Street Parade
// Contest: SPOJ - Classical
// URL: https://www.spoj.com/problems/STPAR/
// Memory Limit: 1536 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
#define int long long
#define ld long double
#define m_p make_pair
#define vec vector<int>
#define pb push_back
#define mp map<int,int>
#define vecpii vector<pair<int,int>>
#define que queue<int>
using namespace std;
const ld err=1e-7;
const ld pi=3.1415926535897932384626433832795;
const int rem=1e9+7;
const int INF=1e18;


int inrange(int i,int j,int n,int m)
{
	if(i<0 || j<0 || i>=n || j>=m)
	return 0;
	return 1;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1; 
    //cin>>t;
    while(t--){
		  int n; cin>>n;
		  int a[n+1];
		  for(int i=0;i<=n;i++) cin>>a[i];
		  vector<int> v(a,a+n);
		  int count=1;
		  stack<int>st;
		  for(int i=0;i<n;i++){
		  	if(v[i]==count) count++;
		  	else st.push(v[i]);
		  }
		  while(!st.empty()){
		  	if(st.top()==count){
		  		count++;
		  	}
		  	st.pop();
		  }
    
    if(count==n+1) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
 }
}
//binary exponentiation

/* int biexp(int a,int b,int rem){ ;
    int res=1;
	while(b){
		if(b&1) res=((res%rem)*(a%rem))%rem;
		a=((a%rem)*(a%rem))%rem;
		b/=2;
	}
	return res%rem;
}  */

// factorial function
/* int fac(int n){
 	int ans =1;
	for(int i=1;i<=n;i++) ans=((ans%rem)*(n%rem))%rem;
 	return ans;
} 
 */
// to check no. is prime or not 
/* bool isPrime[1e6+1];
for(int i=0;i<=1000000;i++) isPrime[i]=1;
isPrime[0]=0;
isPrime[1]=0;
for(int i=2;i*i<=1000000;i++)
	if(isPrime[i])
	 for(int j=i*i;j<=1000000;j+=i)
	   isPrime[j]=0;
 */
// to determine smallest prime facotr
/* int spf[1000001];
for(int i=1;i<=1000000;i++) spf[i]=i;
for(int i=0;i*i<=1000000;i++)
  if(spf[i]==i)
   for(int j=i*i;j<=1000000;j+=i)
     if(spf[j]==j)
	  spf[j]=i;
 */

/*
int ncr(int n,int r)
{
	int temp1=fac(n);
	int temp2=((fac(r)%rem)*(fac(n-r)%rem))%rem;
	temp2=biexp(temp2,rem-2,rem);
	temp1=((temp1%rem)*(temp2%rem))%rem;
	return temp1;
}*/





