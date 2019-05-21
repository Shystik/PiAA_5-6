#include <iostream>
#include <vector>
#include <cassert>
#include <string>

using namespace std;

vector<int> pref(const string& pattern){
	vector<int> pf (pattern.length());

	pf[0] = 0;
	for (int k = 0, i = 1; i < pattern.length(); ++i) 
	{
		while ((k > 0) && (pattern[i] != pattern[k]))
			k = pf[k-1];

		if (pattern[i] == pattern[k])
			k++;

		pf[i] = k;
	}
    return pf;
}

string KMP(const string& S, const string& pattern) 
{
    string out;
    string buf;
    vector<int> pf = pref(pattern);
	for (int k = 0, i = 0; i < S.length(); ++i) 
	{
		while ((k > 0) && (pattern[k] != S[i]))
			k = pf[k-1];

		if (pattern[k] == S[i])
			k++;

		if (k == pattern.length()){
			buf = to_string(i - pattern.length() + 1);
            out = out + buf;
            out = out + ",";
        }
	}
    if (out.length() == 0){
        int q = -1;
    out = to_string(q);
    }
	return (out);
}

string min_cyclic_shift (string s) {
    s += s;
    int n = (int) s.length();
    int i=0, ans=0;

    while (i < n/2) {
        ans = i;
        int j=i+1, k=i;

        while (j < n && s[k] <= s[j]) {
            if (s[k] < s[j])
                k = i;

            else
                ++k;

            ++j;
        }

        while (i <= k)  i += j - k;
    }

    return s.substr (ans, n/2);
}
