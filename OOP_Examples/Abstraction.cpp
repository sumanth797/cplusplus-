//Abstraction
#include <iostream>
using namespace std;
class AbstractionExample
{
private:
    /* By making these data members private, I have
    * hidden them from outside world.
    * These data members are not accessible outside
    * the class. The only way to set and get their
    * values is through the public functions.
    */
    string Name;
    int Number;

public:
    void set(string name, int number)
    {
        Name = name;
        Number = number;
    }
    void get()
    {
        cout << "Name is " << Name << "\n"
             << "Number is " << Number << "\n";
    }
};
int main()
{
    system("CLS");
    AbstractionExample abstract_object;
    abstract_object.set("Sum", 297);
    abstract_object.get();
    return 0;
}