#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<double> numbers = {3.5, 7.2, 1.8, 9.4, 5.1};

    double sum = std::accumulate(numbers.begin(), numbers.end(), 0.0);
    double average = sum / numbers.size();
    double max = *std::max_element(numbers.begin(), numbers.end());
    double min = *std::min_element(numbers.begin(), numbers.end());

    std::cout << "Numbers: ";
    for (double n : numbers) std::cout << n << " ";
    std::cout << "\n";
    std::cout << "Sum:     " << sum << "\n";
    std::cout << "Average: " << average << "\n";
    std::cout << "Max:     " << max << "\n";
    std::cout << "Min:     " << min << "\n";

    return 0;
}
