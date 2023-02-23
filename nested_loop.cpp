#include <iostream>

int main() {
    int n = 10;
    int x = 0;
    int s = 0;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            for (int k = 1; k < n; ++k) {
                ++x;
                s += x;
            }
        }
    }
    
    std::cout << "s = " << s << std::endl;
    std::cout << "s = " << s << std::endl;

    return 0;
}
