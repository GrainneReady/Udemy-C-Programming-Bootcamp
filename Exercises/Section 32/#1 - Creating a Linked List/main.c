/*
Create a linked list
Create a new list
Receive numbers as input from the user
Every received number should be added to the end of the list
The "stopping condition" would be when number is "-1"
Return the New List

IMPORTANT NOTE:
Because of the well-made structure of the course, Most if not all of the code for Exercises/Section 32 was provided by the course (Udemy C Programming Bootcamp)
Instead of being prompted with a question and having to figure out the solution, the course kindly ran through the code in each exercise in the lectures for Section 32.

Course Link: https://www.udemy.com/share/103bNj3@PzuBNfy9sgEK1bVy6MZoiFdrzCwyHpbw5SOVrW5DGiVrObtV6j0RBf4RVM0wOooGUQ==/ (Lecture 384)
*/

#include <stdio.h>
#include <stdlib.h>


typedef struct node {
    int data;
    struct node *next; // Will point to next node in list
}Node;


Node *createListOfNumbers(){
    Node *head; // Vital for linked list
    Node *current_node;

    int num;
    printf("Please enter a number or '-1' to finish.\n");
    scanf("%d", &num);
    if (num == -1)
        return NULL;
    // We assume the first num was a legit number (legit data)
    head = (Node*)malloc(sizeof(Node)); // Memory allocation, allocates requested memory and returns pointer to it
    current_node = head;
    current_node->data = num;

    printf("Please enter a number or '-1' to finish.\n");
    scanf("%d", &num);

    while(num != -1)
    {
        current_node->next = (Node*)malloc(sizeof(Node));     // Allocate space for next node in memory
        current_node = current_node->next;                    // Point the current_node pointer to the address of the next node in memory, so that we're now at the next node
        current_node->data = num;                             // Set the value to be stored in our new node
        printf("Please enter a number or '-1' to finish.\n"); // Ask for value to be stored in next node
        scanf("%d", &num);                                    // Save value to be stored in next node to a variable
    }

    current_node->next = NULL; // Last node will point to NULL as the next address, to show its the last node in the list
    return head; // Pointer to address of first node in list
}


int main()
{
    return 0;
}