//
// Created by VKWK on 1/30/17.
//

#ifndef ALGORITHMS_MAX_HEAP_HELPER_H
#define ALGORITHMS_MAX_HEAP_HELPER_H

#define HEAP_SIZE 10


class VKHeap{
public:
    static VKHeap setup_heap(int *data,int s);
    int height();
    void show_heap();
    void heap_sort(int *result);
    ~VKHeap();
private:
    int data[30];
    int size;
    int left(int index);
    int right(int index);
    int parent(int index);
    void heap_maxify(int position);
};



class VKHeapHelper{
public:
    /**
     * This Test Method Contains Procedures Below:
     * 1.Initialize a heap with test data
     * 2.Use heap sort to get a sorted Array
     */
    static void heap_setup_test();
};

#endif //ALGORITHMS_MAX_HEAP_HELPER_H
