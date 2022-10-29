#include <bits/stdc++.h>
using namespace std;
#define int long long
#define floop(i, n) for (int i = 0; i < n; i++)
#define bloop(i, n) for (int i = n - 1; i >= 0; i--)
#define endl "\n"

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1 ;
    // cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        int sum = 0;
        floop(i, n)
        {
            cin >> a[i];
            sum += a[i];
        }

        int tempSum = sum;
        int subarraySum = -1e11;
        int l = 0, r = n - 1;
        if (a[l] < a[r])
        {
            tempSum -= a[l];
            l++;
        }
        else
        {
            tempSum -= a[r];
            r--;
        }
        subarraySum = max(subarraySum, tempSum);
        if (subarraySum >= sum)
        {
            cout << "NO" << endl;
            continue;
        }

        bool flag = 0;
        while (l <= r)
        {
            if (a[l] < a[r])
            {
                tempSum -= a[l];
                l++;
                subarraySum = max(subarraySum, tempSum);
            }
            else
            {
                tempSum -= a[r];
                r--;
                subarraySum = max(subarraySum, tempSum);
            }

            if (subarraySum >= sum)
            {
                cout << "NO" << endl;
                flag = 1;
                break;
            }
        }

        if (!flag)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}