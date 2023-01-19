#include "lists.h"

/**
 * lengthlist - function to know the length of the list
 * @head: pounter to the head
 * Return: the length of the list
 */

int lengthlist(listint_t *head)
{
	int length = 0;

	while (head)
		head = head->next, length++;
	return (length);
}

/**
 * is_palindrome - function to check if a linked list is a palindrome
 * @head: pointer to the head of the list
 * Return: 1 if is palindrome, 0 otherwise
 */

int is_palindrome(listint_t **head)
{
	listint_t *aux = NULL;
	int length = lengthlist(*head);
	int *copy, x = 0, y = 0;

	if (!(*head))
		return (1);

	copy = malloc(sizeof(int) * length);
	if (!copy)
		return (0);

	aux = *head;
	while (aux)
		copy[x++] = aux->n, aux = aux->next;

	x--;
	while (y <= x)
	{
		if (copy[y] == copy[x])
			y++, x--;
		else
			return (0);
	}
	return (1);
}
