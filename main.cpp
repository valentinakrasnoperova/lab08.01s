#include <iostream>
#include <string>
#include "func.h"
using namespace std;

string Change(string& s)
{
    size_t pos = 0;
    while ( (pos = s.find('w', pos)) != -1 )
        if (s[pos+1] == 'h' && s[pos + 2] == 'i' && s[pos + 3] == 'l' && s[pos + 4] == 'e')
            s.replace(pos, 5, "**");
    return s;
}

int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    cout << "String contained " << Check(str) << " 'while'" << endl;
    string dest = Change(str);
    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;
    return 0;
}