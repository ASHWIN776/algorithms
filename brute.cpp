#include<bits/stdc++.h>
#include<math.h>
#define rep(i,k,n) for(int i=k;i<n;i++)
#define ll long long
#define MOD 998244353
#define ROD 1000000009
#define INF 0x3f3f3f3f3f3f3f3f
#define MIN(a,b) (a>b?b:a)
#define fi first
#define se second
#define pii pair<ll,ll>
#define piii pair<pair<ll,ll>,pair<ll,ll>>
#define mp make_pair
using namespace std;
ll n,q,ar[100005],func(ll,ll,ll);
vector <ll> vr[100005];
int main()
{
    freopen("inp","r",stdin);
    freopen("oup3","w",stdout);
    scanf("%lld %lld",&n,&q);
    rep(i,1,n+1)
    scanf("%lld",&ar[i]);
    rep(i,1,n)
    {
        ll x,y;
        scanf("%ld %lld",&x,&y);
        vr[x].push_back(y);
        vr[y].push_back(x);
    }
    ll tt,node,ch;
    rep(i,0,q)
    {
        scanf("%lld",&tt);
        if(tt==1)
        {
            scanf("%lld %lld",&node,&ch);
            ar[node]=ch;
        }
        else
        {
            scanf("%lld",&node);
            printf("%lld\n",func(node,0,0));
        }
    }
}
ll func(ll idx,ll p,ll lvl)
{
    ll size_=vr[idx].size();
    ll ans=ar[idx]*lvl;
    rep(i,0,size_)
    {
        if(vr[idx][i]==p)
            continue;
        func(vr[idx][i],idx,lvl+1);
    }
    return ans;
}