#include <iostream>
using namespace std;
class address
{
public:
    void print()
    {
        cout << this;
    }
};
class student
{
private:
    int id;
public:
    void set_id(int id)
    {
        this -> id = id;
    }
    void print_id()
    {
      cout << "ID is : " << id << endl;
    }

};
int main()
{
    address x , y , z;
    cout << "Address of x : "; x.print(); cout << endl;
    cout << "Address of y : "; y.print(); cout << endl;
    cout << "Address of z : "; z.print(); cout << endl;
cout << "===============================================================================" << endl;
    student st;
    st.set_id(10);
    st.print_id();
    return 0;
}
