#include <iostream>
#include "basicActions.h"
using namespace std;

Node *recDis(Node *head)
{
    if (!head)
        return nullptr;

    cout << head->data << " ";
    recDis(head->next);
}

int main()
{
    Node *head = nullptr;
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);
    insertAtEnd(head, 50);

    recDis(head);
}
