//
// Created by VKWK on 1/28/17.
//

#ifndef ALGORITHMS_COMMON_H
#define ALGORITHMS_COMMON_H

#define DEBUG 1

/**
 * Just Swap Two Int
 */
void swap(int &a,int &b);

/**
 * Print An Array with format below
 * Example:
 * 1   3   6   8  10  11  12  14  23  36  45  45  61  66  67  68  74  99 123 366
 * @param data : Array to print
 * @param size : Size of the Array
 */
void showArray(int *data,int size);

/**
 * Print An Array with format below
 * Example:
 * 1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19  20
 * 1   3   6   8  10  11  12  14  23  36  45  45  61  66  67  68  74  99 123 366
 * @param data : Array to print
 * @param size : Size of the Array
 */
void showArrayWithIndex(int *data,int size);

#endif //ALGORITHMS_COMMON_H
