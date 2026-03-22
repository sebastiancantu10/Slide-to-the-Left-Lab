#include "slide.hpp"
#include <iostream>

using namespace std;

// function to shift array elements to the left
void arrayShift(int arr[], int size, int shifts) {
   if (size <= 0) return;         // nothing to do if empty
   shifts = shifts % size;        // handle shifts >= size

   for (int i = 0; i < shifts; i++) {
      int first = arr[0];        // store first element temporarily

      // shift all elements left by 1
      for (int j = 0; j < size - 1; j++) {
         arr[j] = arr[j + 1];
      }

      arr[size - 1] = first;     // put first element at the end
   }
}
