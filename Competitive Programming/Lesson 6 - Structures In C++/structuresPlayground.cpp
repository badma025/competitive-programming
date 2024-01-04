#include <iostream>

using namespace std;

int main()
{
    struct Person {
       string name;
       int age;
    } Alim;

    Alim.name = "Alim";
    Alim.age = 14;

    cout << Alim.name << " " << Alim.age;
}
