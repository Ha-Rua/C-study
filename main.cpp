#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int result=0,cur;
    for(int i=0;i<n;i++)
    {
        int min = 10001;
        for(int j=0;j<m;j++){
            cin>>cur;
            if(cur<min)
                min=cur;
        }
        if (min>result)
            result=min;
    }
    cout<<result<<'\n';
    return 0;
}
