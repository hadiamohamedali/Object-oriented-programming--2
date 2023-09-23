//Function Templates - Function Templates with Multiple Parameters
#include <iostream>
using namespace std;
//Template in One Parameter
template <class t>
t sum1(t x , t y)
{
    return x + y;
}
//Template In Multiple Parameter
template<class t1 , class t2>
//First Parameter --> data Type = Integer --> t1
t1 sum2(t1 a , t2 b)
{
    return a + b;
}
template<class t1 , class t2>
//Second Parameter --> data Type = double --> t2
t2 sum3(t1 a , t2 b)
{
    return a + b;
}
template<class first , class second>
first smaller(first num1 , second num2)
{
    return(num1 < num2 ? num1 : num2);
}
int main()
{
//Template in One Parameter
    double x1 = 10.1 , y1 = 20.2;
    int x2 = 10 , y2 = 20;
    cout <<"Result.01 = "<<sum1(x1 , y1) << endl;
    cout <<"Result.02 = "<<sum1(x2 , y2) << endl;
cout << "=============================================================" << endl;
//Template In Multiple Parameter
    int a1 = 100 , b1 = 200;
    double a2 = 100.11 , b2 = 200.22;
    cout << "Result.03 = " << sum2(a1 , a2) << endl; // Integer Result --> t1
    cout << "Result.04 = " << sum3(b1 , b2) << endl;// Double Result --> t2
cout << "=============================================================" << endl;
    int num1 = 89; double num2 = 55.6;
    cout << "Small Integer Value : " << smaller(num1 , num2) << endl; //return Integer Value --> First is Integer
    cout << "Small Double Value : " << smaller(num2 , num1) << endl; //return Double Value --> First is Double
    //Another Method
    cout << "Small Double Value : " << smaller<double , int>(num2 , num1) << endl;
    cout << "Small Integer Value : " << smaller<int , double>(num2 , num1) << endl;


    return 0;
}
