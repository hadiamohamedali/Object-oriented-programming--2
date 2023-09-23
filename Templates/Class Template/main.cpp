//Class Template
#include <iostream>
using namespace std;
template<class T>
class number{
    T first , second;
public:
    number(T x , T y)
    {
        first = x;
        second = y;
    }
    T max();
};
template<class T>
T number<T> :: max()
{
    return(first > second ? first : second);
}
int main()
{
    number<int> ob1(100 , 200);
    cout <<"Max Integer Value : " <<ob1.max() << endl;
    number<double> ob2(100.11 , 200.22);
    cout << "Max Double Value : " <<ob2.max() << endl;

    return 0;
}
