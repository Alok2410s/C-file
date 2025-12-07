#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);
        quicksort(arr, low, p - 1);
        quicksort(arr, p + 1, high);
    }
}

void display(int arr[], int n) {
    if (n == 0) {
        printf("Array is empty!\n");
        return;
    }
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[100], n = 0, choice;

    while (1) {
        printf("\n---- MENU ----\n");
        printf("1. Input Array\n");
        printf("2. Display Array\n");
        printf("3. Apply Quicksort\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                printf("Enter number of elements: ");
                scanf("%d", &n);
                printf("Enter %d elements:\n", n);
                for (int i = 0; i < n; i++)
                    scanf("%d", &arr[i]);
                break;
            }

            case 2:
                display(arr, n);
                break;

            case 3:
                if (n == 0) {
                    printf("Array is empty! Enter elements first.\n");
                } else {
                    quicksort(arr, 0, n - 1);
                    printf("Array sorted successfully!\n");
                }
                break;

            case 4:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
