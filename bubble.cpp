#include<iostream>
using namespace std;
void swapping(int &a, int &b) {      //swap the content of a and b
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void bubbleSort(int arr[], int n){
   if (n == 1)
      return;
   for (int i=0; i<n-1; i++) //for each pass p
      if (arr[i] > arr[i+1]) //if the current element is greater than next one
   swap(arr[i], arr[i+1]); //swap elements
   bubbleSort(arr, n-1);
}
int main() {
    int sz;
   cout<<"Enter the size of array::";
   cin>>sz;
   int randArray[sz];
   for(int i=0;i<sz;i++)
      randArray[i]=rand()%1000;  //Generate number between 0 to 99

   cout << "Array before Sorting: ";
   display(randArray, sz);
   bubbleSort(randArray, sz);
   cout << "Array after Sorting: ";
   display(randArray, sz);
   return 0;
}
