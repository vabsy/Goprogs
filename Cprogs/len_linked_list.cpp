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

int findLength(Node ** head_ref)
{
    Node * temp = *head_ref;
    int length = 0;
    if(temp == NULL)
    return 0;

    while(temp != NULL)
    {
        temp = temp->next;
        ++length;
    }
    return length;
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

        std::cout << findLength(&head) << std::endl;    
	 
	return 0;
}

