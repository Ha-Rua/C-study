#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int result=0;
    while(n!=1){
        if(n%k==0)
            n/=k;
        else
            n--;
        result++;
    }
    cout<<result<<'\n';
    return 0;
}
