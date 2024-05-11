/*
The structure of petrolPump is
struct petrolPump
{
    int petrol;
    int distance;
};*/

class Solution {
public:
  int tour(petrolPump p[], int n) {
    int deficit = 0;
    int balance = 0;
    int start = 0;
    for (int i = 0; i < n; i++) {
      balance += p[i].petrol - p[i].distance;
      if (balance < 0) {
        deficit += balance;
        start = i + 1;
        balance = 0;
      }
    }
    if (deficit + balance >= 0) {
      return start;
    }
    return -1;
  }
};
