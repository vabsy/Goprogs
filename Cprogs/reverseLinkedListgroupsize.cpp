#include <bits/stdc++.h>
using namespace std;

/* Link list node */
class Node {
public:
	int key;
	Node* next;
};

/* Given a reference (pointer to pointer) to the head
of a list and an int, push a new node on the front
of the list. */
void push(Node** head_ref, int new_key)
{
	/* allocate node */
	Node* new_node = new Node();

	/* put in the key */
	new_node->key = new_key;

	/* link the old list of the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}


void print(Node ** head_ref)
{
     Node * tmp = *head_ref;
     while(tmp != NULL)
     {
         std::cout << tmp->key << " ";
         tmp = tmp->next;
     }
     std::cout << endl;
}

Node * reverse(Node ** head_ref, int count)
{
    Node * curr = *head_ref;
    Node * prev = NULL;
    Node * next = NULL;
    int num = 0;

    while(curr != NULL && num < count)
    {
        next = curr->next;
	curr->next = prev;
        prev = curr;
        curr = next;
	num++;
    }

    print(&prev);

    if(next != NULL)
       (*head_ref)->next = reverse(&next, count);
    //std::cout << prev->key << std::endl;

    return prev;
}


int main() {
	/* Start with the empty list */
	Node* head = NULL;
	int x = 21;

	/* Use push() to construct below list
	14->21->11->30->10 */
	push(&head, 10);
	push(&head, 30);
	push(&head, 11);
	push(&head, 21);
	push(&head, 14);
	push(&head, 35);
	 
	print(&head);

head = 	reverse(&head,2);

	print(&head);
	return 0;
}

