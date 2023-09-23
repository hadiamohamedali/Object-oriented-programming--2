//Template Specialization
#include <iostream>
using namespace std;
template<class T>
class A_char{
public:
    A_char(T x)
    {
        cout << x << " is Not Character..." << endl;
    }
};
template<> //Template Specialization
class A_char<char>
{
public:
    A_char(char x)
    {
       cout << x << " is A Character..." << endl;
    }
};
int main()
{
   A_char<int>ob1(7);
   A_char<double>ob2(7.7);
   A_char<char>ob3('A');
    return 0;
}
