#include <iostream>
#include <thread>

void countUp() {
    for (int i = 0; i <= 20; i++) {
        std::cout << "Counting up:" << i << std::endl;
    }
}

void countDown() {
    for (int i = 20; i >= 0; i--) {
        std::cout << "Counting down:" << i << std::endl;
    }
}

int main() {

    std::thread t1(countUp);
    t1.join();

    std::thread t2(countDown);
    t2.join();

    return 0;
}