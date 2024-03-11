#include <iostream>
using namespace std;
template <class T>
class Array{
    private:
        T data[5];
    public:
        void setdata(int num, T d);
        T getdata(int num);
};
template <class T>
void Array<T>::setdata(int num, T d){
    if(num<0||num>4)
        cout<<"올바른 값이 아닙니다. \n";
    else
        data[num]=d;
}
template <class T>
T Array<T>::getdata(int num){
    if(num<0||num>4)
        cout<<"올바른 값이 아닙니다. \n";
    else
        return data[num];
}
int main(){
    cout<< "int형 배열 생성 \n";
    Array<int> i_array;
    i_array.setdata(0,80);
    i_array.setdata(1,90);
    i_array.setdata(2,100);
    i_array.setdata(3,110);
    i_array.setdata(4,120);
    cout<< "double형 배열 생성 \n";
    for (int i=0;i<5;i++)
        cout<<i_array.getdata(i)<<'\n';
    Array<double> d_array;
    d_array.setdata(0,80.5);
    d_array.setdata(1,90.5);
    d_array.setdata(2,100.5);
    d_array.setdata(3,110.5);
    d_array.setdata(4,120.5);
    for(int i=0;i<5;i++)
        cout<<d_array.getdata(i)<<'\n';
    return 0;
}
