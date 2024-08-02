// ***Bismillahir Rahmanir Rahim***
// Date and Time: 26-02-2021 : 21:03:15
// Author-------: Sujon Hasan

#include <iostream>

using namespace std;

class Node
{
private:
    /* data */
public:
    int data;
    Node *next;
    Node(/* args */);
    Node(int data, Node *next);
    Node *prepend(int data);
    Node *append(int data);
    void insert(int before_data, int data);
    Node *search(int data);
    Node *remove(int data);
    int count_node();
    void display();
    ~Node();
};

Node::Node(/* args */)
{
}

Node *Node::remove(int data)
{
    Node *c_node = search(data);

    if (c_node == NULL)
    {
        cout << "remove data not present here\n";
    }
    else
    {
        if (c_node == this)
        {
            return c_node->next;
        }

        Node *temp = this;

        while (temp->next != c_node)
        {
            temp = temp->next;
        }

        temp->next = c_node->next;

        return this;
    }
}

int Node::count_node()
{
    Node *temp = this;
    int count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

Node::Node(int data, Node *next)
{
    this->data = data;
    this->next = next;
}

Node *Node::search(int data)
{
    Node *temp = this;

    while (temp != NULL)
    {
        if (temp->data == data)
        {
            return temp;
        }

        temp = temp->next;
    }

    return temp;
}

void Node::insert(int before_data, int data)
{
    Node *c_node = search(before_data);

    if (c_node == NULL)
    {
        cout << "data is not present here\n";
    }
    else
    {
        Node *new_node = new Node(data, NULL);

        new_node->next = c_node->next;
        c_node->next = new_node;
    }
}

void Node::display()
{
    Node *temp = this;

    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

Node *Node::prepend(int data)
{
    Node *new_node = new Node(data, NULL);

    if (this == NULL)
    {
        return new_node;
    }

    new_node->next = this;
    return new_node;
}

Node *Node::append(int data)
{

    Node *new_node = new Node(data, NULL);

    if (this == NULL)
    {
        return new_node;
    }

    Node *current_node = this;

    while (current_node->next != NULL)
    {
        current_node = current_node->next;
    }

    current_node->next = new_node;

    return this;
}

Node::~Node()
{
}

int main()
{
    Node *head = NULL;

    head = head->append(50);
    head = head->prepend(30);
    head = head->prepend(20);
    head = head->prepend(10);
    head = head->remove(10);
    head = head->append(40);
    head->insert(50, 60);

    Node *node = head->search(5);

    if (node == NULL)
    {
        cout << "Search data not present here\n";
    }
    else
    {
        cout << "node data = " << node->data << endl;
    }

    head->display();

    int count = head->count_node();

    cout << "total data = " << count << endl;

    return 0;
}