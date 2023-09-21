#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

void concatremove (string s, string t, int k)
{
    if (k >= t.length() + s.length())
        {
            cout << endl << "Yes";
            return;
        }

    if (t.length() == s.length() && k < t.length() + s.length())
        {
            cout << endl << "No";
            return;
        }

    int concat = 0, remove = 0, comands = 0;

    if (s.length() != t.length())
    {

        while (strncmp(s.c_str(), t.c_str(), min(t.length(),s.length()) - concat) != 0)
            concat++;

        remove = s.length() - t.length() + concat ;

        comands = remove + t.length() - (s.length() - remove) ;

    }

    bool extra_comands = (k - comands > 0 && (k - comands)%2 == 0);

    if (comands == k || extra_comands )
        {
            cout << endl << "Yes";
            return;
        }

    else
        {
            cout << endl << "No";
            return;
        }
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