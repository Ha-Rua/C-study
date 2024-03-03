#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <string>
using namespace std;
class Car {
    private:
        int num;
        double gas;
        char* pName;
    public:
        Car(char* pN, int n, double g);
        ~Car();
        void show();
};
Car::Car(char* pN, int n, double g) {
    pName = new char[strlen(pN) + 1];
    strcpy(pName, pN);
    num = n;
    gas = g;
    cout << pName << "(번호 : " << num << ", 연료량 : " << gas << ") 생산 완료"  << '\n';
}
Car::~Car() {
    cout << pName << " 소멸 \n";
    delete[] pName;
}
void Car::show() {
    cout << "이름 : " << pName << ", 번호 : " << num << ", 연료량 : " << gas << '\n';
}
int main() {
    Car benz("벤츠", 1234, 25.5);
    benz.show();
    return 0;
}