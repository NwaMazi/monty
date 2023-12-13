#include "monty.h"
/** F_pall - this code prints all values in stack
 * @head: points to the stack
 */

void F_pall(stack_t **head)
{
	stack_t *current = *head;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
