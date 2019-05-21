#include "functions.h"

int main() {
    string p;
    cout << "substring: ";
    getline(cin, p);
    string s;
    cout << endl << "string: ";
    getline(cin, s);
    cout << endl;
    string out;
    string check = "-1";
    if ((s.length()==p.length())&&(min_cyclic_shift(s)==min_cyclic_shift(p))) {
        out = KMP(s+s,p);
        out.pop_back();
        cout << out << endl;

    } else {
        cout << -1 << endl;
    }

    return 0;
}
