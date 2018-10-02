#include <stdio.h>

const int MIN_SIX_VALUE_NUMBER = 100000;
const int MAX_SIX_VALUE_NUMBER = 1000000;

int getSumOfNumbers(int number){
    return number % 10 + number / 100 + number / 10 % 10;
}

int main() {
    int countOfHappyTickets = 0, suffix, prefix;
    for (int i = MIN_SIX_VALUE_NUMBER; i < MAX_SIX_VALUE_NUMBER; ++i) {
        prefix = i / 1000;
        suffix = i % 1000;
        if (getSumOfNumbers(prefix) == getSumOfNumbers(suffix)) {
            ++countOfHappyTickets;
        }
    }
    printf("%d", countOfHappyTickets);
    return 0;
}