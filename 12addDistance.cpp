//12.Add two distances in inch-feet by creating a class named 'AddDistance'.
//
#include <bits/stdc++.h>

using namespace std;

class AddDistance {
public:
    float feet;
    float inches;
    AddDistance(float f, float i){
        float feet = f;
        float inches = i;

    }
};

int main(){
    float f, i;
    AddDistance dist1(f, i);
    AddDistance dist2(f, i);
    cout << "For distance 1, enter feet: \n"; cin >> dist1.feet;
    cout << "For distance 1, enter inches: \n"; cin >> dist1.inches;
    cout << "For distance 2, enter feet: \n"; cin >> dist2.feet;
    cout << "For distance 2, enter inches: \n"; cin >> dist2.inches;

    cout << "Addition of two distance is : " << dist1.feet + dist2.feet + (dist1.inches/12) + (dist2.inches/12) << "feet\n";

}