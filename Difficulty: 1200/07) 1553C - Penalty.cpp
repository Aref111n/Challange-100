#include<bits/stdc++.h>
#define ll long long
#define pll pair<ll, ll>
using namespace std;

int solve()
{
    string s ;
    cin >> s ;
    ll a=0, b=0, c1=0, c2=0 ;
    for(int i=0; i<10; i++)
    {
        if(i%2==0)
        {
            if(s[i]=='1')
                a++ ;
            else if(s[i]=='?')
                c1++ ;
        }
        else
        {
            if(s[i]=='1')
                b++ ;
            else if(s[i]=='?')
                c2++ ;
        }

        if(a+c1 > b+(10-i)/2 || b+c2>a+(9-i)/2)
        {
            return i+1 ;
            break;
        }
    }
    return 10 ;
}

int main()
{
    //psieve() ;
    ll tc ;
    cin >> tc ;
    ll z=1 ;
    while(tc--)
    {
        cout << solve() << endl ;
    }
}
