// 复习题
#include<iostream>
# include<array>
/*
using namespace std;

int main(){
    // part 1
    char actor[30];
    short betsie[100];
    float chuck[13];
    long double dipsea[64];

    array<char, 30> actor;
    array<short, 100> betsie;
}
*/

int main(){
    using namespace std;
    char first_name[10], last_name[20];
    int age;
    array<char, 6> zimu = {'A','B','C','D','E','F'};
    cout << "what is your first name? ";
    cin >> first_name;
    cin.getline(last_name, 20);
    cout << "what is your last name? ";
    cin >> last_name;
    cout << "what letter do you deserve? ";
    cin >> zimu[0];

    cout << "what are you age? ";
    cin >> age;

    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << zimu[1] << endl;
    cout << "Age: " << age;

}