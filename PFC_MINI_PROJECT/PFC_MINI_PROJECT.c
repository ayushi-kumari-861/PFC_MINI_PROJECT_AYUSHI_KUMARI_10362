#include <stdio.h>

// Separate functions for each operation
void markAttendance(int arr[], int n);
void displayAttendance(int arr[], int n);
void countAttendance(int arr[], int n);

int main()
{
    int n, choice;
    printf("Name: Ayushi Kumari\n");
    printf("ERP: 10362\n");

    printf("Student Attendance Management System\n");
    printf("----------------------------------\n");

    // Declare 1D array
    printf("Enter number of students: ");
    scanf("%d", &n);

    int attendance[n];

    // Menu driven program
    do
    {
        printf("\nMenu\n");
        printf("1. Mark Attendance\n");
        printf("2. Display Attendance\n");
        printf("3. Count Present and Absent\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Call function based on choice
        switch(choice)
        {
            case 1:
                markAttendance(attendance, n);
                break;

            case 2:
                displayAttendance(attendance, n);
                break;

            case 3:
                countAttendance(attendance, n);
                break;

            case 4:
                printf("Program Ended\n");
                break;

            default:
                printf("Invalid Choice\n");
        }
    } while(choice != 4);

    return 0;
}

// Function to mark attendance using loop
void markAttendance(int arr[], int n)
{
    printf("\nEnter attendance (1 = Present, 0 = Absent)\n");
    for(int i = 0; i < n; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Function to display attendance
void displayAttendance(int arr[], int n)
{
    printf("\nAttendance Details\n");
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 1)
            printf("Student %d: Present\n", i + 1);
        else
            printf("Student %d: Absent\n", i + 1);
    }
}

// Function to count present and absent students
void countAttendance(int arr[], int n)
{
    int present = 0, absent = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 1)
            present++;
        else
            absent++;
    }

    printf("\nTotal Present Students: %d\n", present);
    printf("Total Absent Students: %d\n", absent);
}

// Name: Ayushi Kumari
// ERP: 10362
// Student Attendance Management System
// ----------------------------------
// Enter number of students: 4

// Menu
// 1. Mark Attendance
// 2. Display Attendance
// 3. Count Present and Absent
// 4. Exit
// Enter your choice: 1

// Enter attendance (1 = Present, 0 = Absent)
// Student 1: 1
// Student 2: 0
// Student 3: 1
// Student 4: 1

// Menu
// 1. Mark Attendance
// 2. Display Attendance
// 3. Count Present and Absent
// 4. Exit
// Enter your choice: 2

// Attendance Details
// Student 1: Present
// Student 2: Absent
// Student 3: Present
// Student 4: Present

// Menu
// 1. Mark Attendance
// 2. Display Attendance
// 3. Count Present and Absent
// 4. Exit
// Enter your choice: 3

// Total Present Students: 3
// Total Absent Students: 1

// Menu
// 1. Mark Attendance
// 2. Display Attendance
// 3. Count Present and Absent
// 4. Exit
// Enter your choice: 4
// Program Ended