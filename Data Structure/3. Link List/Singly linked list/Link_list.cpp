// ***Bismillahir Rahmanir Rahim***
// Date and Time: 26-01-2021 : 14:14:15
// Author-------: Sujon Hasan

/*

    ### using single link list all formula.
    1. append (data added last side)
    2. prepend (data added first side)
    3. insert (data added any space)
    4. search (any data seach link list)
    5. remove (any data remove this list)
    6. display (display all data in link list)

*/

#include <iostream>

using namespace std;

class Node
{
public:

    int data;
    Node *next;
    Node(/* args */);
    Node(Node *next, int data);
    Node* append(int data);
    Node* prepend(int data);
    Node* search(int pData);
    void insert(int pData, int data);
    Node* remove(int data);
    void display();
    ~Node();
};

Node::Node(/* args */)
{
}
Node::Node(Node *next, int data)
{
    this->data = data;
    this->next = next;
}

Node* Node::remove(int data)
{
    Node *Cnode = search(data);

    if (Cnode == this)
    {
        return Cnode->next;
    }

    Node *current_node = this;

    while (current_node->next != Cnode)
    {
        current_node = current_node->next;
    }
    
    current_node->next = Cnode->next;

    return this;
}

Node* Node::search(int pData)
{
    Node *node = this;

    while (node != NULL)
    {
        if (node->data == pData)
        {
            return node;
        }

        node = node->next;
        
    }

    return NULL; 
}

void Node::insert(int pData, int data)
{
    Node *Phead = search(pData);

    Node *new_node = new Node(Phead->next, data);

    if (this == Phead)
    {
        this->next = new_node;
        return;
    }

    Node* current_node =  this;

    while (current_node != NULL)
    {
        if (current_node == Phead)
        {
            break;
        }

        current_node = current_node->next;
        
    }

    current_node->next = new_node;
    
}

Node* Node::prepend(int data)
{
    Node* new_node = new Node(NULL, data);

    new_node->next = this;

    return new_node;
}

Node* Node::append(int data)
{
    Node *new_node = new Node(NULL, data);

    if (this == NULL)
    {
        return new_node;
    }
    
    Node* current_node =  this;

    while (current_node->next != NULL)
    {
        current_node = current_node->next;
    }
    
    current_node->next = new_node;

    return this;

}

void Node:: display()
{
    Node *temp = this;

    while (temp != NULL)
    {
        cout << "data = " << temp->data << "\n";
        temp = temp->next;
    }
    
}

Node::~Node()
{
}


int main()
{
    Node *head = NULL;

    head = head->append(10);
    head = head->append(20);
    head = head->append(30);
    head->insert(20, 25);
    head = head->prepend(5);
    head = head->prepend(3);
    head = head->remove(20);
    head = head->remove(5);

    head->display();

    return 0;
}