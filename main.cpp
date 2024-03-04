#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int** array = new int*[n];
    for(int i=0;i<n;i++)
        array[i] = new int[m];
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++)
            cin>>array[i][j];
    }
    int target=0;
    for (int i=0;i<n;i++)
    {
        sort(array[i],array[i]+m);
        if(array[i][0]>target)
            target=array[i][0];
    }
    cout << target;
    return 0;
}
