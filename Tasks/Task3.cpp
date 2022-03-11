#include <vector>

int getPivotIndex(std::vector<int> &arr, int left, int right) {
    int pivot = left - 1;
    for (int i = left; i <= right; i++) {
        if (arr[i] < arr[right]) {
            pivot++;
            std::swap(arr[pivot], arr[i]);
        }
    }

    pivot++;
    std::swap(arr[pivot], arr[right]);

    return pivot;
}

void quickSort(std::vector<int> &arr, int left, int right) {
    if (left < right) {
        int pivotIndex = getPivotIndex(arr, left, right);

        quickSort(arr, left, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, right);
    }
}

void output_vector(std::vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
        if (i == arr.size() - 1)
            std::cout << std::endl;
    }
}

void task3() {
    std::vector<int> arr;
    int n = 0;

    while (n != -2) {
        std::cout << "Enter a number:";
        std::cin >> n;
        if ( n == -1) {
            quickSort(arr, 0, arr.size() - 1);
            std::cout << arr[4] << std::endl;
            continue;
        }
        arr.push_back(n);
    }
    output_vector(arr);
}
