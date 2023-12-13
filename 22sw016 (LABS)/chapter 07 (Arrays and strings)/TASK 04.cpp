//start with a program that allows the user to input a number of integers, and then stores
//them in an int array. Write a function called maxint() that goes through the array,
//element by element, looking for the largest one. The function should take as arguments
//the address of the array and the number of elements in it, and return the index number of
//the largest element. The program should call this function and then display the largest
//element and its index number. (See the SALES program in this chapter.)


#include <iostream>

using namespace std;

int maxint(int* arr, int length) {
    int mx = arr[0], ind = 0;
    for (int i = 0; i < length; i++) {
        if (mx<arr[i]) {
            ind = i;
            mx = arr[i];
        }
    }
    return ind;
}


int main()
{
    int n;
    cout << "Number of elements in array: ";
    cin >> n;
    int foo[n];
    cout << "Input the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> foo[i];
    }
    int ans = maxint(foo, n);
    cout << "The maximum element of array: " << foo[ans] << '\n';
    cout << "The index of the maximum element: " << ans << '\n';


    return 0;
}
