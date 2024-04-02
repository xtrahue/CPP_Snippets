// fact-->factorial till 10^6 
using mod=1e7+1 ;//change mod as per requirement

    ll fact[1000001];
    fact[0] = 1;
    fact[1] = 1;
    for (ll i = 2; i < 1000001; i++)
    {
        fact[i] = ((i * fact[i - 1]) % mod);
    }
