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
    if( (s.length() == 0) || (p.length() == 0) || (s.length()<p.length()) ){
      cout<<-1;
        return 0;
    }
    out = KMP(s,p);
    if (out == check){
        cout<<out<<endl;
        return 0;
    }
    out.pop_back();
    cout<<out<<endl;
    return 0;
}
