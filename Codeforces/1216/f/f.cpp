#include <bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define mod 1000000007
#define INF LLONG_MAX

#define mem(a,val) memset(a,val,sizeof(a))
#define rep(i,j,n) for(i=j;i<n;i++)
#define invrep(i,j,n) for (i = j-1; i >=n ; --i)
#define prec(n) fixed<<setprecision(n)
#define bit(n, i) (((n) >> (i)) & 1)
#define bitcount(n) __builtin_popcountll(n)
#define bin_long stoi(to_string(x), nullptr, 2);

#define pb push_back
#define mp make_pair
#define f first
#define s second
	
#define mx 1000005
    
using namespace std;

typedef long double ld;
typedef long long int ll;
typedef pair<ll,ll> pl;

ld pi=2.0*acos(0.0);

mt19937 rng32(chrono::steady_clock::now().time_since_epoch().count());

ll N;

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		// freopen("../../../input","r",stdin);
		// freopen("../../../output","w",stdout);
    	// #define mx 100005
    #else
		// #define mx 1000005
    #endif

	fastIO
	
	ll a,b,c,d,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l;
	char A[mx];
	ll B[mx] = {0};
	// memset(A,-1,sizeof(A));
	
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	
	
		f=0;
		r=0;
	
		cin>>n>>k;
		cin>>A;
		// sort(A,A+n);
		rep(i,0,n){
			if (A[i]=='1')
			{
					B[min(i+k+1,n)] -= 1;
					B[max(0LL,i-k)] += 1;
					r += i+1;
					if (i+k+1>=n)
					{
						break;
					}
			}
		}	
	// 	if(A[n-k-1] == '1'){
	// 		invrep(i,n-k,0){
	// 			if (A[i]=='1')
	// 			{
	// 				B[min(i+k+1,n)] -= 1;
	// 				B[max(0LL,i-k)] += 1;
	// 				r += i+1;
	// 			}
	// 		}
				
	// 	}else
	// 	invrep(i,n,0){
	// 		if (A[i]=='1')
	// 		{
	// 			B[min(i+k+1,n)] -= 1;
	// 			B[max(0LL,i-k)] += 1;
	// 			r += i+1;
	// 		}
	// 	}
		// f = B[0];
	// 	// cout<<r;
		rep(i,0,n){
		f += B[i];		
		// cout<<f;
			if (f == 0)
			{
				r += i+1;	
			}
		}

		cout<<r<<"\n";	
	// // }

	return 0;
}