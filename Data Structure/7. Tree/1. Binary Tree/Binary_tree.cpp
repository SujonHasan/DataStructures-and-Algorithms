    // ***Bismillahir Rahmanir Rahim***
// Date and Time: 28-02-2021 : 21:14:41
// Author-------: Sujon Hasan

#include <iostream>

using namespace std;

class Tree
{
private:
    /* data */
public:

    int data;
    Tree *left;
    Tree *right;
    Tree(int data, Tree *left, Tree *right);
    Tree *create_tree();
    Tree(/* args */);
    ~Tree();
};

Tree::Tree(int data, Tree *left, Tree *right)
{
    this->data = data;
    this->left = left;
    this->right = right;
}

void add_left_child(Tree *Node, Tree *child)
{
    Node->left = child;
}

void add_right_child(Tree *Node, Tree *child)
{
    Node->right = child;
}

Tree* Tree::create_tree()
{
    Tree *two = new Tree(2, NULL, NULL);
    Tree *seven = new Tree(7, NULL, NULL);
    Tree *nine = new Tree(9, NULL, NULL);
    add_left_child(two, seven);
    add_right_child(two, nine);
    Tree *one = new Tree(1, NULL, NULL);
    Tree *six = new Tree(6, NULL, NULL);
    add_left_child(seven, one);
    add_right_child(seven, six);
    Tree *five = new Tree(5, NULL, NULL);
    Tree *ten = new Tree(10, NULL, NULL);
    add_left_child(six, five);
    add_right_child(six, ten);
    Tree *eight = new Tree(8, NULL, NULL);
    Tree *three = new Tree(3, NULL, NULL);
    Tree *four = new Tree(4, NULL, NULL);
    add_right_child(nine, eight);
    add_left_child(eight, three);
    add_right_child(eight, four);

    return two;
}

Tree::~Tree()
{
}

void pre_order(Tree *Node)
{
    cout << Node->data << " " ;

    if (Node->left != NULL)
    {
        pre_order(Node->left);
    }

    if(Node->right != NULL)
    {
        pre_order(Node->right);
    }
    
}

void post_order(Tree *Node)
{
    if (Node->left != NULL)
    {
        post_order(Node->left);
    }

    if (Node->right != NULL)
    {
        post_order(Node->right);
    }
    
    cout << Node->data << " ";
    
}

void in_order(Tree *Node)
{
    if(Node->left != NULL)
    {
        in_order(Node->left);
    }

    cout << Node->data << " ";

    if(Node->right != NULL)
    {
        in_order(Node->right);
    }
}

int Claculate_hight(Tree *Node)
{
    if(Node == 0)
    {
        return 0;
    }

    int left_hight = Claculate_hight(Node->left);
    int right_hight = Claculate_hight(Node->right);

    if(left_hight > right_hight)
    {
        return (left_hight + 1);
    }
    else
    {
        return (right_hight + 1);
    }
}

int main()
{
    Tree *root = root->create_tree();

    cout << "Root node = "<< root->data << endl;

    cout << "pre order : \n";
    pre_order(root);

    cout << "\npost order : \n";

    post_order(root);

    cout << "\nIn order : \n";
    in_order(root);
    cout << endl;

    int tree_hight = Claculate_hight(root);
    cout << "tree hight = " << tree_hight << endl;

    return 0;
}
