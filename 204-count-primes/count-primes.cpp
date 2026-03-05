class Solution {
public:
    int countPrimes(int n) {
        //This is part of the Sieve of Eratosthenes used in Count Primes.
        if(n <= 2) return 0;

        vector<bool> isPrime(n, true);
        
        for(int i = 2; i * i < n; i++) {
            if(isPrime[i]) {
                for(int j = i * i; j < n; j += i) {//multiple of the number
                    isPrime[j] = false;
                }
            }
        }

        int count = 0;
        for(int i = 2; i < n; i++) {
            if(isPrime[i]) count++;
        }

        return count;
    }
};