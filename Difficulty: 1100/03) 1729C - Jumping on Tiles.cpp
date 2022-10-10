#include<bits/stdc++.h>
#define ll long long
#define pll pair<ll, ll>
using namespace std;



int main() {
    int tc ;
    cin >> tc;
    while(tc--) {
        string s ;
        cin >> s ;
        ll n = s.size() ;
        set<char> st ;
        vector<ll>v[28] ;

        for(int i=0; i<s.size(); i++) {
            st.insert(s[i]) ;
            ll cq = int(s[i]-'a') ;
            v[cq].push_back(i+1) ;
        }

        vector<ll>ans ;
        if(s[0]<s[n-1]) {
            ll p=0 ;

            for(auto it: st) {
                if(it==s[0] && p==0)
                    p=1;
                if(it==s[n-1] && p==1)
                    p=2;
                if(it!=s[n-1] && p==2)
                    break;
                if(p) {
                    for(auto jt: v[it-'a'])
                        ans.push_back(jt) ;
                }
            }
        }
        else {
            ll p=0 ;
            set<char>::reverse_iterator it ;
            for(it=st.rbegin(); it!=st.rend(); it++) {
                //cout << *it << " " ;
                if(*it==s[0] && p==0)
                    p=1;
                if(*it==s[n-1] && p==1)
                    p=2;
                if(*it!=s[n-1] && p==2)
                    break;
                if(p) {
                    for(auto jt: v[*it-'a']) {
                        ans.push_back(jt) ;
                        //cout << jt << " " ;
                    }
                }
                //cout << endl ;
            }
        }

        cout << abs(int(s[0]-s[n-1])) << " " << ans.size() << endl ;
        for(auto it: ans)
            cout << it << " " ;
        cout << endl ;
    }
}
