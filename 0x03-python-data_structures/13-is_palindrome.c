#include "lists.h"

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

    //Get length
    //Use a function to get a node on a specific index
    //check the first to the last and, second to second last ....
    //return false if one check was False
    //return true at the end (if all passed the checks)

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
        int i=0;

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
