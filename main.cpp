#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Human{ // базовый класс
public:
    string name;
    int age;
};

class Student: public Human{ // дочерний класс
public:
    int group;
    void slogan1()
    {
        cout << "Мама я студент " << endl;
    }
};

class Teacher:public Human{
public:
    string subject;
};

class otherStudent : public Student{
public:
    void slogan2()
    {
        cout << "Мама я долбаеб " << endl;
    }
};

int main ()
{
    Student st1;
    st1.name = "bak";
    otherStudent st2;
    st2.slogan2();
    return (1);
}
