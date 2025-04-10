#include <iostream>
using namespace std;

int randomnumber(int To,int From  ) {
    int randnum = rand() % (To - From + 1) + From;
    return randnum;
}
void fillARRAYwithRANDOMnumbers(int arr[100],int &arrLength) {

    cout << "\nEnter number of elements : \n";
    cin >> arrLength;
    for (int i = 0;i < arrLength;i++) {
        arr[i] = randomnumber(1, 100);
    }
}
 void PrintArray(int arr[100], int arrLength)
    {
        
        for (int i = 0; i < arrLength; i++)
            cout << arr[i] << " ";

        cout << "\n";  
    }
 int findminnumber(int arr[100],int arrLength) {
     int Min = arr[0];
     for (int  i = 0;i < arrLength;i++) {
         if (arr[i] < Min) {
             Min = arr[i];
         }
     }
     return Min;
}


int main()
{
    srand((unsigned)time(NULL));
    int arr[100];
    int arrLength;
    fillARRAYwithRANDOMnumbers(arr, arrLength);
    cout << "\nArray Elements: ";
    PrintArray(arr, arrLength);
    cout << "\nMin Number is : ";
    cout << findminnumber(arr, arrLength) << endl;
    return 0;
}
