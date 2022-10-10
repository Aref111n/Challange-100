//BISMILLAHIR RAHMANIR RAHIM
//INNALLAHA_MA_AS_SABIRIN

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define      __                 <<" "<<
#define      loop(m,n)          for(m=0;m<n;m++)
#define      loop1(m,n)         for(m=1;m<=n;m++)
#define      rloop(m,n)         for(m=n-1;m>=0;m--)
#define      say(VAL)           ll VAL; cin >> VAL
#define      case()             "Case " << z++ << ":" << endl
#define      Gooo               \
                                ios_base::sync_with_stdio(false); \
                                cin.tie(0);

#define      test_inp()         ll Tc,z=1;cin>>Tc;while(Tc--)
#define      ntest_inp()        for(int Tc=0;Tc<1;Tc++)
#define      len(n)             (long long)((log(n)/log(10))+1.0000000001)
#define      PTF(b)             puts(b?"YES":"NO")
#define      Ptf(b)             puts(b?"Yes":"No")
#define      ptf(b)             puts(b?"yes":"no")
#define      take(arr, n)       loop(i, n) cin>>arr[i]
#define      rev                greater<ll>
#define      newline            cout<<endl
#define      pqmn               priority_queue<ll, vector<ll>, std::greater<ll> >
#define      quit               return 0


using namespace std;
using namespace __gnu_pbds;

//typedefs
typedef long long ll;
typedef pair<ll,ll> pll;
typedef tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;


//Function prototypes
inline void ls();
inline ll ceill(ll n, ll k=1);
long long maxx(ll=0,ll=0,ll=0,ll=0,ll=0);
long long minn(ll=1e18,ll=1e18,ll=1e18,ll=1e18,ll=1e18);
bool cmp1(pair<ll,ll> i1,pair<ll,ll> i2);
bool cmp2(pair<ll,ll> a, pair<ll,ll> b);
long long eugcd(ll a,ll b);

//constraints...
const ll MX = 100006 ;
const ll MXX = 1000006 ;
const ll mod = 1000000007 ;
const ll mod1 = 998244353 ;
const double pi = 3.14159265358979323846 ;

//Solve here...
bool cmp3(const pair<ll,ll> &a,
         const pair<ll,ll> &b)
{
    if(a.first==b.first)
        return (a.second > b.second);
    else
        return (a.first < b.first);
}

ll bigmod(ll b, ll p){
    if(p==0) return 1;
    ll x=bigmod(b, p/2);
    x=(x*x)%mod1;
    if(p%2==1)x=(x*b)%mod1;
    return x;
}

//knights move
/*ll kx[] = {-2, -2, -1, -1,  1,  1,  2,  2};
ll ky[] = {-1,  1, -2,  2, -2,  2, -1,  1};*/

ll modd(ll v, ll m) {
    if(v<0) {
        ll k = ceill(-v, m) ;
        k*=m ;
        return v+k ;
    }
    else {
        return v%m ;
    }
}

//std::vector<ll> adj[5*MX];
//ll vis[5*MX], p[5*MX+5] ;
/*ll mn , min_node ;
void dfs(ll s) {
    vis[s]=1;
    mn = min(mn, p[s]) ;
    for(auto it: adj[s])
        if(vis[it]==0)
            dfs(it);
}*/


int main()
{
#ifndef ONLINE_JUDGE
  freopen("inp.txt", "r", stdin);
  freopen("outpp.txt", "w", stdout);
#endif

    ll i, j, k, n ;

     test_inp(){
        ll n ;
        cin >> n ;
        ll a[n+1], b[n+1] ;
        deque<ll> dq ;
        loop(i, n) {
            cin >> a[i] ;
            dq.push_back(a[i]) ;
        }   

        sort(a, a+n) ;

        bool bb = 1 ;

        loop(i, n) {
            if(dq.front()==a[i])
                dq.pop_front() ;
            else if(dq.back()==a[i])
                dq.pop_back() ;
            else {
                bb = 0 ;
                break;
            }
        }

        PTF(bb) ;
     }
}

//.......Functions here......
//Faster your code
inline void ls()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}
//Multiple Maximum
ll maxx(ll a, ll b, ll c, ll d, ll e)
{
    ll ans = a>b ? a : b ;
    ans = ans > c ? ans : c ;
    ans = ans > d ? ans : d ;
    ans = ans > e ? ans : e ;

    return ans;
}
//Multiple Minimum
ll minn(ll a, ll b, ll c, ll d, ll e)
{
    ll ans = a<b ? a : b ;
    ans = ans < c ? ans : c ;
    ans = ans < d ? ans : d ;
    ans = ans < e ? ans : e ;

    return ans;
}
//double sort, both key and value in descending order
//and to make both ascending, use rbegin() and rend()
//priority: key
bool cmp1(pair<ll,ll> i1,pair<ll,ll> i2)
{
    if(i1.first == i2.first)
        return (i1.second> i2.second);
    else
        return (i1.first >i2.first);
}
//double sort, key ascending and value descending
//for vice versa, use rbegin() and rend()
//priority: value
bool cmp2(pair<ll,ll> a, pair<ll,ll> b)
{
    if(a.second!=b.second)
        return (a.second > b.second);
    else
        return (a.first < b.first);
}
//Euclidean gcd
ll eugcd(ll a,ll b)
{
    if(b==0)
        return a;
    ll p=a%b;
    return eugcd(b,p);
}
//ceil
inline ll ceill(ll n, ll k)
{
    return (n/k)+bool(n%k);
}
//......Function over
