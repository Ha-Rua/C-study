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
        Car(const Car& c);
        Car& operator=(const Car& c);
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
Car::Car(const Car& c) {
    cout<< c.pName << "으로 초기화 \n";
    pName = new char[strlen(c.pName) + strlen("의 복사본 1") + 1];
    strcpy(pName, c.pName);
    strcat(pName, "의 복사본 1");
    num = c.num;
    gas = c.gas;
}
Car& Car::operator=(const Car& c){
    cout<< pName << "에 " << c.pName << "을 대입 \n";
    if (this != &c) {
        delete[] pName;
        pName = new char[strlen(c.pName) + strlen("의 복사본 2") + 1];
        strcpy(pName, c.pName);
        strcat(pName, "의 복사본 2");
        num = c.num;
        gas = c.gas;
    }
}

Car::~Car() {
    cout << pName << " 소멸 \n";
    delete[] pName;
}
void Car::show() {
    cout << "이름 : " << pName << ", 번호 : " << num << ", 연료량 : " << gas << '\n';
}
int main() {
    Car benz("benz", 1234, 25.5);
    benz.show();
    Car benz2 = benz;
    benz2.show();
    Car benz3("benz3",0,0);
    benz3 = benz;
    benz3.show();
    return 0;
}
