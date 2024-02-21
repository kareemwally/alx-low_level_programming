#include "lists.h"
/**
 *sum_listint-function
 *description:that function sums all data in nodes
 *@head:the pointer to 1st node in list
 *Return:(pointer)
 */
int sum_listint(listint_t *head)
{
int sum = 0;
if (!head)
{
return (sum);
}
else
{
while (head)
{
sum += head->n;
head = head->next;
}
}
return (sum);
}
