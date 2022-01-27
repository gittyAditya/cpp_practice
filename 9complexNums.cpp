//Print the sum, difference and product of two complex numbers
// by creating a class named 'Complex' with separate functions for each operation
// whose real and imaginary parts are entered by the user.

#include <bits/stdc++.h>
using namespace std;
class Complex{
    int r1,r2,i2,i1,r3,i3;
public:
    int Sum(int r1,int i1,int r2,int i2){
        r3=r1+r2,i3=i1+i2;
        cout << r3 <<" + i";
        return i3;
    }
    int Diff(int r1,int i1,int r2,int i2){
        r3=r1-r2,i3=i1-i2;
        cout << r3 <<" + i";
        return i3;
    }
    int Mul(int r1,int i1,int r2,int i2){
        r3=r1*r2-i1*i2,i3=r1*i2+r2*i1;
        cout << r3 <<" + i";
        return i3;
    }
};
int main(){
    int r1,i1,r2,i2;
    Complex r;
    cin >> r1 >>
        i1 >> r2 >> i2 ;
    cout << "Sum - "<<r.Sum(r1,i1,r2,i2) << endl;
    cout << "Difference - "<<r.Diff(r1,i1,r2,i2)<< endl;
    cout << "Product - "<<r.Mul(r1,i1,r2,i2)<< endl;
    return 0;
}

//OldCode == nothing
//int r3,i3,r4,i4,r5,i5;
//class Complex{
//    int r1,r2,i2,i1;
//public:
//    void Sum(int r1,int i1,int r2,int i2){
//        r3=r1+r2,i3=i1+i2;
//    }
//    void Diff(int r1,int i1,int r2,int i2){
//        r4=r1-r2,i4=i1-i2;
//    }
//    void Mul(int r1,int i1,int r2,int i2){
//        r5=r1*r2-i1*i2,i5=r1*i2+r2*i1;
//    }
//};
//int main(){
//    int r1,i1,r2,i2;
//    Complex c1,c2;
//    cin >> r1 >> i1 >> r2 >> i2 ;
//    c1.Sum(r1,i1,r2,i2);
//    c1.Diff(r1,i1,r2,i2);
//    c1.Mul(r1,i1,r2,i2);
//    cout << "Sum - "<<r3 <<
//         "+i"<<i3<< endl;
//    cout << "Difference - "<<r4 << "+i"<<i4<< endl;
//    cout << "Product - "<<r5 << "+i"<<i5<< endl;
//    return 0;
//}

