// Sieve of erastothens for counting primes

#include<iostream>
#include<vector>
using namespace std;

int countPrimes(int n) {
  int count = 0;
  vector<bool> prime(n + 1, true);
  for(int i = 2; i < n; i++) {
    if(prime[i]) {
      count++;
      for(int j = 2 * i; j < n; j = j + i) prime[j] = 0;
    }
  }
  return count;
}

int main() {
  int n;
  cout << "Enter Number: " << endl;
  cin >> n;
  int ans = countPrimes(n);
  cout << "No. Of Primes: " << ans << endl;
  return 0;
}
