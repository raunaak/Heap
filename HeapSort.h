#ifndef HEAPSORT_H
#define HEAPSORT_H
using namespace std;

template<typename T>
void print(T* arr, int n);

template<typename T>
void maxHeapify(T* arr, int n, int k){
    // n = length of array
    // k = point of disturbance
    /* Algorithm
     * Subtrees of the root node are heaps
     * Get Largest of the root node, left child and right child
     * if largest is root, i am done
     * else swap largest and root, and continue on the new node
     */
    int largest = k;
    if(2*k+1<n&&arr[2*k+1]>arr[largest])largest = 2*k+1;
    if(2*k+2<n&&arr[2*k+2]>arr[largest])largest = 2*k+2;
    if(largest!=k){
        T temp = arr[k]; arr[k] = arr[largest]; arr[largest] = temp;
        maxHeapify(arr, n, largest);
    }
}

template<typename T>
void buildHeap(T* arr, int n){
    /* Algorithm
     * Go to every node which has atleast one child
     * Correct its position
     *      Get to the largest of node, left child and right child
     *      if largest is node, i am done
     *      else swap largest and node, and continue the process on the new node (largest)
     */
    for(int i=n/2; i>=0; i--)maxHeapify(arr, n, i);     
}

template<typename T>
void heapSort(T* arr, int n){
    buildHeap(arr, n);
    for(int i=n-1; i>=0; i--){
        T temp = arr[0]; arr[0] = arr[i]; arr[i] = temp;
        maxHeapify(arr,i,0);
    }
}

template<typename T>
void print(T* arr, int n){
    for(int i=0; i<n; i++)cout<<arr[i]<<" ";
    cout<<endl;
}
#endif /* HEAPSORT_H */

