//8.Print the average of three numbers entered by the user by creating a class named 'Average'
// having a function to calculate and print the average
// without creating any object of the Average class.

#include <iostream>
using namespace std;
class Average {
public:
    float average(float one, float two, float three) {
        return (one + two + three) / 3;
    }
};
class SmolAverage : public Average {
public:
    SmolAverage(){
        float one, two, three;
        average(one, two, three);
    }
};
int main() {
    float one, two, three;
    SmolAverage avg;
    cout << "Enter the three numbers: \n"; cin >> one >> two >> three;
    cout << "Average = \n" << avg.average(one, two, three);
}
