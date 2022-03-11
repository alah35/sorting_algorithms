
template <typename T>
void show_by_models(T *arr, int len) {
    int l = 0, r = len / sizeof(T) - 1, i = r;
    int res[len / sizeof(T)];
    while (l <= r) {
        if (abs(arr[l]) >= abs(arr[r])) {
            res[i--] = arr[l];
            l++;
        } else {
            res[i--] = arr[r];
            r--;
        }
    }
    for (int i = 0; i < len / sizeof(T); i++) {
        std::cout << res[i] << ", ";
    }
    std::cout << std::endl;
}

void task4() {
    int arr[6] = {-100,-50, -5, 1, 10, 15};
    outputArray(arr,sizeof(arr));
    show_by_models(arr, sizeof(arr));
}
