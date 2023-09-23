//Polymorphism + Abstract Class
#include <iostream>
using namespace std;
class Polygon{ //--> Abstract Class
protected:
    int width , height;
public:
    void set_values(int x , int y)
    {
        width = x;
        height = y;
    }
    virtual int area(void) = 0; // Pure Virtual Function
    void Print_Area()
    {
      cout << this->area() << endl; //Polymorphism
    }
};
class Triangle : public Polygon{
public:
    int area(void)
    {
        return(width * height / 2);
    }

};
class CRectangle : public Polygon{
public:
    int area(void)
    {
        return(width * height);
    }

};
int main()
{
   Triangle trgl;
   CRectangle rect;
   Polygon *p1 , *p2;
   p1 = &trgl; // early binding
   p2 = &rect;
   p1->set_values(10 , 20);
   p2->set_values(20 , 40);
   cout << "Triangle Area = "; p1->Print_Area(); //100
   cout << "Rectangle Area = ";  p2->Print_Area();//800
   Polygon *ptr[2] = {&rect , &trgl};
   for(int i = 0; i < 2; i++)
   {
       ptr[i]->area(); //late binding
       ptr[i]->Print_Area();
   }
   //ptr[0] = 100 --> Rectangle



    return 0;
}
