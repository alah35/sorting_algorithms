#include <iostream>
#include "Tasks.h"

int main() {
    int n = 0;
    while (n != -1) {
        std::cout << "For exit enter -1. Enter task number:";
        std::cin >> n;
        switch (n) {
            case 1:
                task1();
                break;
            case 2:
                task2();
                break;
            case 3:
                task3();
                break;
            case 4:
                task4();
                break;
            default:
                std::cout << "Wrong task number. Try again" << std::endl;
                break;
        }
    }
    return 0;
}
