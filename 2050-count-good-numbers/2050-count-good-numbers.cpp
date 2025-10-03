class Solution {
public:
    const int MOD = 1e9 + 7;

    int countGoodNumbers(long long chakraLength) {
        long long even = (chakraLength + 1) / 2;
        long long odd = chakraLength / 2;

        long long evenWays = po(5, even);
        long long oddWays = po(4, odd);

        return (evenWays * oddWays) % MOD;
    }

    long long po(long long base, long long power) {
        long long result = 1;
        base %= MOD;

        while (power > 0) {
            if (power % 2 == 1)
                result = (result * base) % MOD;

            base = (base * base) % MOD;
            power /= 2;
        }

        return result;
    }
};