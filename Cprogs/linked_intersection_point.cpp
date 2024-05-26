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
void push(Node ** head_ref,const int& key)
{
    Node * new_node = new Node();

    new_node->key = key;

    new_node->next = *head_ref;

    *head_ref = new_node;
}


void reverse(Node ** head_ref)
{
    Node * curr = *head_ref;
    Node * prev = NULL;
    Node * next = NULL;

    while(curr != NULL)
    {
        next = curr->next;
	curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head_ref = prev;
}

Node * newNode(const int& key)
{
    Node * new_node = new Node();

    new_node->key = key;

    new_node->next = NULL;

    return new_node;
}

bool findIfCircular(Node ** head_ref)
{
    Node * temp = (*head_ref)->next;
    std::cout << "temp is " << temp->key << std::endl;
    while(temp != NULL)
    {
        if(temp == *head_ref)
        {
            break;
	}
        temp = temp->next;
    }
    return (temp == *head_ref);
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
       
	Node * temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }

	temp->next = newNode(35);
	temp->next->next = newNode(45);
	temp->next->next->next = newNode(65);
	temp->next->next->next->next = newNode(75);
//	temp->next->next->next->next->next = head;
	
        if(findIfCircular(&head))
        {
	    std::cout << "it is circular" << std::endl;
	}
	else
        {
            std::cout << "it is not circular" << std::endl;
	}

//	print(&head);

	return 0;
}

