#include <iostream>
#include <vector>

using namespace std;

// Function to swap two elements in the array
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to generate all permutations of the array
void generatePermutations(vector<int> &arr, int startIndex, vector<vector<int>> &result) {
    if (startIndex == arr.size()) {
        result.push_back(arr);
        return;
    }

    for (int i = startIndex; i < arr.size(); ++i) {
        swap(arr[startIndex], arr[i]);
        generatePermutations(arr, startIndex + 1, result);
    }
}

// Function to print all permutations
void printPermutations(const vector<vector<int>> &permutations) {
    for (const auto &permutation : permutations) {
        for (int num : permutation) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<int> arr = {1, 2, 3}; // Replace this with your array
    vector<vector<int>> permutations;

    generatePermutations(arr, 0, permutations);

    cout << "All possible permutations:" << endl;
    printPermutations(permutations);

    return 0;
}
