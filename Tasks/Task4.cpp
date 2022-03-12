
template <typename T>
void show_by_abs(T *arr, int len) {
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
    std::vector<int> v = {-100, -50, -1, 1, 2, 3, 4};

    int j = 0;
    while (j < v.size() && v[j] < 0) {
        ++j;
    }

    int i = j--;
    while (j >= 0 || i < v.size()) {
        int res = (j >= 0 && (i == v.size() || v[i] > -v[j]) ? v[j--] : v[i++]);
        std::cout << res << ' ';
    }

    std::cout << '\n';

}
