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
 void CopyArray(int arrSource[100], int arrDestination[100], int arrLength)
 {
     // Loop through each element up to arrLength and copy from source to destination.
     for (int i = 0; i < arrLength; i++)
         arrDestination[i] = arrSource[i];
 }

int main(){
srand((unsigned)time(NULL));
int arr[100];
int arrLength ;5

int arr2[100];
fill_array_with_random_numbers(arr,arrLength);
print_array(arr,arrLength);
CopyArray(arr,arr2,arrLength);
cout<<"the copy array  is : " ;
print_array(arr2,arrLength);
return 0;
};
