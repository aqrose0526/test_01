#include<iostream>

struct inflatable{
    char name[20];
    float volume;
    double price;
};

int main(){
    using namespace std;
    inflatable guest = 
    {
        "Glorious Gloria",
        1.88,
        29.99
    };
    inflatable pal = {
        "Audacious Arthur",
        3.12,
        32.99
    };
    cout << "Expand your guest list with: " << guest.name;
    cout << " and " << pal.name << "!\n";
    cout << "You can have both for $ ";
    cout << guest.price + pal.price << "!\n";
    cout << &pal << endl;     // print address of pal
    cout << "pal.v: " << pal.volume << " and  pal.v + 1: " << pal.volume + 1 << endl;
    cout << "address of pal.v: " << &pal.volume << " and address of pal.v +1 : " << &pal.volume+1 << endl;
    return 0;
}
