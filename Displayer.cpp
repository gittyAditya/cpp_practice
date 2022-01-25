//Write a program with a mother class and an inherited daugther class.
// Both of them should have a method void display ()that prints a message (different for mother and daugther).
// In the main define a daughter and call the display() method on it.

#include <bits/stdc++.h>

using namespace std;

class Mother {
public:
    void display(){
        cout << "This is your mom calling.\n";
    }
};

class Daughter : public Mother {
public:
    void display(){
        cout << "This is the daughter not responding.\n";
    }
};


int main (){
    Daughter d;
    cout << d.display() << endl;
    return 0;
}
