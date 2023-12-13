#ifdef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer (node data)
 * @prev: points to the previous element of the stack
 * @next: points to the next element of the stack
 */
typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

/**
 * struct bus_s - global variables and flags
 * @file: file pointer to the Monty program
 * @content: content of the Monty program
 */
typedef struct bus_s
{
    FILE *file;
    char *content;
} bus_t;

extern bus_t bus;

void f_push(stack_t **head, int value, unsigned int counter);
void f_pall(stack_t **head);
void free_stack(stack_t *head);

#endif /* MONTY_H */
