#include <iostream>
#include <vector>

const int MAXN = 300005;

int numbers[MAXN];

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, x;
        std::cin >> n >> x;
        for (int i = 1; i <= n; i++) {
            std::cin >> numbers[i];
        }
        int num_min = numbers[1];
        int num_max = numbers[1];
        int res = 0;
        for (int i = 2; i <= n; i++) {
            if (numbers[i] > num_max) {
                num_max = numbers[i];
            }
            if (numbers[i] < num_min) {
                num_min = numbers[i];
            }
            if (num_max - num_min > 2 * x) {
                res++;
                num_min = num_max = numbers[i];
            }
        }
        std::cout << res << "\n";
    }
    return 0;
}
