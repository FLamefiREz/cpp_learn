//
// Created by zhongshunmin on 2022/4/27.
//

#include <iostream>
int main()
{
    using namespace std;
    int auks, bats, coots;

    auks = 19.99 + 11.99;

    bats = (int) 19.99 + (int) 11.99;
    coots = int (19.99) + int (11.99);
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots << endl;

    char ch = 'Z';
    cout << "The code fot " << ch << " is ";
    cout << int(ch) << endl;
    cout << "Yes, the code is ";
    cout << static_cast<int>(ch) << endl;
    return 0;
}