#include <cstddef>
#include <iostream>
#include "BinaryHeap.h"
using namespace std;

int main() {
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
    
    return 0;
}

