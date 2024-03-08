#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;

#define test ll b; cin >> b; while(b--) {Solve(); nl}
#define FST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define CS ll c = 1, t = 1; cin >> t; while(t--){cout << "Case " << c << ": "; Solve(); c++; nl}

#define f(i, x, n) for(ll i = x; i < n; i++)
#define frev(i, x, n) for(ll i = n; i >= x ; i--)

#define nl cout << "\n";
#define yes cout << "YES";
#define no cout << "NO";

using namespace std;

void Solve()
{
    int n;
    cin >> n;

    int arr[n + 1];

    f(i, 1, n + 1) cin >> arr[i];

    int pref[n + 1];

    pref[1] = 1;

    f(i, 2, n + 1)
    {
        if(arr[i] == arr[i - 1])
        {
            pref[i] = pref[i - 1];
        }

        else  
        {
            pref[i] = pref[i - 1] + 1;
        }
    }

    int q;

    cin >> q;

    while(q--)
    {
        int l, r;
        cin >> l >> r;

        int i = l, j = -1;

        int ll = l, rr = r;

        while(ll <= rr)
        {
            int mid = (ll + rr) / 2;

            if(pref[mid] != pref[i] && arr[mid] != arr[i])
            {
                j = mid;
                break;
            }

            else if(pref[mid] == pref[i])
            {
                ll = mid + 1;
            }

            else  
            {
                rr = mid - 1;
            }
        }

        if(j == -1)
        {
            cout << "-1 -1\n";
        }

        else  
        {
            cout << i << " " << j << "\n";
        }
    }
}


int main()
{
    FST;

    //CS

    test 
    
   // Solve(); 
    
}
