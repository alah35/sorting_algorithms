
template<typename T>
int getPivotIndex(T *arr, int left, int right) {
    int pivot = left - 1;
    for (int i = left; i < right; i++) {
        if (arr[i] < arr[right]) {
            pivot++;
            swap(arr[pivot], arr[i]);
        }
    }

    pivot++;
    swap(arr[pivot], arr[right]);

    return pivot;
}

template<typename T>
void quickSort(T *arr, int left, int right) {
    if (left < right) {
        int pivotIndex = getPivotIndex(arr, left, right);

        quickSort(arr, left, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, 14);
    }
}

template<typename T>
void outputArray(T *arr, size_t len) {
    for (int i = 0; i < len / sizeof(T); i++) {
        if (i == len / sizeof(T) - 1)
            std::cout << arr[i] << std::endl;
        else std::cout << arr[i] << ", ";
    }
}

template<typename T>
void inputArray(T *arr, size_t len) {
    for (int i = 0; i < len / sizeof(T); i++) {
        std::cout << "Enter " << i << " element:";
        std::cin >> arr[i];
    }
}
