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
        digits+=1;
    };
  
    return digits;
};
string int_to_string(int n){
    string number = to_string(n);
    return number;
};
// we read the number as a string so we can loop through it and print it from right to left :) its important to know how many digits so we initilize our for loop with that number.
void print_results(string number,int digits){
    for(int i = digits;i>=0;i--){
        cout<<number[i]<<endl;
    }
};
// or this way too 
void PrintDigits(int Number)
{
    int Sum = 0, Remainder = 0; 
   
    while (Number > 0)
    {
        Remainder = Number % 10; // Extract the last digit of Number.
        Number = Number / 10;    // Remove the last digit from Number.
        cout << Remainder << endl;  // Print the extracted digit on a new line.
    }
}

int main() {
    int n=validation("Please enter a positive number?");
    string number =int_to_string(n);
    int digits = number_of_digits(n);
    print_results(number,digits);
  
    return 0;
}
