#include <bits/stdc++.h>
using namespace std;

/* Link list node */
class Node {
public:
	int key;
	Node* next, *prev;
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


void pushSortedWay(Node ** head_ref,const int& key)
{
    Node * new_node = new Node();

    new_node->key = key;
    
    if(*head_ref == NULL)
    {
        new_node->next = NULL;
        new_node->prev = NULL;
	*head_ref = new_node;
	return;
    }

    if((*head_ref)->next == NULL && (*head_ref)->prev == NULL )
    {
        if((*head_ref)->key > new_node->key)
        {
            new_node->next = *head_ref;
	    (*head_ref)->prev = new_node;
	    new_node->prev = NULL;
	    (*head_ref)->next = NULL;
	    *head_ref = new_node;
	}
	else
        {
            new_node->prev = *head_ref;
            (*head_ref)->next = new_node;
            new_node->next = NULL;
            (*head_ref)->prev = NULL;
	}
	return;
    }

        if(new_node->key < (*head_ref)->key)
        {
            new_node->next = *head_ref;
            new_node->prev = NULL;
            (*head_ref)->prev = new_node;
            *head_ref = new_node;
        }
	else
        {
          Node * temp = *head_ref;
          while(temp->next != NULL)
          {
	      if(new_node->key > temp->key && new_node->key < temp->next->key)
              {
                  temp->next->prev = new_node;
                  new_node->next = temp->next;
		  new_node->prev = temp;
                  temp->next = new_node;
	      }
	      else
              {
	          temp = temp->next;
	      }
	  }
	}
    return;
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


void print(Node ** head_ref)
{
     Node * tmp = *head_ref;
     while(tmp != NULL)
     {
         std::cout << tmp->key << "->";
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
	pushSortedWay(&head, 2);
        pushSortedWay(&head, 6);
        pushSortedWay(&head, 1);
	pushSortedWay(&head, 4);
        pushSortedWay(&head, 5);
	//push(&head, 21);
        //push(&head, 14);
       
        print(&head);
	return 0;
}

