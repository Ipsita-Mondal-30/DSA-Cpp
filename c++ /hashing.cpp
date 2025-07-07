#include <iostream>
using namespace std;



int main() {
    int n;
    cin >> n; // Total how many numbers to input

    int arr[n]; // Declare array to store numbers
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; // Input numbers one by one
    }

    // Precompute frequency (count) using hash array
    int hash[13] = {0}; // Assuming numbers are between 0 to 12
    for(int i = 0; i < n; i++) {
        hash[arr[i]] += 1; // Increase count of each number
    }

    // Now answer how many times a number occurred
    int q;
    cin >> q; // Number of queries

    while(q--) {
        int number;
        cin >> number; // Number to search frequency for
        cout << hash[number] << endl; // Print how many times it came
    }

    return 0;
}
