//
// Created by zhongshunmin on 2022/5/6.
//

#include <iostream>
int main()
{
    using namespace std;
    cout << "THe Amazing Accounto will sum and average ";
    cout << "five numbers for you.\n";
    cout << "Please enter five values:\n";
    double number;
    double sum = 0.0;
    for (int i = 1; i <= 5; ++i) {
        cout << "Value " << i << ":";
        cin >> number;
        sum += number;
    }
    cout << "Five exquisite choices indeed! ";
    cout << "They sum to " << sum << endl;
    cout << "and average to " << sum / 5 << ".\n";
    cout << "The Amazing Accouonto bids you adieu!\n";
    return 0;
}