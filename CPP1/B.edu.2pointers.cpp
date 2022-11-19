// Problem: B. Number of Smaller
// Contest: Codeforces - ITMO Academy: pilot course - Two Pointers Method - Step 1
// URL: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
#define int long long
#define ld long double
#define pii pair<int,int>
#define m_p make_pair
#define vec vector<int>
#define pb push_back
#define mp map<int,int>
#define ff first
#define ss second
#define endl "\n"
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
   int tt=1; 
    // cin>>tt;
    for(int te=1;te<=tt;te++)
	{
		int n,m; cin>>n>>m;
		vector<int> a(n),b(m);
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<m;i++) cin>>b[i];
		int j=0;
		while(j<m){
			int count=0;
		   for(int i=0;i<n;i++){
		   	if(a[i]<b[j]) count++;
		   	else break;
		   }
		   j++;
		   cout<<count<<" ";
		}
    }

}
//cout<<"test case #"<<te<<":"<<endl;
/*int biexp(int a,int b,int m)
{
	int res=1;
	while(b)
	{
		if(b%2)
		res=((res%m)*(a%m))%m;
		a=((a%m)*(a%m))%m;
		b/=2;
	}
	return res%rem;
}
int fac(int n)
{
	int t=1;
	for(int i=1;i<=n;i++)
	{
		t=t*i;
		t=t%rem;
	}
	return t;
}
int ncr(int n,int r)
{
	int temp1=fac(n);
	int temp2=((fac(r)%rem)*(fac(n-r)%rem))%rem;
	temp2=biexp(temp2,rem-2,rem);
	temp1=((temp1%rem)*(temp2%rem))%rem;
	return temp1;
}*/

/*for(int i=0;i<=1000000;i++){
    isPrime[i]=1;
}
isPrime[1]=0;
isPrime[0]=0;
for(int i=2;i*i<=1000000;i++){
    if(isPrime[i]==1){
        for(int j=i*i;j<=1000000;j+=i){
            isPrime[j]=0;
} }
}*/

/*for(int i=0;i<=1e6;i++){
        spf[i] = i;
    }
    for(int i=2;i*i<=1e6;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=1e6;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
} }
} }

*/

/*
int power(int a,int b)
{
	
	int res=1;
	while(b)
	{
		if(b%2)
		res=res*a;
		a=a*a;
		b/=2;
	}
	return res;
}

*/
/*
int lg(int i)
{
	int l=0,h=64,ans,mid;
	while(l<=h)
	{
		mid=l+(h-l)/2;
		if(power(2,mid)<=i)
		{
			l=mid+1;
			ans=mid;
		}
		else h=mid-1;
		
	}
	return ans;
}
*/
/*
int s_o_d(int x)
{
	int sum=0;
	for(int i=x;i>0;i/=10)
	{
		sum+=i%10;
	}
	return sum;
}
*/