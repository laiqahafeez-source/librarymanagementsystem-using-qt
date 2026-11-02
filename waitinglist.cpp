#include "WaitingQueue.h"

// Constructor
Queue::Queue()
{
    front = NULL;
    rear = NULL;
}

// Check whether Queue is empty
bool Queue::isEmpty()
{
    return front == NULL;
}

// Insert student at the rear
void Queue::enqueue(string name, string book)
{
    Node* newNode = new Node;

    newNode->studentName = name;
    newNode->bookName = book;
    newNode->next = NULL;

    if (front == NULL)
    {
        front = newNode;
        rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}

// Remove student from the front
bool Queue::dequeue()
{
    if (isEmpty())
    {
        return false;
    }

    Node* temp = front;

    front = front->next;

    if (front == NULL)
    {
        rear = NULL;
    }

    delete temp;

    return true;
}

// Return the first node
Node* Queue::getFront()
{
    return front;
}

// Destructor
Queue::~Queue()
{
    while (front != NULL)
    {
        Node* temp = front;
        front = front->next;
        delete temp;
    }

    rear = NULL;
}