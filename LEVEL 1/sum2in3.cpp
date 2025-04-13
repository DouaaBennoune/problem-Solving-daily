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
 bool is_prime(int number ){
    if (number < 2) return false; 
    int M=number/2;
    for (int i = 2; i <= M; i++){
            if((number%i)==0){
                return  false;
            };
        };
        return  true;
 };

 void sum_of_2_arrays(int arr1[100], int arr2[100],int arr3[100], int arr1Length, int arr2Length,int &arr3Length) {
    arr3Length = 0; 
    
    for (int i = 0; i < arr1Length; i++) {
        
            arr3[arr3Length]=arr1[i] + arr2[i];
            arr3Length++;
        
    
 
};

}

int main(){
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;
    int arr2[100];
    int arr2Length;
    int arr3[100];
    int arr3Length;
    fill_array_with_random_numbers(arr, arrLength);
    fill_array_with_random_numbers(arr2, arr2Length);
    cout << "Original array1:\n";
    print_array(arr, arrLength);
    cout << "Original array2:\n";
    print_array(arr2, arr2Length);
    sum_of_2_arrays(arr, arr2,arr3, arrLength, arr2Length,arr3Length);

    cout << "Array with sum of array 1 and 2:\n";
    print_array(arr3, arr3Length);

    return 0;


    
};
