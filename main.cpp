#include <iostream>
int sum(int n) {
    int total = 0;
    for(int i = 1; i <= n; i++) total += i;
    return total;
}
int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;
    std::cout << "Sum: " << sum(n) << std::endl;
    return 0;
}
