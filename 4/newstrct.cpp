// newstrct.cpp  -- using new with a structure

# include <iostream>
struct inflatable
{
    /* data */
    char name[20];
    float volume;
    double price;
};
int main(){
    using namespace std;
    inflatable * ps = new inflatable;
    cout << "enter name of inflatable item: ";
    cin.get(ps->name, 20);
    cout << "enter volume of inflatable item: ";
    cin >> (*ps).volume;
    cout << " enter price: $";
    cin >> ps->price;

    cout << "Name: " << (*ps).name << endl;
    cout << "Volume: " << (*ps).volume << endl;
    cout << "Price: $" << (*ps).price << endl;
}
