// mixtypes.cpp -- some type combinations
# include <iostream>

struct antarctica_years_end
{
    /* data */
    int year;
};

int main()
{
    using namespace std;

    antarctica_years_end s01, s02, s03;     // 附元素
    s01.year = 1998;   // 给s01赋值
    antarctica_years_end * pa = &s02;    // 将s02的指针附给pa
    pa ->year = 1999;  // 给pa指向的地址赋值
    antarctica_years_end trio[3];  // 创建数组结构
    trio[0].year = 2003;

    cout << trio->year << endl;
    // create a const for struct and get value of s01, s02, s03
    const antarctica_years_end * arp[3] = {&s01, &s02, &s03};
    cout << arp[1]->year << endl;
    const antarctica_years_end ** ppa = arp;
    auto ppb = arp;
    // else use
    // const antarctica_years_end ** ppb = arp;
    cout << (*ppa)->year << endl;
    cout << (*(ppb+1))-> year << endl;
    

    return 0;


}
