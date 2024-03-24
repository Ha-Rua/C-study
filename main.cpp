#include <iostream>
using namespace std;
inline void turn_left(int& d) {d = (d + 3) % 4;}
int main()
{
    int map[50][50];
    int check[50][50];
    int n, m;
    cin >> n >> m;
    int a,b,d;
    cin >> a >> b >> d;
    check[a][b] = 1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
            cin >> map[i][j];
    }
    int dx[4] = {-1,0,1,0};
    int dy[4] = {0,1,0,-1};
    int res = 1;
    while(true)
    {
        int turn_cnt=0;
        turn_left(d);
        int nx = a + dx[d];
        int ny = b + dy[d];
        if(map[nx][ny] == 0 && check[nx][ny] == 0)
        {
            check[nx][ny] = 1;
            a = nx;
            b = ny;
            res++;
            turn_cnt = 0;
            continue;
        }
        else turn_cnt++;
        if(turn_cnt == 4)
        {
            nx = a - dx[d];
            ny = b - dy[d];
            if(map[nx][ny] == 0)
            {
                a = nx;
                b = ny;
            }
            else break;
            turn_cnt = 0;
        }
    }
    cout << res;
    return 0;
}
