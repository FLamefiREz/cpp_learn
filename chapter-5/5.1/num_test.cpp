//
// Created by zhongshunmin on 2022/5/5.
//

#include <iostream>
int main()
{
    using namespace std;
    cout << "Enter the starting cuntdown value:";
    int limit;
    cin >> limit;
    int i;
    for (i = limit; i; i--) {
        cout << "i = " << i << "\n";
    }
    cout << "Done now that i = " << i << "\n";
    return 0;
}