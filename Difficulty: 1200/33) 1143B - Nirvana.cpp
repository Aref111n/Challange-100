#include<bits/stdc++.h>
using namespace std;

typedef long long ll ;

ll digisum(ll n) {
    ll s=1 ;
    while(n)
    {
        s *= (n%10) ;
        n/=10 ;
    }

    return s ;
}
int main()
{
    ll tc = 1 ;
    //cin >> tc ;
    while(tc--) {
        ll n ;
        cin >> n ;
        string s = to_string(n) ;
        ll p = 0, mx = digisum(n) ;
        if(s.size()==1) {
            cout << n << endl ;
            return 0 ;
        }
        s[s.size()-1] = '9' ;
        for(int i=s.size()-2; i>=0; i--) {
            int p = int(s[i]-'0') ;
            if(i==0 && s[i]=='1')
                s.erase(s.begin()) ;
            else {
                if(p>0)
                    p-- ;
                s[i] = char(p+'0') ;
            }
            mx = max(mx, digisum(stoll(s))) ;
            //cout << s << " " << mx << endl ;
            s[i] = '9' ;
        }

        cout << mx << endl ;
    }
    return 0;
}
