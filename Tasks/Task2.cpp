#include <unordered_set>

int* get_two_numbers(int *a, size_t len, int *b, int res) { //function for unsorted arrays
    std::unordered_set<int> k;
    for(int i = 0; i < len; i++) {
        int numberToFind = res - a[i];
        bool isThere = k.find(numberToFind) != k.end();
        if (isThere) {
            b[0] = a[i]; b[1] = numberToFind;
            return b;
        } else
            k.emplace(a[i]);
    }
    b[0] = 0; b[1] = 0;
    return b;
}

int* get_two_numbers2(int *a, size_t len, int *b, int res) { // function only for sorted array
    int l = 0, r = len - 1;
    while (l < r) {
        int sum = a[l] + a[r];
        if (sum == res) {
            b[0] = a[l]; b[1] = a[r];
            return b;
        }
        if (sum < res)
            l++;
        else
            r--;
    }
    b[0] = 0; b[1] = 0;
    return b;
}

//void task2() { // first way if we have got unsorted array
//    int answer[2], a[4] = {2, 7, 11, 15};
//    int res = 9;
//    get_two_numbers(a, sizeof(a) / sizeof(int), answer, res);
//    outputArray(answer, sizeof(answer));
//}

void task2() {
    int answer[2], a[4] = {2, 7, 11, 15};
    int res = 9;
//    quickSort(a, 0, sizeof(a) / sizeof(int) - 1);
    get_two_numbers2(a, sizeof(a) / sizeof(int), answer, res);
    outputArray(answer, sizeof(answer));
}