//1234

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
class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int main() {

    Student one;
    cout << "The age is " << one.age << " and the name is " << one.name << " Gender is = " << one.isMale << " CGPA is = "
         << one.cgpa << " Grade is = " << one.grade << endl;

    TreeNode tree;
    cout << " this is tree = " << tree.val << endl;

    Student two(40, "Aditya", true, 6.5, 'C');
//    cout << two.print();
    cout << two.getPercentage(87, 100);
//    cout << "The age is " << two.age << " and the name is " << two.name << endl;
    return 0;
}
