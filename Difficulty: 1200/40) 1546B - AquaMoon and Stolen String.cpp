#include<bits/stdc++.h>
using namespace std;

typedef long long ll ;
ll mp[100005][26] ;
int main()
{
    ll tc ;
    cin >> tc ;
    while(tc--)
    {
        ll n, m, i, j;
        cin >> n>>m;
        string a,s[n+2];
        ll x = 0;

        for(i=0; i<n; i++)
        {
            cin >> s[i];
            for(j=0; j<m; j++)
            {
                ll p = s[i][j] - 'a';
                mp[j][p]++;
            }
        }
        for(i=0; i<n-1; i++)
        {
            cin >> a;
            for(j=0; j<m; j++)
            {
                ll p = a[j] - 'a';
                mp[j][p]++;
            }

        }

        for(i=0; i<n; i++)
        {
            x = 0;
            for(j=0; j<m; j++)
            {
                ll p = s[i][j] - 'a' ;
                if(mp[j][p]%2==0) {
                        x = 1 ;
                    break;
                }
            }
            if(x==0)
            {
                cout<<s[i]<<endl;
                break;
            }
        }
        memset(mp, 0, sizeof mp) ;
    }
    return 0;
}
