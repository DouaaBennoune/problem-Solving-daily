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
    return  to_string(n);
  
};
// we read the number as a string so we can loop through it and print it from right to left :) its important to know how many digits so we initilize our for loop with that number.
void print_results(string number,int digits){
    for(int i = 0;i <= digits ;i++){
        cout<<number[i]<<endl;
    }
};


int main() {
    int n=validation("Please enter a positive number?");
    string number =int_to_string(n);
    int digits = number_of_digits(n);
    print_results(number,digits);

    return 0;
}
