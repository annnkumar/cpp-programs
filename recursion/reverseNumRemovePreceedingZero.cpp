#include <bits/stdc++.h>
using namespace std;
void reverseNum(int n, int &ans) {
if(n == 0) {
return;
}
int digit = n % 10;
ans = ans * 10 + digit;
reverseNum(n / 10, ans);
}
int main() {
int n;
cin >> n;
int ans = 0;
reverseNum(n, ans);
cout << ans << endl;
return 0;
}