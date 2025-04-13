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

 void CopyOnlyPrimaryNumbers(int arrSource[100], int arrDestination[100], int arrLength, int &arr2Length) {
    arr2Length = 0; // Initialize the length of the destination array
    for (int i = 0; i < arrLength; i++) {
        if (is_prime(arrSource[i])) {
            arrDestination[arr2Length] = arrSource[i];
            arr2Length++;
        }
    }
}

int main(){
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;
    int arr2[100];
    int arr2Length;

    fill_array_with_random_numbers(arr, arrLength);
    cout << "Original array:\n";
    print_array(arr, arrLength);

    CopyOnlyPrimaryNumbers(arr, arr2, arrLength, arr2Length);

    cout << "Array with only prime numbers:\n";
    print_array(arr2, arr2Length);

    return 0;


    
};
