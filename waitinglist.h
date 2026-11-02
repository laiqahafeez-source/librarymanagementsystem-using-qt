#ifndef WAITINGQUEUE_H
#define WAITINGQUEUE_H

#include <iostream>
#include <string>

using namespace std;

struct Node
{
    string studentName;
    string bookName;
    Node* next;
};

struct Queue
{
    Node* front;
    Node* rear;

    Queue();

    void enqueue(string name, string book);
    bool dequeue();
    bool isEmpty();
    Node* getFront();

    ~Queue();
};

#endif