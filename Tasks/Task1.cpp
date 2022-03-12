
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

void kadane_algorithm(int *arr, int len) {
    int sum = 0, l = 0, r = 0, minusPos = -1, resSum = arr[0];

    for (int i = 0; i < len; i++) {
        sum += arr[i];

        if (sum > resSum) {
            resSum = sum;
            l = minusPos + 1;
            r = i;
        }

        if (sum < 0) {
            sum = 0;
            minusPos = i;
        }
    }
    std::cout << " i = " << l << " j = " << r << std::endl;
}

void task1() {
    int arr[9] = {-2,1,-3,4,-1,2,1,-5,4};
    outputArray(arr, sizeof(arr));
    kadane_algorithm(arr, sizeof(arr) / sizeof(int));
}


//void task1() {
//    int arr[9] = {-2,1,-3,4,-1,2,1,-5,4};
//    inputArray(arr, sizeof(arr));
//    outputArray(arr, sizeof(arr));
//    int l = 0, r = sizeof(arr) / sizeof(int) - 1;
//    int i, j, maxSum = 0;
//    while (l < r) {
//        int _sum = get_sum(arr, l, r);
//        if (maxSum < _sum) {
//            maxSum = _sum;
//            i = l; j = r;
//        }
//        push_borders(arr, l, r);
//    }
//    std::cout << " i = " << i << " j = " << j << std::endl;
//}