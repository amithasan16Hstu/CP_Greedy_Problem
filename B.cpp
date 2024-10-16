#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        // We want to minimize the number of black cells (B) in any k consecutive cells
        int min_operations = n; // Start with maximum possible (which is n)

        // Count initial black cells in the first k segment
        int black_cells = 0;
        for (int i = 0; i < k; i++) {
            if (s[i] == 'B') {
                black_cells++;
            }
        }

        min_operations = min(min_operations, black_cells);

        // Use sliding window to check all k-sized segments
        for (int i = k; i < n; i++) {
            // Remove the influence of the leftmost cell of the previous window
            if (s[i - k] == 'B') {
                black_cells--;
            }
            // Add the influence of the new rightmost cell of the current window
            if (s[i] == 'B') {
                black_cells++;
            }
            // Update the minimum number of black cells in any k-segment
            min_operations = min(min_operations, black_cells);
        }

        // The minimum number of black cells in any k-sized segment gives the minimum operations needed
        cout << min_operations << endl;
    }

    return 0;
}
