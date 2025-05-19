#include <iostream>
#include <vector>
#include <stack>

std::vector<int> canSeePersonsCountLinear(const std::vector<int>& heights) {
    int n = heights.size();
    std::vector<int> result(n, 0);
    std::stack<int> st;

    for (int i = n - 1; i >= 0; --i) {
        while (!st.empty() && st.top() < heights[i]) {
            st.pop();
            result[i]++;
        }
        if (!st.empty()) {
            result[i]++;
        }
        st.push(heights[i]);
    }

    return result;
}

int main() {
    std::vector<int> heights = {10, 6, 8, 5, 11, 9};
    std::vector<int> result = canSeePersonsCountLinear(heights);

    std::cout << "Visible people count (Linear): ";
    for (int count : result) {
        std::cout << count << " ";
    }
    std::cout << std::endl;

    return 0;
}
