#include <iostream>
#include"ClassDetails.h"
using namespace std;

int main()
{
    char ans;
    Student student1;
    Student student2;

    do {
        student1.Reset();
        student1.inputValue();
        student2 = student2;
        student1.Display();
        student2.Display();
        cout << "Do you want to enter another student details ? Press(y/n)" << endl;
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    Student student3(student2);
    student3.Display();
    cin.get();
    return 0;
}


