#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,m,k,sum=0;
    cin>>n>>m>>k;
    int* arr = new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int count = (m/(k+1))*k;
    count += m%(k+1);
    sum += arr[n-1]*count;
    sum += arr[n-2]*(m-count);
    cout << sum << '\n';
    return 0;
}
