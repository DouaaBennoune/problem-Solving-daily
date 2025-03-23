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
        cout<<number[i];
    }
};
// or this way too 
void PrintDigits(int Number)
{
    int Sum = 0, Remainder = 0; 
    int Number2 = 0;  
    while (Number > 0)
    {
        //let's take 1234 as an example :
    Remainder = Number % 10; // Extract the Number's last digit. 1234%10=4,123%10=3,12%10=2,1%10=1
    Number2= Number2*10+Remainder; // Append the digit to Number2 by shifting left and adding Remainder.Number2=0+4,Number2=40+3=43,Number2=430+2=432,Number2=4320+1=4321 
    Number= Number/10; // Remove the last digit from Number. 1234/10=123,123/10=12,12%/10=1,1/10=0
    }
    cout <<Number2;
}

int main() {
    int n=validation("Please enter a positive number?");
    string number =int_to_string(n);
    int digits = number_of_digits(n);
    print_results(number,digits);
    PrintDigits(n);
    return 0;
}
