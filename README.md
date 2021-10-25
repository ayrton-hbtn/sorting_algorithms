# 0x1B. C - Sorting algorithms & Big O

## Requirements

### General

-   Allowed editors:  `vi`,  `vim`,  `emacs`
-   All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
-   This code uses the  `Betty`  style. It will be checked using  [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl")  and  [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   Global variables are not used
-   No more than 5 functions per file
-   A list/array does not need to be sorted if its size is less than 2.

## Tasks

### 0. Bubble sort

Function that sorts an array of integers in ascending order using the  [Bubble sort](https://intranet.hbtn.io/rltoken/fCItpIfgmE07fFbHBUToeg "Bubble sort")  algorithm

-   Prototype:  `void bubble_sort(int *array, size_t size);`
-   Print the  `array`  after each time a swap occurs.

The file  `0-O`, contains the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:

-   in the best case
-   in the average case
-   in the worst case

### 1. Insertion sort
Function that sorts a doubly linked list of integers in ascending order using the  [Insertion sort](https://intranet.hbtn.io/rltoken/4ueB1I1MkNypoTBXR0YX3g "Insertion sort")  algorithm

-   Prototype:  `void insertion_sort_list(listint_t **list);`
-   It is not allowed to modify the integer  `n`  of a node.
-   The  `list` will be printed after each timea swap occurs 

The file  `1-O` contains the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:

-   in the best case
-   in the average case
-   in the worst case

### 2. Selection sort
Function that sorts an array of integers in ascending order using the  [Selection sort](https://intranet.hbtn.io/rltoken/_DodgdySm5bPerpQm1LhwQ "Selection sort")  algorithm

-   Prototype:  `void selection_sort(int *array, size_t size);`
-  The  `array` will be printed after each time a swap occurs 

The file  `2-O` contains the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:

-   in the best case
-   in the average case
-   in the worst case

### 3. Quick sort

Function that sorts an array of integers in ascending order using the  [Quick sort](https://intranet.hbtn.io/rltoken/VoeZ2Hwp4Q0piTJ3OODY3w "Quick sort")  algorithm

-   Prototype:  `void quick_sort(int *array, size_t size);`
-   The  `Lomuto`  partition scheme is implemented.
-   The pivot should always be the last element of the partition being sorted.
-   The  `array` will be printed after each time a swap occurs.

The file  `3-O` contains the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

-   in the best case
-   in the average case
-   in the worst case

### 4. Shell sort - Knuth Sequence

Function that sorts an array of integers in ascending order using the  [Shell sort](https://intranet.hbtn.io/rltoken/n1R5L9_ySu3ZE7JqIqIM0Q "Shell sort")  algorithm, using the  `Knuth sequence`

-   Prototype:  `void shell_sort(int *array, size_t size);`
-   The following sequence of intervals (a.k.a the Knuth sequence) is used:
    -   `n+1 = n * 3 + 1`
    -   `1, 4, 13, 40, 121, ...`
-   The  `array` will be printed each time the interval decreases.

