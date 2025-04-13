#include<iostream>
using namespace std;

int random_numbers_generator(int From , int To){
    int random_number= rand()% (To -From +1)+From;
    return random_number;

};

void fill_array_with_ordered_numbers(int arr[100], int &arrLength ){
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;
    for (int i =0 ; i <arrLength ; i++){
        arr[i]=i+1;
    }

};
 void print_array(int arr[100], int &arrLength){
    for (int i =0 ; i <arrLength ; i++){
        cout<<arr[i]<<" ";
        
    }
    cout << "\n";
 }

void shuffle_array(int arr[100],int &arrLength){
     for (int i = arrLength-1 ; i>0;i--){
        int randomIndex =random_numbers_generator( 0 , i);
        int temp = arr[i];
        arr[i]=arr[randomIndex];
        arr[randomIndex]=temp;
     };
   
 };

int main(){
srand((unsigned)time(NULL));
int arr[100];
int arrLength;
fill_array_with_ordered_numbers(arr, arrLength) ;
    cout << "Array :\n";
    print_array(arr, arrLength);
    cout << "SHuffled Array :\n";
    shuffle_array(arr, arrLength);
    print_array(arr, arrLength);
    return 0;

};
