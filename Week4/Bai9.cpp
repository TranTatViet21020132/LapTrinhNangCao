#include <iomanip>
#include <algorithm>
#include <math.h>
void sortAscending(float array[], int size) {
    sort(array, array + size);
}

void reverseArray(float array[], int size) {
    sort(array, array + size, greater<float>());
}

void sort(float array[], int size, bool isAscending) {
    if (isAscending == true) {
        sortAscending(array, size);
    } else {
        reverseArray(array, size);
    }
}
