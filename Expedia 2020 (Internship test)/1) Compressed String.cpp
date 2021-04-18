/* Compressed string 

Input : aaaabbbbbcccc
Output : a4b5c4

Input : abcdd
Ouput : a1b1c1d2

*/
#include <bits/stdc++.h>
using namespace std;
string Solve(string s)
{
    string ans = "";
    int n = s.size();
    int i = 0, j = i+1;
    while(j <= n)
    {
        if(s[i] == s[j])
        j++;
        else //(s[i] != s[j])
        {
            int num = (j-i);
            ans.push_back(s[i]);
            string c = to_string(num);
            ans += c;
            i = j;
            j = i+1;
        }
    }
    return ans;
}
int main()
{
  string s;
  cin >> s;
  cout << Solve(s);
  return 0;
}
