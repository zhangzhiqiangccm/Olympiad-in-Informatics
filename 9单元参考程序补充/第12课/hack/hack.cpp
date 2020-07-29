#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O2")
#define eb emplace_back
#define pb push_back
#define pw(x) ((1LL)<<(x))
#define buli(x) (__builtin_popcountll(x))
typedef long long ll;
typedef double db;
const int inf=1e9;
const int md= 998244353;
const int maxn=1e5+5;
const db eps=1e-6;
inline void rd(long long &x){
	int sign=1;char c;while(((c=getchar())<'0'||c>'9')&&c!='-');c=='-'?(sign=-1,x=0):(x=c-'0');
	while((c=getchar())>='0'&&c<='9')x=x*10+c-'0';x*=sign;
}
inline void rd(double&x){scanf("%lf",&x);}
inline void rd(int &x){ll y=0;rd(y);x=y;}
inline void upd(int &a,int b){a+=b;if(a>=md)a-=md;}
int n,c,l,r,m,T,x,y,z,nk,nq,ans;
const int mx=445;
int f[maxn+10],s[maxn+10],g[maxn+10];
int main(){
	#ifndef GJY
		freopen("hack.in","r",stdin);
		freopen("hack.out","w",stdout);
	#endif
	f[0]=1;
	for(int i=0;i<=mx;i++){
		for(int j=0;j<=maxn-i;j++){
			if(j+i+1<=maxn)upd(g[j+i+1],f[j]);
			if(i>0)upd(f[i+j],f[j]);
		}
		for(int j=0;j<=maxn;j++) upd(s[j],f[j]),f[j]=g[j],g[j]=0;
	}

	rd(n);
	rd(c);rd(l);rd(r);
	l-=c;r-=c;
	ans=0;
	for(int i=l;i<=r;i++) upd(ans,s[i]);
	cout<<ans<<endl;
	
}