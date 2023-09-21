#include<iostream>
#include<string>
using namespace std;

void concatremove (string s, string t, int k)
{
    if (k >= t.length() + s.length())
        cout << endl << "Yes";

    if (t.length() == s.length() && k < t.length() + s.length())
        cout << endl << "No";
}

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

    concatremove(s,t,k);

}