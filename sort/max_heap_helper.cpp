//
// Created by VKWK on 1/30/17.
//

#include "max_heap_helper.h"
#include "iostream"
#include "math.h"
#include "../common.h"

#pragma Private Methods

int VKHeap::left(int index) {
    return index << 1;
}

int VKHeap::right(int index) {
    return (index << 1) + 1;
}

int VKHeap::parent(int index) {
    return index >> 1;
}


void VKHeap::heap_maxify(int position) {
    if (position < 0 || position > this->size) {
        printf("Bad Address Access\n");
        return;
    }
    int largest = position;
    int left = this->left(position);
    if (left < this->size && this->data[left] > this->data[largest]) {
        largest = left;
    }
    int right = this->right(position);
    if (right < this->size && this->data[right] > this->data[largest]) {
        largest = right;
    }
    if (largest != position) {
        swap(this->data[position], this->data[largest]);
        heap_maxify(largest);
    }
}


#pragma Public Methods

VKHeap VKHeap::setup_heap(int *data, int s) {
    VKHeap object = VKHeap();
    object.size = s;
    memcpy(object.data, data, sizeof(int) * s);
    if (DEBUG) {
        printf("Origin Data is:\n");
        object.show_heap();
    }
    for (int i = s; i >= 0; i--) {
        object.heap_maxify(i);
    }
    return object;
}


void VKHeap::show_heap() {
    showArrayWithIndex(this->data,this->size);
}

VKHeap::~VKHeap() {

}

int VKHeap::height() {
    return 1 + (int) log2f(this->size);
}

void VKHeap::heap_sort(int *result) {
    //Backup Environment
    int backup_size = this->size;
    int *backup_data=(int*)malloc(sizeof(int)*backup_size);
    memcpy(backup_data,this->data,backup_size* sizeof(int));
    //Heap Sort
    for (int i = this->size-1; i >0 ; i--) {
        swap(this->data[0],this->data[i]);
        this->size--;
        heap_maxify(0);
    }
    //Assign the result to the pointer
    memcpy(result,this->data, sizeof(int)*backup_size);
    //Restore the original environment
    memcpy(this->data,backup_data, sizeof(int)*backup_size);
    this->size=backup_size;
    //Memory Dealloc
    free(backup_data);
}


void VKHeapHelper::heap_setup_test() {
    int vkheap_test_data[20] = {12, 74, 23, 67, 36, 11, 8, 3, 6, 123, 68, 366, 45, 61, 14, 66, 45, 99, 10, 1};
    VKHeap heap = VKHeap::setup_heap(vkheap_test_data, 20);
    printf("Heap Data After Setting up:\n");
    heap.show_heap();
    int sorted[20]={0};
    heap.heap_sort(sorted);
    printf("Sorted Heap is\n");
    showArrayWithIndex(sorted,20);
}
