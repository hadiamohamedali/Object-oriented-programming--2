#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct car
{
    string name;
    string color;
    int model;
    int maxspeed;
};
struct car2 //Follow Method 3
{
    string name2;
    string color2;
    int model2;
    int maxspeed2;
}ob3;
//Struct With Function
struct Distancee //Follow Method 4
{
    int feet;
    float inches;
};
Distancee add_distance(Distancee d1 , Distancee d2)
{
    Distancee result;
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;
    return result;
}

int main()
{
    //Method 1
    car ob1;
    ob1.name = "Kia";
    ob1.color = "Black";
    ob1.maxspeed = 236;
    ob1.model = 2023;
    cout << "Name : " << ob1.name << endl;
    cout << "Color : " << ob1.color << endl;
    cout << "Maxspeed : " << ob1.maxspeed << endl;
    cout << "Model : " << ob1.model << endl;
cout << "========================================================" << endl;
    //Method 2
    car ob2 = {"B.M.W" , "Blue" , 2025 , 256};
    cout << "Name : " << ob2.name << endl;
    cout << "Color : " << ob2.color << endl;
    cout << "Maxspeed : " << ob2.maxspeed << endl;
    cout << "Model : " << ob2.model << endl;
cout << "========================================================" << endl;

    if(ob1.maxspeed > ob2.maxspeed)
    {
       cout << "Kia is Faster Than B.M.W" << endl;
    }
    else if(ob1.maxspeed < ob2.maxspeed)
    {
       cout << "B.M.W is Faster Than Kia" << endl;
    }
    else
    {
      cout << "...The Both Are Fast..." << endl;
    }
cout << "<<<======================================================>>>" << endl;
    //Method 3
    ob3 = {"Marcieds" , "White" , 2013 , 145};
    cout << "Name : " << ob3.name2 << endl;
    cout << "Color : " << ob3.color2 << endl;
    cout << "Maxspeed : " << ob3.maxspeed2 << endl;
    cout << "Model : " << ob3.model2 << endl;
cout << "<<=======================================================>>>" << endl;
cout << "------------------------------------------------------------" << endl;
Distancee x , y , z;
//x ==> 1
//y ==> 2
cout << "Value Feet1 = "; cin >> x.feet; cout << endl;
cout << "Value Feet2 = "; cin >> y.feet; cout << endl;
cout << "Value inches1 = "; cin >> x.inches; cout << endl;
cout << "Value inches2 = "; cin >> y.inches; cout << endl;
z = add_distance(x , y);
cout << "z.feet = " << z.feet << "\tz.inches = " << z.inches << endl;
















    return 0;

}




