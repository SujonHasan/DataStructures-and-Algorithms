// ***Bismillahir Rahmanir Rahim***
// Date and Time: 27-02-2021 : 16:14:51
// Author-------: Sujon Hasan

#include <iostream>

using namespace std;

class Node
{
private:
    /* data */
public:
    int data;
    Node *pre;
    Node *next;
    Node(Node *pre, int data, Node *next);
    Node *prepend(int item);
    Node *append(int item);
    Node *search(int item);
    Node *remove(int item);
    void insert(int beforedata, int item);
    void display();
    void reverse_display();
    Node(/* args */);
    ~Node();
};

Node::Node(/* args */)
{
}

Node* Node:: remove(int item)
{
    Node* c_node = search(item);

    if (c_node == NULL)
    {
        cout << "data is not present here\n";
    }
    else
    {
        if (c_node == this)
        {
            c_node->next->pre = NULL;
            return c_node->next;
        }
        else if(c_node->next == NULL)
        {
            c_node->pre->next = NULL;
            return this;
        }
        else
        {
            c_node->pre->next = c_node->next;
            c_node->next->pre = c_node->pre;
            return this;
        }
    }
    
}

void Node:: reverse_display()
{
    Node *temp = this;

    while (temp->next !=  NULL)
    {
        temp = temp->next;
    }

    cout << "reverse : \n";

    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->pre;
    }
    
}

void Node::display()
{
    Node *temp = this;

    if (temp == NULL)
    {
        cout << "Doubly linked list is empty\n";
    }

    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

Node::Node(Node *pre, int data, Node *next)
{
    this->data = data;
    this->pre = pre;
    this->next = next;
}

Node *Node::search(int item)
{
    Node *temp = this;

    while (temp != NULL)
    {
        if (temp->data == item)
        {
            return temp;
        }

        temp = temp->next;
    }

    return temp;
}

void Node::insert(int beforedata, int item)
{
    Node *c_node = search(beforedata);

    if (c_node == NULL)
    {
        cout << "before data not present here\n";
    }
    else
    {
        Node *new_node = new Node(NULL, item, NULL);

        if (c_node->next == NULL)
        {
            c_node->next = new_node;
            new_node->pre = c_node;
        }
        else
        {
            c_node->next->pre = new_node;
            new_node->next = c_node->next;
            c_node->next = new_node;
            new_node->pre = c_node;
        }
    }
}

Node *Node::append(int item)
{
    Node *new_node = new Node(NULL, item, NULL);

    if (this == NULL)
    {
        return new_node;
    }

    Node *temp = this;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = new_node;
    new_node->pre = temp;

    return this;
}

Node *Node::prepend(int item)
{
    Node *new_node = new Node(NULL, item, this);

    if (this == NULL)
    {
        return new_node;
    }

    new_node->next->pre = new_node;
    return new_node;
}

Node::~Node()
{
}

int main()
{
    Node *head = NULL;

    head = head->prepend(30);
    head = head->prepend(20);
    head = head->prepend(10);
    head->insert(30, 15);
    head = head->append(40);

    cout << "data  = " << head->next->next->data << endl;

    head = head->remove(40);

    head->display();

    head->reverse_display();

    return 0;
}