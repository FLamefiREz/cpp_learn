//
// Created by zhongshunmin on 2022/6/8.
//

#include "iostream"
#include "cctype"
int main(){
    using namespace std;
    cout << "Enter text for analysis, and type @"
            " to terminate input.\n";
    char ch;
    int whittespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others =0;

    cin.get(ch);
    while (ch != '@'){
        if (isalpha(ch))
            chars++;
        else if (isdigit(ch))
            digits++;
        else if (ispunct(ch))
            punct++;
        else if (isspace(ch))
            whittespace++;
        else
            others++;
        cin.get(ch);
    }
    cout << chars << " letters, "
         << whittespace << " whitespace, "
         << digits << " digits, "
         << punct << " punctuations, "
         << others << " others.\n";
    return 0;
}