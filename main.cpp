#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n)
{
    for (int i = 0; i < (n / 2); i++)
    {
        swap(arr[i], arr[n - i - 1]);
    }
}
void minNum(int arr[], int n)
{
    int minVal = arr[0];  // Assume the first element is the min
    for (int i = 1; i < n; i++)  // Start checking from the second element
    {
        if (arr[i] < minVal) 
        {
            minVal = arr[i];
        }
    }
    cout << "Minimum number: " << minVal << endl;
}
//Finding max number in the array
void maxNum(int arr[], int n)
{
    int maxVal = arr[0];  // Assume the first element is the max
    for (int i = 1; i < n; i++)  // Start checking from the second element
    {
        if (arr[i] > maxVal) 
        {
            maxVal = arr[i];
        }
    }
    cout << "Maximum number: " << maxVal << endl;
}
void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<"Array is"<< arr[i];
    }
}

int main()
{
    int n = 6;
    int arr[6] = {1, 2, 3, 4, 5, 6};
    reverse(arr, n);
    for (auto i : arr)
    {
        cout << i << endl;
    }
    return 0;
}