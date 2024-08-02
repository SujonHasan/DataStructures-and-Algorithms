#include<iostream>
#include <conio.h>

using namespace std;

class node
{
private:
    /* data */
public:

    int data;
    node *parent;
    node *left;
    node *right;
    node(/* args */);
    node(int data, node *parent, node *left, node *right);
    node *insert(node *root, node *child);
    node *bst_transplant(node *root, node *current_node, node *new_node);
    node *bst_delete(node* root, node* remove_node);
    void add_left_child(node *root, node *child);
    void add_right_child(node *root, node *child);
    node *max_node(node* root);
    node *min_node(node* root);
    node *search(int item);
    ~node();
};

node::node(/* args */)
{
}

node* node::bst_delete(node* root, node* remove_node)
{
    node *smallest_node;

    if (remove_node->left == NULL)
    {
        root = root->bst_transplant(root, remove_node, remove_node->right);
    }
    else if(remove_node->right == NULL)
    {
        root = root->bst_transplant(root, remove_node, remove_node->left);
    }
    else
    {
        smallest_node = min_node(remove_node->right);

        if (smallest_node->parent != remove_node)
        {
            root = root->bst_transplant(root, smallest_node, smallest_node->right);
            add_right_child(smallest_node, remove_node->right);
        }
        
        root = root->bst_transplant(root, remove_node, smallest_node);

        add_left_child(smallest_node, remove_node->left);
    }
    
    // delete smallest_node;

    return root;
}

node* node::bst_transplant(node *root, node *current_node, node *new_node)
{
    if (root == current_node)
    {
        return new_node;
    }
    else if(current_node == current_node->parent->left)
    {
        add_left_child(current_node->parent, new_node);
    }
    else
    {
        add_right_child(current_node->parent, new_node);
    }

    return root;
    
}

node* node::max_node(node *root)
{
    node *temp = root;

    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    
    return temp;
}

node* node::min_node(node *root)
{
    node *temp = root;

    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    
    return temp;
}

node* node::search(int item)
{
    node *temp = this;

    while (temp != NULL)
    {
        if (item == temp->data)
        {
            return temp;
        }
        
        if (item < temp->data)
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }   
    }

    return temp;
    
}

void node::add_left_child(node *root, node *child)
{
    root->left = child;

    if (child != NULL)
    {
        child->parent = root;
    }
    
}

void node::add_right_child(node *root, node *child)
{
    root->right = child;

    if (child != NULL)
    {
        child->parent = root;
    }
    
}

node* node::insert(node *root, node *child)
{
    if (root == NULL)
    {
        return child;
    }

    node *parent;
    node *current_node;

    parent = NULL;

    current_node = root;

    while (current_node != NULL)
    {
        parent = current_node;

        if (child->data < current_node->data)
        {
            current_node = current_node->left;
        }
        else
        {
            current_node = current_node->right;
        }
        
    }

    if (parent->data > child->data)
    {
        add_left_child(parent, child);
    }
    else
    {
        add_right_child(parent, child);
    } 

    return root;

}

node::node(int data, node *parent, node *left, node *right)
{
    this->data = data;
    this->parent = parent;
    this->left = left;
    this->right = right;
}

node::~node()
{
}

void inOrder(node *root)
{
    if(root->left != NULL)
    {
        inOrder(root->left);
    }

    cout << root->data << " ";

    if(root->right != NULL)
    {
        inOrder(root->right);
    }
}

int main()
{
    node *root = new node(10, NULL, NULL, NULL);
    // node *new_node;

    int array[] =  {5, 17, 3, 7, 12, 19, 1, 4};

    for (int i = 0; i < 8; i++)
    {
        node *new_node = new node(array[i], NULL, NULL, NULL);

        root = root->insert(root, new_node);
    }
    
    // cout << root->data << endl;
    cout <<  "before remove = \n";
    inOrder(root);

    cout << "\n";

    node *search_node = root->search(17);

    if (search_node != NULL)
    {
        cout <<"Search value found . value is = "<< search_node->data << endl;
        root = root->bst_delete(root, search_node);
        cout << "after deleted\n";
        inOrder(root);
    }
    else
    {
        cout << "Value can't presen here \n";
    }

    // node *max = root->max_node(root);

    // node *min = root->min_node(root);

    // cout << "\nmax node data = " << max->data << endl;   
    // cout << "min node data = " << min->data << endl;   

}