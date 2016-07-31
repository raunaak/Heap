#include <cstddef>
#include <iostream>
#include "BinaryHeap.h"
#include "HeapSort.h"
using namespace std;

int main() {
    
    int a[7] = {65,23,64,67,21,86,32};
    heapSort(a, 7);
    print(a, 7);
    
    /* Basic operations on heap
    BinaryHeap<int>* heap = new BinaryHeap<int>();
    heap->insert(6); heap->print();
    heap->insert(4); heap->print();
    heap->insert(7); heap->print();
    heap->deleteMin(); heap->print();
    heap->insert(8); heap->print();
    heap->insert(3); heap->print();
    heap->deleteMin(); heap->print();
    heap->insert(5); heap->print();
    heap->deleteMin(); heap->print();
    */
    return 0;
}

