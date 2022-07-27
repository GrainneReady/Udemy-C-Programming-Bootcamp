/*
Receive a Linked List and some "int" number
Return the number of occurences of this "int" number in the list

IMPORTANT NOTE:
Because of the well-made structure of the course, most if not all of the code for Exercises/Section 32 was provided by the course (Udemy C Programming Bootcamp)
Instead of being prompted with a question and having to figure out the solution, the course kindly ran through the code in each exercise in the lectures for Section 32.

Course Link: https://www.udemy.com/share/103bNj3@PzuBNfy9sgEK1bVy6MZoiFdrzCwyHpbw5SOVrW5DGiVrObtV6j0RBf4RVM0wOooGUQ==/ (Lecture 388)
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct node {
    int data;
    struct node *next; // Will point to next node in list
}Node;


int totalNumberOfAppearancesInList(Node *head, int num) {
    int count = 0;
    Node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->data == num)
            count++;
        temp = temp->next;
    }
    return count;
}


int main()
{
    return 0;
}