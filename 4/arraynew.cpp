// arraynew.cpp -- using the new operator for array

#include<iostream>
int main(){
    using namespace std;
    double * p3 = new double [3];
    p3[0] = 0.2;
    p3[1] = 0.3;
    p3[2] = 0.5;


    cout << "P3[0]: " << p3[0] << "; address of p3[0]: " <<  p3 << endl;
    cout << "P3[1]: " << p3[1] << "; address of p3[1]: " <<  p3 << endl;

    p3 = p3 + 1;
    cout << "now P3[0]: " << p3[0] << "; p3[1] : " <<  p3[1] << endl;

    p3 = p3 - 1;
    cout << "now P3[0]: " << p3[0] << "; p3[1] : " <<  p3[1] << endl;
    
    delete [] p3;
    return 0;


} 