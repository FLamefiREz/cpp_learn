//
// Created by zhongshunmin on 2022/4/28.
//
#include <iostream>
int main()
{
    using namespace std;
    cout << "What year was your house built?\n";
    int year;
    //cin >> year;
    (cin >> year).get();
    cout <<"What is its street adress?\n";
    char address[80];
    cin.getline(address,80);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";
    return 0;
}