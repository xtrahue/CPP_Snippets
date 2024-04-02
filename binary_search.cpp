//bs-->binary Search...upper and lower bound



// Max element that is not greater than key
// last index.....upper_bound(stl)
ll lower_bs(ll arr[], ll n, ll key)
{
    ll l = -1; // arr[l]<=key
    ll r = n;  // arr[r]>key
    while (r > l + 1)
    {
        ll m = (l + r) / 2;
        if (arr[m] <= key)
        {
            l = m;
        }
        else
        {
            r = m;
        }
    }

    return (l + 1);
}

// Min element that is not smaller than key
// first index...lower_bound(stl)
ll higher_bs(ll arr[], ll n, ll key)
{
    ll l = -1; // arr[l]<key
    ll r = n;  // arr[r]>=key
    while (r > l + 1)
    {
        ll m = (l + r) / 2;
        if (arr[m] < key)
        {
            l = m;
        }
        else
        {
            r = m;
        }
    }

    return (r + 1);
}
