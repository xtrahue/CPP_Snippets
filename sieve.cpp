// sieve --> isPrime

    ll M = ;
    vector<bool> isPrime(M + 1, 1);
    vector<ll> hp(M + 1);
    vector<ll> lp(M+1) ;
    
    isPrime[0] = false;
    isPrime[1] = false;

    for (ll i = 2; i <= M; i++)
    {
        if (isPrime[i])
        {
            for (ll j = 2 * i; j <= M; j += i)
            {
                isPrime[j] = false;
                hp[j] = i;
                if(lp[j]==0){
                    lp[j]=i ;
                }
            }
        }
    }
