#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
 
#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl      '\n'
#define mod 1000000007
typedef long long int ll;
int main()
{
    faster;
    int n, k;
    cin >> n >> k;
    int res = k / n;
    if(k % n == 0 && res == 2)
    {
        cout << n << endl;
        return 0;
    }
    if(res > 2)
    {
        cout << 0 << endl;
        return 0;
    }
    res = k % n;
    n -= res;
    cout << n << endl;
    return 0;
}