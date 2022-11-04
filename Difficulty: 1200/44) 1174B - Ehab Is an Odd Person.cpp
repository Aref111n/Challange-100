#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

int main()
{
    ll tc = 1, z=1 ;
    //cin >> tc ;
    while(tc--) {
        ll n ;
        cin >> n ;
        ll odd=0, even=0 ;
        ll a[n+1] ;
        for(int i=0; i<n; i++) {
            cin >> a[i] ;
            if(a[i]%2==0)
                even++ ;
            else
                odd++ ;
        }

        if(even==n || odd==n) {
            for(int i=0; i<n; i++)
                cout << a[i] << " " ;
            cout << endl ;
        }
        else {
            sort(a, a+n) ;
            for(int i=0; i<n; i++)
                cout << a[i] << " " ;
            cout << endl ;
        }
    }
    return 0;
}
