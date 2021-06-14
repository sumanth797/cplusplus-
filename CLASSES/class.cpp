#include <iostream>
using namespace std;

class MyClass
{
public:
    void outer_display()
    {
        cout << "In display function from outer class" << endl;
    }

    class MyClassInner
    {
    public:
        void inner_display()
        {
            cout << "In display function from inner class" << endl;
        }
    };
};

int main(void)
{

    MyClass obj;
    obj.outer_display();

    MyClass ::MyClassInner inner_obj;

    inner_obj.inner_display();
}
