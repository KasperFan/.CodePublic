#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long a, b, n, temp, ans=0;
    cin >> a >> b >> n;
    cout << a << b << n << endl;
    if (n > 5 * a + 2 * b)
    {
        temp = n / 5 * a + 2 * b;
        ans += temp * 7;
        cout << "ans += temp * 7" << endl;
        n -= temp * (5 * a + 2 * b);
    }
    if (n > 5 * a){
        temp = (n - 5 * a) / b;
        ans += 5 + temp;
        cout << "ans += 5 + temp" << endl;
        n -= 5 * a + temp * b;
    }
    else if (n <= 5 * a){
        temp = n / a;
        ans += temp;
        cout << "ans += temp" << endl;
        n -= a * temp;
    }
    if (n) ans++;
    cout << ans << endl;
    return 0;
}
