#include<bits/stdc++.h>
using namespace std;

typedef long long ll ;

ll n=400005;
bool sieve[400005];
vector<ll>prime ;
void primesieve()
{
    ll i;
    sieve[0]=sieve[1]=1;
    prime.push_back(2);
    for(i=4;i<n;i+=2)
        sieve[i]=1;
    ll sq=sqrt(n);
    for(i=3;i<sq;i+=2)
    {
        if(sieve[i]==0)
        {
            for(ll j=i*i;j<=n;j+=2*i)
                sieve[j]=1;
        }
    }
    ll x=1;
    for(i=3;i<=n;i+=2)
    {
        if(sieve[i]==0)
        {
            prime.push_back(i);
        }
    }
}
int main()
{
    primesieve() ;
    ll tc = 1, z=1 ;
    //cin >> tc ;
    while(tc--) {
        ll n, odd=0, even=0 ;
        cin >> n ;
        for(int i=0; i<n; i++) {
            ll a; cin >> a;
            if(a==2)
                even++ ;
            else
                odd++ ;
        }

        ll s = 0, i=0, t=0 ;
        while(t<n) {
            if(prime[i]-s==1 && odd) {
                cout << 1 << " " ;
                t++ ;
                s = prime[i] ;
                odd-- ;
            }
            else if(prime[i]-s==2 && even) {
                cout << 2 << " " ;
                t++ ;
                s = prime[i] ;
                even-- ;
            }
            else {
                ll k = (prime[i]-s)/2 ;
                ll cnt=0 ;
                while(cnt<k && even) {
                    cout << 2 << " " ;
                    even-- ;
                    cnt++ ;
                    t++ ;
                }

                k = (prime[i]-s)-(2*cnt) ;
                while(k && odd) {
                    cout << 1 << " " ;
                    k-- ;
                    odd-- ;
                    t++ ;
                }
                if(t==n)
                    break;
                s = prime[i] ;
            }
            i++ ;
        }
    }
    return 0;
}
