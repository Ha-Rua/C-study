#include <iostream>
#include <utility>
using namespace std;
int main()
{
    char px[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    pair<char, int> position;
    cin >> position.first >> position.second;
    int dx, dy;
    for (int i = 0; i < 8; i++) {
        if (px[i] == position.first)
            dx = i + 1;
    }
    dy = position.second;
    int res = 0;
    int movex[8] = {1,1,2,2,-1,-1,-2,-2};
    int movey[8] = {2,-2,1,-1,2,-2,1,-1};
    for (int i = 0; i < 8; i++) {
        if(dx + movex[i]<1 || dx + movex[i]>8 || dy + movey[i]<1 || dy + movey[i]>8)
            continue;
        res++;
    }
    cout << res;
    return 0;
}
