#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
    ifstream fin("test2.txt");
    if(!fin){
        cout << "파일을 열 수 없음 \n";
        return 1;
    }
    const int  num = 8;
    int score[num];
    for(int i=0; i<num; i++){
        fin >> score[i];
    }
    int max = score[0];
    int min = score[0];
    for(int i=0; i<num; i++){
        if(max < score[i])
            max = score[i];
        if(min > score[i])
            min = score[i];
        cout << i+1 << "번째 사람의 시험 점수 : " << score[i] << '\n';
    }
    cout << "최고 점수 : " << max << '\n';
    cout << "최저 점수 : " << min << '\n';
    fin.close();
    return 0;
}
