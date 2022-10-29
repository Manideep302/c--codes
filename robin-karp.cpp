// string matching algorithm
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
bool chmatch(string s1, string s2)
{
    cout << s1 << endl;
    int n = s2.length();
    for (int i = 0; i < n; i++)
    {
        if (s1[i] != s2[i])
            return false;
    }
    return true;
}
int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;
    int count = 0;
    int m = s2.length();
    int n = s1.length();
    long long int h = pow(26, m - 1);
    long long int rs = 0, s = 0;
    for (int i = 0; i < m; i++)
    {
        rs += pow(26, m - i - 1) * (s2[i] - 'a');
        s += pow(26, m - i - 1) * (s1[i] - 'a');
    }
    if (rs == s)
    {
        if (chmatch(s1.substr(0, m), s2))
            count++;
    }
    for (int i = m; i < n; i++)
    {
        s -= (s1[i - m] - 'a') * h;
        s *= 26;
        s += s1[i] - 'a';
        cout << s << " " << rs << " " << i - m << " " << i << endl;
        if (s == rs)
        {
            if (chmatch(s1.substr(i - m + 1, m), s2))//most of the cases there is no need to check this but as a safe side we will check always when it matches. 
                count++;
        }
    }
    cout << count;
    return 0;
}