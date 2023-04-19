#include <bits/stdc++.h>
// #include <windows.h>

using namespace std;

string name = "LOVE";
int cnt = 0;
void heart(float tx, float ty, float sx, float sy, float ex, float ey, char c)
{
    for (float y = sy; y >= ey; y += ty)
    {
        for (float x = sx; x <= ex; x += tx)
        {
            if (x * x + pow(5.0 * y / 4.0 - sqrt(fabs(x)), 2) - 1 <= 0.0)
            {
                cout << name[cnt++];
                cnt %= 4;
            }
            else
                cout <<' ';
        }
        cout << endl;
    }
}

int main()
{
    system("color FC");
    heart(0.05, -0.1, -1.2, 1.3, 1.2, -1.1, '@');
    return 0;
}
