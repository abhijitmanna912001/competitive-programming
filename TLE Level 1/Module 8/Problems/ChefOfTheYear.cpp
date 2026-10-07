#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, M;
  cin >> N >> M;

  map<string, string> chefCountry;

  for (int i = 0; i < N; i++) {
    string chef, country;
    cin >> chef >> country;

    chefCountry[chef] = country;
  }

  map<string, int> chefVotes;
  map<string, int> countryVotes;

  for (int i = 0; i < M; i++) {
    string chef;
    cin >> chef;

    chefVotes[chef]++;
    countryVotes[chefCountry[chef]]++;
  }

  int maxVotes = 0;
  string winningChef;

  for (auto it : chefVotes) {
    if (it.second > maxVotes) {
      maxVotes = it.second;
      winningChef = it.first;
    }
  }

  maxVotes = 0;
  string winningCountry;

  for (auto it : countryVotes) {
    if (it.second > maxVotes) {
      maxVotes = it.second;
      winningCountry = it.first;
    }
  }

  cout << winningCountry << '\n';
  cout << winningChef << '\n';
  return 0;
}