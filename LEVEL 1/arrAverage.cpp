#include<iostream>
using namespace std;

int random_numbers_generator(int From , int To){
    int random_number= rand()% (To -From +1)+From;
    return random_number;

};
void fill_array_with_random_numbers(int arr[100], int &arrLength ){
    for (int i =0 ; i <arrLength ; i++){
        arr[i]=random_numbers_generator(1,100);
    }

};
 void print_array(int arr[100], int &arrLength){
    for (int i =0; i <arrLength ; i++){
        cout<<arr[i]<<" ";
        
    }
    cout << "\n";
 }
 int Average_array(int arr[100],int &arrLength){
    int sum=0;
    for (int i =0 ; i <arrLength ; i++){
        sum+=arr[i];

    }
    int average=sum/arrLength;
    return average;
 }

int main(){
srand((unsigned)time(NULL));
int arr[100];
int arrLength = 5;
fill_array_with_random_numbers(arr,arrLength);
print_array(arr,arrLength);
cout<<"the average is : " <<Average_array(arr,arrLength);
return 0;
};
