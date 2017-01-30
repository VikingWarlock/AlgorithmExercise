//
// Created by VKWK on 1/28/17.
//
#include "iostream"


//Swap two number
void swap(int &a, int &b) {
    int t;
    t = a;
    a = b;
    b = t;
}

void showArray(int *data,int size){
    for (int i=0;i<size;i++){
        printf(" %3d ",data[i]);
    }
    printf("\n");
}

void showArrayWithIndex(int *data,int size){
    for (int i = 0; i < size; i++) {
        printf("%4d", i + 1);
    }
    printf("\n");
    for (int j = 0; j < size; j++) {
        printf("%4d", data[j]);
    }
    printf("\n");

}