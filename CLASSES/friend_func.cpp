#include <iostream>
using namespace std;
class Access_2;
class Access_1
{
    int number_1;

public:
    void set(int num)
    {
        number_1 = num;
    }
    friend void get(Access_1, Access_2);
};
class Access_2
{
    int number_2;

public:
    void set(int num)
    {
        number_2 = num;
    }
    friend void get(Access_1, Access_2);
};
void get(Access_1 no_1, Access_2 no_2)
{
    cout << no_1.number_1 * no_2.number_2 << "\n";
}
int main()
{
    system("CLS");
    Access_1 now_1;
    now_1.set(10);
    Access_2 now_2;
    now_2.set(20);
    get(now_1, now_2);
    return 0;
}