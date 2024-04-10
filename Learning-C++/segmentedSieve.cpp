#include <bits/stdc++.h>
using namespace std;

void simpleSieve(int limit, vector<int> &primes) {
    bool mark[limit + 1];
    memset(mark, true, sizeof(mark));

    for (int p = 2; p * p < limit; p++) {
        if (mark[p] == true) {
            for (int i = p * p; i < limit; i += p)
                mark[i] = false;
        }
    }

    for (int p = 2; p < limit; p++) {
        if (mark[p] == true) {
            primes.push_back(p);
        }
    }
}

void segmentedSieve(int n) {
    int limit = sqrt(n) + 1;
    vector<int> primes;
    simpleSieve(limit, primes);

    int low = limit;
    int high = 2 * limit;

    while (low < n) {
        if (high >= n)
            high = n;

        bool mark[limit + 1];
        memset(mark, true, sizeof(mark));

        for (int i = 0; i < primes.size(); i++) {
            int loLim = floor(low / primes[i]) * primes[i];
            if (loLim < low)
                loLim += primes[i];

            for (int j = loLim; j < high; j += primes[i])
                mark[j - low] = false;
        }

        for (int i = low; i < high; i++)
            if (mark[i - low])
                cout << i << " ";

        low = low + limit;
        high = high + limit;
    }
}

int main() {
    int n = 500;
    cout << "Primes smaller than " << n << ":\n";
    segmentedSieve(n);
    return 0;
}

