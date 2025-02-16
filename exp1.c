#include <stdio.h>

#define MAX_SIZE 100

// Function to insert an element at a specific position
void insert(int arr[], int *size, int position, int value) {
    if (*size >= MAX_SIZE) {
        printf("Array is full, cannot insert.\n");
        return;
    }

    if (position < 0 || position > *size) {
        printf("Invalid position.\n");
        return;
    }

    // Shift elements to the right to make space
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[position] = value;
    (*size)++; // Increase size of the array
}

// Function to delete an element at a specific position
void delete(int arr[], int *size, int position) {
    if (*size == 0) {
        printf("Array is empty, cannot delete.\n");
        return;
    }

    if (position < 0 || position >= *size) {
        printf("Invalid position.\n");
        return;
    }

    // Shift elements to the left to fill the gap
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*size)--; // Decrease size of the array
}

// Function to display the array
void display(int arr[], int size) {
    if (size == 0) {
        printf("Array is empty.\n");
        return;
    }

    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE];
    int size = 0; // Initially, the array is empty
    int choice, position, value;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter position  ");
                scanf("%d %d", &position, &value);
                insert(arr, &size, position, value);
                break;
            case 2:
                printf("Enter  position");
                scanf("%d", &position);
                delete(arr, &size, position);
                break;
            case 3:
                display(arr, size);
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}
/*Menu:
1. Insert
2. Delete
3. Display
4. Exit
Enter your choice: 1
Enter position  0
1

Menu:
1. Insert
2. Delete
3. Display
4. Exit
Enter your choice: 1
Enter position  1
2

Menu:
1. Insert
2. Delete
3. Display
4. Exit
Enter your choice: 1
Enter position  2
3

Menu:
1. Insert
2. Delete
3. Display
4. Exit
Enter your choice: 3
Array elements: 1 2 3

Menu:
1. Insert
2. Delete
3. Display
4. Exit
Enter your choice: 2
Enter  position0

Menu:
1. Insert
2. Delete
3. Display
4. Exit
Enter your choice: 3
Array elements: 2 3

Menu:
1. Insert
2. Delete
3. Display
4. Exit
Enter your choice: 4
Exiting... */