#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr1 = &arr[1]; // Points to 20
    int *ptr2 = &arr[4]; // Points to 50

    printf("Difference: %ld\n", ptr2 - ptr1);  // Output: 3
    return 0;
}
