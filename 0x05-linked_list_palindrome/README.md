<h1>0x05. Linked list palindrome</h1>
<div><br></div>
<div>
    <ul>
        <li>&nbsp;By:&nbsp;Carrie Ybay, Software Engineer at Holberton School</li>
        <li>&nbsp;Weight:&nbsp;1</li>
        <li>&nbsp;Project will start&nbsp;<span title="">Jan 16, 2023 12:00 AM</span>, must end by&nbsp;<span title="">Jan 20, 2023 12:00 AM</span></li>
        <li>&nbsp;will be&nbsp;released at&nbsp;<span title="">Jan 18, 2023 12:00 AM</span></li>
        <li>&nbsp;An auto review will be launched at the deadline</li>
    </ul>
</div>
<div>
    <div>
        <h2>Requirements</h2>
        <h3>General</h3>
        <ul>
            <li>Allowed editors:&nbsp;<code>vi</code>,&nbsp;<code>vim</code>,&nbsp;<code>emacs</code></li>
            <li>All your files will be compiled on Ubuntu 14.04 LTS</li>
            <li>Your programs and functions will be compiled with&nbsp;<code>gcc 4.8.4</code> using the flags&nbsp;<code>-Wall</code> <code>-Werror</code> <code>-Wextra</code> <code>and -pedantic</code></li>
            <li>All your files should end with a new line</li>
            <li>Your code should use the&nbsp;<code>Betty</code> style. It will be checked using&nbsp;<a href="https://github.com/hs-hq/Betty/blob/master/betty-style.pl" target="_blank" title="betty-style.pl">betty-style.pl</a> and&nbsp;<a href="https://github.com/hs-hq/Betty/blob/master/betty-doc.pl" target="_blank" title="betty-doc.pl">betty-doc.pl</a></li>
            <li>You are not allowed to use global variables</li>
            <li>No more than 5 functions per file</li>
            <li>Allowed functions:&nbsp;<code>write</code>,&nbsp;<code>printf</code>,&nbsp;<code>putchar</code>,&nbsp;<code>puts</code>,&nbsp;<code>malloc</code>,&nbsp;<code>free</code></li>
            <li>In the following examples, the&nbsp;<code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own&nbsp;<code>main.c</code> files at compilation. Our&nbsp;<code>main.c</code> files might be different from the one shown in the examples</li>
            <li>The prototypes of all your functions should be included in your header file called&nbsp;<code>lists.h</code></li>
            <li>Don&rsquo;t forget to push your header file</li>
            <li>All your header files should be include guarded</li>
        </ul>
    </div>
</div>
<h2>Tasks</h2>
<div>
    <div>
        <div>
            <h3>0. Linked list palindrome</h3>
            <div>mandatory</div>
        </div>
        <div>
            <p><strong>Technical interview preparation</strong>:</p>
            <ul>
                <li>You are not allowed to google anything</li>
                <li>Whiteboard first</li>
            </ul>
            <p>Write a function in C that checks if a singly linked list is a palindrome.</p>
            <ul>
                <li>Prototype:&nbsp;<code>int is_palindrome(listint_t **head);</code></li>
                <li>Return:&nbsp;<code>0</code> if it is not a palindrome,&nbsp;<code>1</code> if it is a palindrome</li>
                <li>An empty list is considered a palindrome</li>
            </ul>
            <pre><code>carrie@ubuntu:0x03$ cat lists.h 
#ifndef LISTS_H
#define LISTS_H

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);

int is_palindrome(listint_t **head);

#endif /* LISTS_H */
carrie@ubuntu:0x03$
</code></pre>
            <pre><code>carrie@ubuntu:0x03$ cat linked_lists.c 
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;lists.h&quot;

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
    const listint_t *current;
    unsigned int n; /* number of nodes */

    current = h;
    n = 0;
    while (current != NULL)
    {
        printf(&quot;%i\n&quot;, current-&gt;n);
        current = current-&gt;next;
        n++;
    }

    return (n);
}

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to pointer of first node of listint_t list
 * @n: integer to be included in new node
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new;
    listint_t *current;

    current = *head;

    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    new-&gt;n = n;
    new-&gt;next = NULL;

    if (*head == NULL)
        *head = new;
    else
    {
        while (current-&gt;next != NULL)
            current = current-&gt;next;
        current-&gt;next = new;
    }

    return (new);
}

/**
 * free_listint - frees a listint_t list
 * @head: pointer to list to be freed
 * Return: void
 */
void free_listint(listint_t *head)
{
    listint_t *current;

    while (head != NULL)
    {
        current = head;
        head = head-&gt;next;
        free(current);
    }
}
carrie@ubuntu:0x03$
</code></pre>
            <pre><code>carrie@ubuntu:0x03$ cat 0-main.c
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;lists.h&quot;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&amp;head, 1);
    add_nodeint_end(&amp;head, 17);
    add_nodeint_end(&amp;head, 972);
    add_nodeint_end(&amp;head, 50);
    add_nodeint_end(&amp;head, 98);
    add_nodeint_end(&amp;head, 98);
    add_nodeint_end(&amp;head, 50);
    add_nodeint_end(&amp;head, 972);
    add_nodeint_end(&amp;head, 17);
    add_nodeint_end(&amp;head, 1);
    print_listint(head);

    if (is_palindrome(&amp;head) == 1)
        printf(&quot;Linked list is a palindrome\n&quot;);
    else
        printf(&quot;Linked list is not a palindrome\n&quot;);

    free_listint(head);

    return (0);
}
carrie@ubuntu:0x03$
</code></pre>
            <pre><code>carrie@ubuntu:0x03$ gcc -Wall -Werror -Wextra -pedantic 0-main.c linked_lists.c 0-is_palindrome.c -o palindrome
carrie@ubuntu:0x03$ ./palindrome
1
17
972
50
98
98
50
972
17
1
Linked list is a palindrome
carrie@ubuntu:0x03$
</code></pre>
        </div>
        <div>
            <div>
                <p><strong>Repo:</strong></p>
                <ul>
                    <li>GitHub repository:&nbsp;<code>holbertonschool-interview</code></li>
                    <li>Directory:&nbsp;<code>0x05-linked_list_palindrome</code></li>
                    <li>File:&nbsp;<code>0-is_palindrome.c, lists.h</code></li>
                </ul>
            </div>
        </div>
        <div>
            <div>
                <div><button>&nbsp;Done?</button>&nbsp;</div>
            </div>
        </div>
    </div>
</div>