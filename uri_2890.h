#include <bits/stdc++.h>

using namespace std;

#define mod 1000007

typedef long long ll;
ll mdc(ll a, ll b, ll *x, ll *y)
{

    ll xx, yy, d;

    if (b == 0LL)
    {

        *x = 1LL;
        *y = 0LL;
        return a;

    }

    d = mdc(b, a % b, &xx, &yy);
    *x = yy;
    *y = xx - ((a / b) * yy);

    return d;

}

ll inverso(ll a)
{

    ll x, y, d;
    d = mdc(a, mod, &x, &y);
    if (x < 0)
        x = x + mod;

    return x;

}

int main()
{
    int n;
    while(cin >>n)
    {
        if(n == 0)
        {
            break;
        }
        else
        {
            long long int pow2 = 1;

            for(int i =0; i<2;++i)
            {
                pow2 = (pow2 * n)%mod;
            }
            long long int pow4 = 1;

            for(int i =0; i<4;++i)
            {
                pow4 = (pow4 * n)%mod;
            }
            long long int result = 11 * pow2 + pow4;
            result = result%mod;

            result = result* inverso(12)%mod;
            printf("%lld\n", result);

        }
    }
}
