#include<bits/stdc++.h>
using namespace std;

typedef long long ll ;

double bscheck(double m, double x, double y) {
    double h1 = sqrt((x*x)-(m*m)) ;
    double h2 = sqrt((y*y)-(m*m)) ;
    return (h1*h2)/(h1+h2) ;
}

int main()
{
    ll tc = 1, z=1 ;
    //cin >> tc ;
    while(tc--) {
        double r ;
        cin >> r ;
        ll s = 0, p = 0 ;
        for(int i=1; s<=r; i++) {
            double x = i ;
            double y = (r-(x*x)-x-1)/(2*x) ;
            if(y==ceil(y) && y>0) {
                p = 1 ;
                cout << ll(x) << " " << ll(y) << endl ;
                break;
            }
            s = (x*x) + (2*x*y) + x + 1 ;
        }

        if(p==0)
            cout << "NO" << endl ;

    }
    return 0;
}
