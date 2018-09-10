#include <iostream>
#include <string>
using namespace std;

string myname = "Austin George";

void message(string name) {
    cout << "My name is " << name << endl;
}

int main(void) {
    message(myname);
}

