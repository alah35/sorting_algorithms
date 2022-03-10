
int get_sum(int *arr, int i, int j) {
    int sum = 0;
    for ( ; i <= j; i++) {
        sum += arr[i];
    }
    return sum;
}

void push_borders (int *arr, int &l, int &r) {
    if (l < r) {
        arr[l] < arr[r] ? l++ : r--;
    }
    else if (l == r)
        push_borders(arr, ++l, ++r);
}

void task1() {
    int arr[8] ;//= {-2,1,-3,4,-1,2,1,-5,4};
    inputArray(arr, sizeof(arr));
    outputArray(arr, sizeof(arr));

    int l = 0, r = sizeof(arr) / sizeof(int) - 1;
    int i, j, maxSum = 0;
    while (l < r) {
        int _sum = get_sum(arr, l, r);
        if (maxSum < _sum) {
            maxSum = _sum;
            i = l; j = r;
        }
        push_borders(arr, l, r);
    }
    std::cout << maxSum << " i = " << i << " j = " << j << std::endl;
}
