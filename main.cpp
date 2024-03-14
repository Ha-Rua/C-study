#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    ifstream fin("test0.txt");
    if(!fin){
        cout << "파일을 열 수 없음 \n";
        return 1;
    }
    string str1, str2;
    fin >> str1 >> str2;
    cout << "파일이 기록된 문자열 : " << str1 << ", " << str2;
    fin.close();
    return 0;
}
