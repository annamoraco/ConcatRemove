#include<iostream>
#include "concatremove.cpp"
using namespace std;

int main()
{
    string s = "", t = "";
    int k = 0;

    cout << endl << "Type s: ";
    cin >> s;
    cout << endl << "Type t: ";
    cin >> t;
    cout << endl << "Type k: ";
    cin >> k;

    cout << concatremove(s,t,k);

}