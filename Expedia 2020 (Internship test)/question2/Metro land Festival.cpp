#include <bits/stdc++.h>
using namespace std;
int cost(int x, int y, int a, int b) {
   return (abs(x-a)+abs(y-b));
}
int greedy(vector<int> &numpeople, vector<int> &x, vector<int> &y){
    vector<int> v1, v2;
    int ans = 0;
    for(int i = 0 ; i < numpeople.size();i++){
        int count = numpeople[i];
        while(count--){
            v1.push_back(x[i]);
            v2.push_back(y[i]);
        }
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    int mid_v1, mid_v2;

    mid_v1 = v1[v1.size() / 2];
    mid_v2 = v2[v2.size() / 2];

    for(int i = 0; i < numpeople.size();  i++){
        ans += numpeople[i] * cost(mid_v1, mid_v2, x[i], y[i]);
    }
    return ans;
}
//Driver Function
int main()
{   
    int n;
    cin >> n;
    vector<int>numpeople,x,y;
   for(int i = 0; i < n; i++)
   {
       int num;
       cin >> num;
       numpeople.push_back(num);
   }
   for(int i = 0; i < n; i++)
   {
       int num;
       cin >> num;
       x.push_back(num);
   }
   for(int i = 0; i < n; i++)
   {
       int num;
       cin >> num;
       y.push_back(num);
   }
   cout << greedy(numpeople,x,y);
   return 0;
}
