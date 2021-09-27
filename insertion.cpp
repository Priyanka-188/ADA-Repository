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
void insertionSort(int arr[], int n)
{
   for(int i=1;i<n;i++)
   {
       int temp = arr[i];
       int j= i-1;
       while(j>=0 && arr[j]>temp)
       {
           arr[j+1]=arr[j];
           j--;
       }
       arr[j+1]=temp;
          }
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
   insertionSort(randArray, sz);
   cout << "Array after Sorting: ";
   display(randArray, sz);
   return 0;
}
