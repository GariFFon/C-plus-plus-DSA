#include <iostream>
#include <string>
using namespace std;

int main2() {
    string name;
    cout << "Enter the name of the person to whom you wish to say welcome:" << endl;
    getline(cin, name);
    cout << name << ", we welcome you!!" << endl;

    return 0;
}



