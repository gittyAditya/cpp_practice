#include <iostream>

using namespace std;

class Student {
public:
    int age;
    string name;
    bool isMale;
    float cgpa;
    char grade;
    Student(){
        age = 10;
        name = "John";
    }
    Student(int age, string name, bool isMale, float cgpa, char grade){
        this->age = age;
        this->name = name;
        this->isMale = isMale;
        this->cgpa = cgpa;
        this->grade = grade;
    }
    string print(){
        string details = "The age is " + to_string(age) + " and the name is " + name + " gender is " + to_string(isMale);
        return details;
    }
    float getPercentage(int marks, int totalMarks){
        float percentage = (marks/totalMarks)*100;
        cout << percentage;
        return percentage;
    }
};

int main() {

    Student one;
//    cout << "The age is " << one.age << " and the name is " << one.name << " Gender is = " << one.isMale << " CGPA is = "
//         << one.cgpa << " Grade is = " << one.grade << endl;



    Student two(40, "Aditya", true, 6.5, 'C');
//    cout << two.print();
    cout << two.getPercentage(87, 100);
//    cout << "The age is " << two.age << " and the name is " << two.name << endl;
    return 0;
}
