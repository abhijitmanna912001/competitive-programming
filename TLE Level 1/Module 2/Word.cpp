#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
  string s;
  cin >> s;

  int lowercase = 0, uppercase = 0;

  for (char ch : s) {
    if (islower(ch))
      lowercase++;
    else
      uppercase++;
  }

  if (uppercase > lowercase) {
    for (char &ch : s)
      ch = toupper(ch);
  } else if (uppercase == lowercase) {
    for (char &ch : s)
      ch = tolower(ch);
  } else {
    for (char &ch : s)
      ch = tolower(ch);
  }

  cout << s << "\n";

  return 0;
}