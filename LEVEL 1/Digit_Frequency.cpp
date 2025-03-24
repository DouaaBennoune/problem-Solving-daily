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
void count_digits(string number,int digits,int d){
    int sum=0;
    for(int i = 0;i<digits;i++){
        int digit = number[i]-'0';
        
        if (digit == d){
            sum+=1;
        }
    }
    cout<< sum;
};
//or this way 
void CountFreq(int n , int d ){
    int Remainder=0;
    int count_check=0;
    while (n>0){
        Remainder= n%10;
        n=n/10;
        if (Remainder==d){
        count_check+=1;
    };
    };
    
    cout<<count_check;
};

int main() {
    int n=validation("Please enter a positive number?");
    int d=validation("Please enter the positive  digit");
    string number =int_to_string(n);
    int digits = number_of_digits(n);
    //count_digits(number,digits,d);
 CountFreq( n ,  d );
    return 0;
}
