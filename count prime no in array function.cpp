#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i*i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    vector<int> nums = {2, 3, 4, 5, 10, 13, 17, 20};

    // Count primes in vector
    int primeCount = count_if(nums.begin(), nums.end(), isPrime);

    cout << "Number of primes: " << primeCount << endl;

    return 0;
}
