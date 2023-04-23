#include "lists.h"

/**
 * add_nodeint - adds a new node at th start of  listint_t list
 * @head: points to the head of the list
 * @n: integer to add to the new node
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
