// 声明和初始化指针

#include<iostream>
int main(){
    
    using namespace std;

    int higgens = 5;
    int * pt = &higgens;

    cout << "value of higgens = " << higgens << "; Address of higgens =" << &higgens << endl;
    cout << "value of pt = " << *pt << "; Address of pt = " << pt << endl;

    
}