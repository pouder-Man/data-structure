//
// Created by vkdne on 2018-02-01.
//

#include "MaxHeap.h"

//heapSort
void heapSort(int* a, int n){
    MaxHeap heap;
    for(int i = 0 ; i < n ; i++){
        heap.insert(a[i]);
    }

    for(int i = n-1 ; i>-1 ; i--){
        a[i] = heap.remove().getKey();
    }
}

int main(){

    MaxHeap heap;
    //insert,remove,print
    heap.insert(10);
    heap.insert(17);
    heap.insert(13);
    heap.insert(4);
    heap.insert(14);
    heap.insert(9);
    heap.insert(11);
    heap.insert(1);
    heap.insert(2);
    heap.insert(3);

    heap.display();
    cout<<endl;
    heap.remove();
    heap.display();
    cout<<endl;
    heap.remove();
    heap.display();
    cout<<endl<<endl;

    //heapsort
    int arr[10];
    for(int i = 0 ; i < 10 ; i++ )
        arr[i] = rand()%100;

    cout << "heap sort!!"<<endl;
    cout << "before sort"<<endl;
    for(int i = 0 ; i < 10 ; i++ )
        cout<< arr[i] << " ";
    cout<<endl;

    heapSort(arr,10);
    cout << "after sort"<<endl;
    for(int i = 0 ; i < 10 ; i++ )
        cout<< arr[i] << " ";
    cout<<endl;

    return 0;
}