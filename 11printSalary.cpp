//11
//Write a program that would print the information (name, year of joining, salary, address)
//of three employees by creating a class named 'Employee'. The output should be as follows:
//Name    Year of joining        Address
//Robert     1994            64C- WallsStreet
//Sam        2000            68D- WallsStreet
//John       1999            26B- WallsStreet

#include<bits/stdc++.h>
using namespace std;
class Employee{
public:
    string name;
    int yr;
    int sal;
    string addr;
};
int main(){
    Employee e1,e2,e3;
    e1.name="Robert",e1.yr=1994,e1.addr="64C- WallsStreet";
    e2.name="Sam",e2.yr=2000,e2.addr="68D- WallsStreet";
    e3.name="John",e3.yr=1999,e3.addr="26B- WallsStreet";
    cout <<  "Name" << "    " << "Year" << "    " << "Address" << endl;
    cout <<  e1.name << "    " << e1.yr << "    " << e1.addr << endl;
    cout <<  e2.name << "    " << e2.yr << "    " << e2.addr << endl;
    cout <<  e3.name << "    " << e3.yr << "    " << e3.addr << endl;
    return 0;
}
