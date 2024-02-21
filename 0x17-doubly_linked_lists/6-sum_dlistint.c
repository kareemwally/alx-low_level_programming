#include "lists.h"
/**
 * sum_dlistint - simple function to sum
 * Description: function that sums up all data in list
 * @head: pointer to head node
 * Return: (int) sum
 */
int sum_dlistint(dlistint_t *head)
{
int res = 0;
dlistint_t *tmp = head;
while (tmp)
{
res += tmp->n;
tmp = tmp->next;
}
return (res);
}
