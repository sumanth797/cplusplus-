#include <iostream>
#include <typeinfo>
using namespace std;
class Static
{
public:
    static int count;

public:
    Static()
    {
        count++;
    }
    void check(string object)
    {
        cout << "object length is " <<object[0]<<" Class Name is "<<object.substr(1,object.size())<<" and count is " <<count << "\n";
    }
};
int Static::count = 0;
int main()
{
    system("CLS");
    cout << "count is " << Static::count << "\n";
    Static s1;
    //typeid(s1).name()
    s1.check(typeid(s1).name());
    Static s2;
    s2.check(typeid(s2).name());
    Static s3;
    s3.check(typeid(s3).name());
    return 0;
}