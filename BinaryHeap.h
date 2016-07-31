#ifndef BINARYHEAP_H
#define BINARYHEAP_H
#include <string>
using namespace std;
template<class T>
class BinaryHeap{
    T* arr;
    int size;
    int capacity;
public:
    BinaryHeap();
    BinaryHeap(int capacity);
    void insert(const T& value);
    T& deleteMin();
    void minHeapify(int index);
    void print();
    int parent(int i);
    int left(int i);
    int right(int i);
};

template<class T>
BinaryHeap<T>::BinaryHeap(){
    arr = new T[10];
    size = 0;
    capacity = 10;
}

template<class T>
BinaryHeap<T>::BinaryHeap(int n){
    arr = new T[n];
    size = 0;
    capacity = n;
}

template<class T>
void BinaryHeap<T>::insert(const T& value){
    if(size==capacity)throw string("heap is full\n");
    size++;
    arr[size-1]=value;
    int i=size;
    while(i>0){
        if(arr[parent(i)]<=arr[i])return;
        T temp = arr[parent(i)]; arr[parent(i)]=arr[i]; arr[i]= temp;
        i=parent(i);
    }
}

template<class T>
T& BinaryHeap<T>::deleteMin(){
    if(size==0)throw string("heap is empty\n");
    T temp = arr[size-1]; arr[size-1] = arr[0]; arr[0] = temp;
    size--;
    minHeapify(0);
    return arr[size];
}

template<class T>
void BinaryHeap<T>::minHeapify(int i){
    if(i>=size)return;
    int smallest = i;
    if(left(i)<=size&&arr[smallest]>arr[left(i)])smallest = left(i);
    if(right(i)<=size&&arr[smallest]>arr[right(i)])smallest = right(i);    
    if(smallest!=i){
    T temp = arr[smallest]; arr[smallest]=arr[i]; arr[i]=temp;
    minHeapify(smallest);
    }
}

template<class T>
void BinaryHeap<T>::print(){
    for(int i=0; i<size; i++)cout<<arr[i]<<" ";
    cout<<endl;
}

template<class T>
int BinaryHeap<T>::parent(int i){
    return (i%2==0?i/2-1:i/2);
}

template<class T>
int BinaryHeap<T>::left(int i){
    return 2*i+1;
}

template<class T>
int BinaryHeap<T>::right(int i){
    return 2*i+2;
}
#endif /* BINARYHEAP_H */