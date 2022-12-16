#include "lists.h"

/**
 * insert_node - insert a new node into a order list
 * @head: pointer
 * @number: number
 * Return: newNode
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *newNode = NULL, *aux = NULL;

	newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	newNode->n = number;
	aux = *head;
	if (!aux || aux->n >= number)
	{
		newNode->next = aux;
		*head = newNode;
		return (newNode);
	}
	while (aux->next && number >= aux->next->n)
		aux = aux->next;
	newNode->next = aux->next;
	aux->next = newNode;
	return (newNode);
}
