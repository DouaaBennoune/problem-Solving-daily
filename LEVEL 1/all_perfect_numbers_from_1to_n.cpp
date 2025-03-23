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

bool isPerfectNumber(int n)
{
    int Sum = 0;  
    for (int i = 1; i <n; i++)
    {
        if (n % i == 0)
            Sum += i;  
    }
    return n == Sum;
}

void perfectFrom1_to_N(int n){
    for (int i=1;i<=n;i++){
        if (isPerfectNumber(i)){cout<<i<<endl;
            
        }
    };

};


int main() {
    int n=validation("Please enter a positive number?");
    
   perfectFrom1_to_N( n);
   


    return 0;
}
