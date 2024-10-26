#include <bits/stdc++.h>

using namespace std;

class Student
{
private:
    string name;
    int age;
    string dept;

public:
    void setName(string value)
    {
        name = value;
    }

    void getName()
    {
        cout << name << endl;
    }

    void setAge(int value)
    {
        age = value;
    }

    void getAge()
    {
        cout << age << endl;
    }

    void setDept(string value)
    {
        dept = value;
    }

    void getDept()
    {
        cout << dept << endl;
    }
};

int main()
{
    string input_name;
    int input_age;
    string input_dept;

    Student st = Student();

    cout << "Enter your name" << endl;
    cin >> input_name;

    st.setName(input_name);

    cout << "Enter your age" << endl;
    cin >> input_age;

    st.setAge(input_age);

    cout << "Enter your dept" << endl;
    cin >> input_dept;

    st.setDept(input_dept);

    st.getName();
    st.getAge();
    st.getDept();

    return 0;
}