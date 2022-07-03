#include "lists.h"
#include <stddef.h>

/**
 * is_palindrome - check if a linked list is a palindrome
 * @head: pointer to head of list
 * Return: 0 or 1
 */
int is_palindrome(listint_t **head)
{
    const listint_t *current;
    const listint_t *tail;
    unsigned int n = 0;

    current = *head;
    if(current == NULL)
        return (1);

    tail = current;

    while (tail->next != NULL)
    {
        tail = tail->next;
        n++;
    }

    if ((n+1)%2 != 0)
        return (0);
    else
    {
        int arr[n+1];
        unsigned int i=0;

        while (i <= n)
        {
            arr[i] = current->n;
            current = current->next;
            i++;
        }

        int p=0;
        int j=n;
        
        while (p < j)
        {
            if (arr[p] == arr[j])
            {
                p++;
                j--;
                continue;
            }
            else
                return (0);
        }
        return (1);
    }

}
