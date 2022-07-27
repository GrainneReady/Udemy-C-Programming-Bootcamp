/*
Receive a Linked-List and some "int" number
Go through all the nodes of the list.
Return "true" if this number exists in the list,
Otherwise, if it doesn't exist - we should return "false"

IMPORTANT NOTE:
Because of the well-made structure of the course, Most if not all of the code for Exercises/Section 32 was provided by the course (Udemy C Programming Bootcamp)
Instead of being prompted with a question and having to figure out the solution, the course kindly ran through the code in each exercise in the lectures for Section 32.

Course Link: https://www.udemy.com/share/103bNj3@PzuBNfy9sgEK1bVy6MZoiFdrzCwyHpbw5SOVrW5DGiVrObtV6j0RBf4RVM0wOooGUQ==/ (Lecture 387)
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct node {
    int data;
    struct node *next; // Will point to next node in list
}Node;


bool isNumberInList(Node *head, int num) {
    Node *cur_node = head;
    while (cur_node->next != NULL)
    {
        if (cur_node->data == num) {
            return true;
        }
        cur_node = cur_node->next;
    }
    return false;
}


int main()
{

    return 0;
}