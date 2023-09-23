#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
//Structure With Classes
struct exam
{
  float first;
  float second;
  float final;

void print()
{
    cout << "....Struct Created...." << endl;
}
};
class subject
{
private:
    char name[100];
    exam EX;
public:
    subject() // Empty Constructor
    {
      strcpy(name , "NO Name");
      EX = {0 , 0 , 0};
    }
    subject(char n[], float fa , float s , float fi)// parameterized Constructor
    {
      cout << "....Object Created...." << endl;
      EX.print();
      strcpy(name , n);
      EX.first = fa;
      EX.second = s;
      EX.final = fi;
    }
    ~subject() //Destructor
    {
        cout << "....Object Deleted...." << endl;
    }
    float total()
    {
        return EX.first + EX.second + EX.final;
    }
    void print()
    {
      cout << "The Subject : " << name << endl;
      cout << "First Exam Degree = " << EX.first << endl;
      cout << "Second Exam Degree = " << EX.second << endl;
      cout << "Final Exam Degree = " << EX.final << endl;
      cout << "The Total = " << total() << endl;
      }
};
int main()
{
    subject sub("Computer Programming" , 25 , 140 , 100);
    sub.print();
    return 0;
}
