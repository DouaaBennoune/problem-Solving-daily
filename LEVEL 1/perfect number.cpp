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

bool  divs(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        int m = n%i;
        if(m==0){
        sum=sum+i;
    };};
   
    return sum==n;
};
void is_perfect(int n){
    if(divs( n)){
        cout<<"this number "<<n<<" is perfect :) ";
        
    }
    else{cout<<"the number is not perfect";};

}


int main() {
   is_perfect(validation("Please enter a positive number?"));

    return 0;
}
