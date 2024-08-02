#include <iostream>
#include <conio.h>

using namespace std;

class Heap
{
private:
    /* data */
public:

    int *heap;
    int heap_size;

    Heap(int heap_size);
    void Creat_heap();
    void build_max_heap();
    void max_heapify(int i);
    void heap_sort();
    int left(int i);
    int right(int i);
    void display();
    ~Heap();
};

Heap::Heap(int heap_size)
{
    this->heap_size = heap_size;
    this->heap = new int[heap_size];
}

void Heap::heap_sort()
{
    int t;

    for (int i = this->heap_size; i > 1; i--)
    {
        t = this->heap[1];
        this->heap[1] = this->heap[i];
        this->heap[i] = t;

        heap_size -= 1;

        max_heapify(1);      
    }
    
}

void Heap::display()
{
    for (int i = 1; i <= heap_size; i++)
    {
        cout << heap[i] << " ";
    }
    
}

void Heap::build_max_heap()
{
    int i;

    for ( i = heap_size / 2; i >= 1; i--)
    {
        max_heapify(i);
    }
    
}

void Heap::max_heapify(int i)
{
    int l, r, learge, t;

    l = left(i);
    r = right(i);

    if (l <= this->heap_size && heap[l] > heap[i])
    {
        learge = l;
    }
    else
    {
        learge = i;
    }
    
    if (r <= this->heap_size && heap[r] > heap[learge])
    {
        learge = r;
    }

    if (learge != i)
    {
        t = heap[i];
        heap[i] = heap[learge];
        heap[learge] = t;

        max_heapify(learge);
    }
    
}

int Heap::left(int i)
{
    return i * 2;
}

int Heap:: right(int i)
{
    return (i *2) + 1;
}

void Heap::Creat_heap()
{
    // int A[] = {0, 12, 7, 1, 3, 10, 17, 19, 2, 5};

    for (int i = 0; i <= heap_size; i++)
    {
        this->heap[i] = (rand() % 20) + 1;
    }
    
}

Heap::~Heap()
{
}


int main()
{
    int heap_size = 9;
    Heap heap(heap_size);
    heap.Creat_heap();

    cout << "befor heap = ";
    heap.display();
    cout << '\n';
    
    heap.build_max_heap();
    cout << "after heap =  ";
    heap.display();

    cout << '\n';

    cout << "Sorting heap = ";
    heap.heap_sort();
    heap.heap_size =heap_size;
    heap.display();

    return 0;
}