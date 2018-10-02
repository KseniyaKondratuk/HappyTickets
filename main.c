#include <stdio.h>

int getSumOfNumbers(int number){
    return number % 10 + number / 100 + number / 10 % 10;
}

int main() {
    int countOfHappyTickets = 0, suffix, prefix;
    for (int i = 100000; i < 1000000; ++i) {
        prefix = i / 1000;
        suffix = i % 1000;
        if (getSumOfNumbers(prefix) == getSumOfNumbers(suffix)) {
            ++countOfHappyTickets;
        }
    }
    printf("%d", countOfHappyTickets);
    return 0;
}