#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll tc ;
    cin >> tc ;
    while(tc--)
    {
        ll n ;
        cin >> n ;
        ll a[n+5], q[n+5] ;
        ll mp[n+2] ;
        for(int i=0; i<n; i++) {
            q[i] = -1 ;
            mp[i+1]=1;
        }
        for(int i=0; i<n; i++)
        {
            cin >> a[i] ;
            if(i && a[i]>a[i-1])
            {
                q[i] = a[i] ;
                mp[a[i]]-- ;
            }
            if(i==0) {
                q[i] = a[i] ;
                mp[a[i]]-- ;
            }
        }

        //for(int i=0; i<n; i++)
            //cout << q[i] << " " ;
        //cout << endl ;

        ll j, bb=0 ;
        for(int i=0; i<n; i++)
        {
            //cout << q[i] << " " ;
            if(q[i]>0)
            {
                j = q[i] ;
            }
            else
            {
                while(mp[j]==0 && j>0)
                    j-- ;
                //cout << j << endl ;
                if(j==0)
                {
                    bb = 1 ;
                    break;
                }
                q[i] = j ;
                mp[j]-- ;
            }
        }

        if(bb==1)
            cout << -bb << endl ;
        else
        {
            for(int i=0; i<n; i++)
                cout << q[i] << " " ;
            cout << endl ;
        }
    }
}
