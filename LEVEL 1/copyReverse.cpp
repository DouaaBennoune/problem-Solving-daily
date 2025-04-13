#include<iostream>
using namespace std;

int random_numbers_generator(int From , int To){
    int random_number= rand()% (To -From +1)+From;
    return random_number;

};
void fill_array_with_random_numbers(int arr[100], int &arrLength ){
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;
    for (int i =0 ; i <arrLength ; i++){
        arr[i]=random_numbers_generator(1,100);
    }

};
 void print_array(int arr[100], int &arrLength){
    for (int i =0 ; i <arrLength ; i++){
        cout<<arr[i]<<" ";
        
    }
    cout << "\n";
 }
 void CopyArrayInReverseOrder(int arrSource[100], int arrDestination[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        arrDestination[i] = arrSource[arrLength - 1 - i];
}

int main(){
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;
    int arr2[100];
    

    fill_array_with_random_numbers(arr, arrLength);
    cout << "Original array:\n";
    print_array(arr, arrLength);

    CopyArrayInReverseOrder(arr, arr2, arrLength);

    cout << "Array in reverse:\n";
    print_array(arr2, arrLength);

    return 0;

    
};
