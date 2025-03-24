#include <string>
#include <iostream>
using namespace std ;

int validation(string Message){
    int n=0;
    do{
    cout<< Message <<endl;
    cin>>n;
    }while(n<=0);
    
    return n;
};
int number_of_digits(int n){
    int digits=0;
    while (n>0) {
        n = n/10;
        digits++;
    };
  
    return digits;
};
string int_to_string(int n){
    return to_string(n);
};
// we read the number as a string so we can loop through it and print it from right to left :) its important to know how many digits so we initilize our for loop with that number.
int count_digits(string number,int d){
    int sum=0;
 for (char c : number) {
        int digit = c - '0'; // Convert character to integer
        if (digit == d) {
            sum++;
        }
    }
    return sum;
};
void CountFreq_of_each_digit(int n ){
    string number = int_to_string(n); 
    int digits = number_of_digits(n);
    for (int i =0 ; i<=9 ; i++){
        int count = count_digits(number, i);
        if (count > 0) { // Only show digits that are present in the number
            cout << i << " repeated " << count << " times." << endl;
        }
        
    };
};


int main() {
    int n=validation("Please enter a positive number?");
    //int d=validation("Please enter the positive  digit");
    string number =int_to_string(n);
    int digits = number_of_digits(n);
    //count_digits(number,digits,d);
 CountFreq_of_each_digit(n);
    return 0;
}
