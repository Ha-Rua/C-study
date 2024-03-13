#include <iostream>
using namespace std;
class Point
{
    private:
        int x,y;
    public:
        Point(int a=0,int b=0){x=a,y=b;}
        void setX(int a){x=a;}
        void setY(int b){y=b;}
        void show(){cout<<"x : "<<x<<", y : "<<y<<'\n';}
        Point operator++();
        Point operator++(int d);
        Point operator--();
        Point operator--(int d);
        friend Point operator+(Point p1,Point p2);
        friend Point operator-(Point p1,Point p2);
        friend Point operator+(int a,Point p);
        friend Point operator-(int a,Point p);
        friend Point operator+(Point p,int a);
        friend Point operator-(Point p,int a);
};
Point Point::operator++()
{
    x++;
    y++;
    return *this;
}
Point Point::operator++(int d)
{
    Point p = *this;
    x++;
    y++;
    return *this;
}
Point Point::operator--()
{
    x--;
    y--;
    return *this;
}
Point Point::operator--(int d)
{
    Point p = *this;
    x--;
    y--;
    return *this;
}
Point operator+(Point p1,Point p2)
{
    return Point(p1.x+p2.x,p1.y+p2.y);
}
Point operator-(Point p1,Point p2)
{
    return Point(p1.x-p2.x,p1.y-p2.y);
}
Point operator+(int a,Point p)
{
    return Point(a+p.x,a+p.y);
}
Point operator-(int a,Point p)
{
    return Point(a-p.x,a-p.y);
}
Point operator+(Point p,int a)
{
    return Point(p.x+a,p.y+a);
}
Point operator-(Point p,int a)
{
    return Point(p.x-a,p.y-a);
}
int main()
{
    Point p1,p2;
    p1.setX(10);
    p1.setY(20);
    p2.setX(30);
    p2.setY(40);
    p1.show();
    p2.show();
    p1++;
    p1.show();
    p1--;
    p1.show();
    ++p2;
    p2.show();
    --p2;
    p2.show();
    Point p3 = p1+p2;
    p3.show();
    p3 = p3+1;
    p3.show();
    p3 = p3-2;
    p3.show();
    p3 = 3+p3;
    p3.show();
    p3 = 3-p3;
    p3.show();
    return 0;
}
