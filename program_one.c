#include <stdio.h>
//1.) Create a function with arguments and return a value which will find the sum of 5 numbers.
int main() {
    program_one();
    return 0;
}

void program_one() {
    int loop = 1, n[5], total_sum = 0;
    printf("Enter five numbers: ");
    while(loop <= 5) {
        scanf("%d", &n[loop - 1]);
        ++loop;
    }
    total_sum = sum_of_numbers(n[0], n[1], n[2], n[3], n[4]);
    printf("\nThe sum of five numbers is %d.", total_sum);
}

int sum_of_numbers(int n1, int n2, int n3, int n4, int n5) {
    return n1 + n2 + n3 + n4 + n5;
}