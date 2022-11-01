#include<bits/stdc++.h>
#define pi 3.14159265359
using namespace std;

typedef long long ll ;
typedef pair<ll, ll>pll ;

void solve()
{
    ll n ;
    cin >> n ;
    ll a[n+1] ;
    ll t=0 ;
    for(int i=0; i<n; i++)
    {
        cin >> a[i] ;
        while(a[i]%2==0)
        {
            t++ ;
            a[i]/=2;

        }
    }

    if(t>=n)
        cout << 0 << endl ;
    else
    {
        ll p = 0 ;
        ll m=n ;
        priority_queue<ll> pq;
        while(m) {
            ll mm = m ;
            ll cnt = 0 ;
            while(mm%2==0)
            {
                cnt++ ;
                mm/=2 ;
            }
            pq.push(cnt) ;
            m-- ;
        }

        while(pq.size() && t<n) {
            t += pq.top() ;
            pq.pop() ;
            p++ ;
        }

        if(pq.size()==0 && t<n)
            cout << -1 << endl ;
        else
            cout << p << endl ;
    }
}

int main()
{
    ll tc = 1 ;
    cin >> tc ;
    while(tc--)
    {
        solve() ;
    }
}
