//02.Polymorphism
//fix in 01.Polymorphism
#include <iostream>
using namespace std;
class CPolygon{
protected:
    int width , height;
public:
    void set_values(int x , int y)
    {
        width = x;
        height = y;
    }
    virtual int area(void)
    {
        return(0);
    }
};
class CRectangle : public CPolygon{
public:
    int area(void)
    {
        return(width * height);
    }
};
class CTriangle : public CPolygon{
public:
    int area(void)
    {
        return(width * height / 2);
    }
};
int main()
{
    CRectangle rect;
    CTriangle trgl;
    CPolygon poly;
    CPolygon *p1 , *p2 , *p3;
    p1 = &rect;
    p2 = &trgl;
    p3 = &poly;
    p1 -> set_values(4 , 5);
    p2 -> set_values(4 , 5);
    p3 -> set_values(4 , 5);
    cout << p1 -> area() << endl; // = 20
    cout << p2 -> area() << endl; // = 10
    cout << p3 -> area() << endl; // = 0

    return 0;
}
