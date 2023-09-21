#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<cstdlib>
using namespace std;

string concatremove (string s, string t, int k)
{
    if (k >= t.length() + s.length())
        return "Yes";
/* 
    if (t.length() == s.length() && k < t.length() + s.length())
        return "No"; */

    int concat = 0, remove = 0, comands = 0;

    while (strncmp(s.c_str(), t.c_str(), min(t.length(),s.length()) - concat) != 0)
        concat++;

    remove = s.length() - t.length() + concat ;

    comands = remove + t.length() - (s.length() - remove) ;

    bool extra_comands = (k - comands > 0 && (k - comands)%2 == 0);

    if (comands == k || extra_comands )
        return "Yes";

    else
        return "No";
}