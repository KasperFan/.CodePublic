#include <bits/stdc++.h>
using namespace std;
const int N = 6, INF = 0x3f3f3f3f;
char g[N][N], backup[N][N];
int dx[5] = {0, -1, 0, 1, 0}, dy[5] = {0, 0, 1, 0, -1};
int ans; // 最少的操作步数

// 按下开关
void turn(int x, int y)
{
    // 枚举该点（x，y）周围四个方向和它自身
    for (int i = 0; i < 5; i++)
    {
        int a = x + dx[i]; // 偏移后的横坐标
        int b = y + dy[i]; // 偏移后的纵坐标
        // 偏移后的点（a，b）越界了
        if (a < 0 || a >= 5 || b < 0 || b >= 5)
            continue;
        // 0变1  1变0
        g[a][b] ^= 1;
    }
}

int work()
{
    // 枚举第0行的32种“操作”
    for (int op = 0; op < 1 << 5; op++)
    {
        int res = 0; // 对于
        memcpy(backup, g, sizeof g);
        for (int j = 0; j < 5; j++)
        {
            if (op >> j & 1)
            {
                res++;
                turn(0, j);
            }
        }

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (g[i][j] == '0')
                {
                    res++;
                    turn(i + 1, j);
                }
            }
        }
        bool is_successful = true;
        for (int j = 0; j < 5; j++)
        {
            if(g[4][j]='0'){
                is_successful = false;
                break;
            }
        }
        //如果全部点亮
        if (is_successful)
            ans = min(ans, res);//枚举完这32种“操作”
        memcpy(g, backup, sizeof g);
    }
    if (ans>6)
        return -1;
    else
        return ans;
}

int main(int argc, char const *argv[])
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        ans = INF;
        for (int i = 0; i < 5; i++)
            scanf("%s", g[i]);
        printf("%d\n", work());
    }

    return 0;
}
