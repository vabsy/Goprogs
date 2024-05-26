#include <iostream>
#include <stdlib.h>


class Node
{
    public :
            int key;
            Node * next;
};


void insertBack(Node ** head, const int& key)
{
    Node * new_node = new Node();

    new_node->key = key;

    if(*head == NULL)
    {
        *head = new_node;
    }
    else
    {
         Node * temp = *head;
         while(temp->next != NULL)
         {
              temp = temp->next;
	 }
	 temp->next = new_node;
    }
}

void insertFront(Node ** head, const int& key)
{
    Node * new_node = new Node();

    new_node->key = key;

    new_node->next = *head;

    *head = new_node;
}

void print(Node ** head)
{
    Node * temp = *head;
    while(temp != NULL)
    {
        std::cout << temp->key <<"->" ;
	temp = temp->next;
    }
}

int main()
{
    Node * head = NULL;

    insertBack(&head, 50);
    insertBack(&head, 40);
    insertBack(&head, 30);
    insertBack(&head, 20);
    insertFront(&head, 90);
    insertFront(&head, 100);
    insertFront(&head, 120);
    print(&head);

}
