#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<< "1~9 사이의 숫자 입력 : \n";
    cin>>num;
    try{
        if(num<=0)
            throw "0 이하의 수 입력됨";
        if(num>=10)
            throw "10 이상의 수 입력됨";
        cout << num << "은 1~9 사이의 숫자입니다." << '\n';
    }
    catch(const char* err){
        cout << "에러 : " << err << '\n';
        return 1;
    }
    return 0;
}
