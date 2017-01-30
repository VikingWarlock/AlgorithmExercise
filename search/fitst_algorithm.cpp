//
// Created by VKWK on 1/28/17.
//

#include "iostream"
#include "../common.h"
#include "first_algorithm.h"

#define Target 5

int testList[20] = {17, 13, 15, 4, 12, 1, 2, 16, 7, 3, 18, 9, 8, 11, 5, 6, 10, 14, 20, 19};
int targetNumber;


int current_index = 0;
int originData[20]={-1};


//Initialize operation data
void setupData() {
    memcpy(originData, testList, 20* sizeof(int));
};

int search(int *data, int from, int to) {
    int i, j=0;
    int standard=data[to];
    for (i=from;i<to;i++){
        if(data[i]<standard){
            j++;
            swap(data[from+j-1],data[i]);
            if (DEBUG)
                showArray(data,20);
        }
    }
    swap(data[from+j],data[to]);
    if (from+j<targetNumber){
        return search(data,from+j+1,to);
    }else if (from+j>targetNumber){
        return search(data,from,from+j-1);
    } else
        return from+j;
}


void VKSelectHelper::first_algorithm_with_target(int _target) {
    targetNumber=_target-1;
    setupData();
    int position = search(originData, 0, 19);
    printf("The %d Min Target is %d\n",_target, originData[position]);
}

void VKSelectHelper::first_algorithm() {
    first_algorithm_with_target(Target);
}

void VKSelectHelper::first_algorithm_self_test(){
    for (int i=1;i<=20;i++){
        first_algorithm_with_target(i);
    }
}