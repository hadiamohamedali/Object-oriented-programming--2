// Polymorphism --> Class Abstract
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
    virtual int area(void) = 0; // Pure Virtual Function
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
   // CPolygon poly; -> False
    CPolygon *p1 , *p2;
    p1 = &rect;
    p2 = &trgl;
    p1 ->set_values(10 , 30);
    p2 ->set_values(4 , 5);
    cout << p1 ->area() << endl; // -> 300
    cout << p2 ->area() << endl; // -> 10

    return 0;
}
