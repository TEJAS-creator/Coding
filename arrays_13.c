#include <stdio.h>

int main()
{
    int arr[] = {6, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp;

    printf("Original array: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Bubble Sort algorithm
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j+1] using a temporary variable
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// IN DESCENDING ORDER

// // Bubble Sort algorithm for descending order
// for (i = 0; i < n - 1; i++) {
//     for (j = 0; j < n - i - 1; j++) {
//         if (arr[j] < arr[j + 1]) {
//             // Swap arr[j] and arr[j+1] using a temporary variable
//             temp = arr[j];
//             arr[j] = arr[j + 1];
//             arr[j + 1] = temp;
//         }
//     }
// }