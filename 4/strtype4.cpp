# include <iostream>
# include <string>
# include <cstring>

int main(){
    using namespace std;
    char charr[20];
    string str;

    cout << "Length of string in charr before input: " << strlen(charr) << endl;
    cout << "Length of string in str before input: " << str.size() << endl;
    cout << "Enter a line of text:\n";
    cin.getline(charr,20);
    cout << "You Entered: " << charr << endl;
    cout << "Enter a line of text: \n";
    getline(cin, str);
    cout << "you entered: " << str << endl;
    cout << "length of string in charr after input: " << strlen(charr) << endl;
    cout << "length of string in str after input:" << str.size() << endl;

}