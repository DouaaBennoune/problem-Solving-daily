#include <iostream>
#include <cstdlib>   
#include <ctime>    
using namespace std;
int random_numbers_generator(int From , int To){
    int random_number= rand()% (To -From +1)+From;
    return random_number;

};

enum enCharType { 
    SamallLetter = 1,    
    CapitalLetter = 2,   
    SpecialCharacter = 3,
    Digit = 4            
};
char getRAndomCHAr (enCharType CharType){
    switch(CharType){
        case enCharType::SamallLetter:
        { 
        return char(random_numbers_generator(97,122));
        break; }
        case enCharType::CapitalLetter:
        { 
        return char(random_numbers_generator(65,90));
        break; }
        case enCharType::SpecialCharacter:
        { 
        return char(random_numbers_generator(33,47));
        break; }
        case enCharType::Digit:
        { 
        return char(random_numbers_generator(48,57));
        break; }
    }
    return '\0';
}

string GenerateWord(enCharType CharType, short Length){

string word="" ;
for (int i = 0; i < Length; i++)
    {
        word = word + getRAndomCHAr(CharType);
    }
    return word;
 };
 string GenerateKey()
 {
     string Key = "";
     // Generate 4 groups of 4 uppercase letters, separated by hyphens.
     Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
     Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
     Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
     Key = Key + GenerateWord(enCharType::CapitalLetter, 4);
     return Key;
 };
 void FillArrayWithKeys(string arr[100], int arrLength)
 {
     // Loop through the array indices and generate a key for each element.
     for (int i = 0; i < arrLength; i++)
         arr[i] = GenerateKey();
 };
 void fill_string_Array(string arr[100],int arrLength ){
    cout << "\nArray elements:\n\n";
    for (int i = 0; i < arrLength; i++)
    {
        cout << "key[" << i << "] : ";
        cout << arr[i] << "\n";
    }
    cout << "\n"; 

};
 int ReadPositiveNumber(string Message)
 {
     int Number = 0;  // Variable to hold user input.
     do
     {
         cout << Message << endl; // Display the prompt.
         cin >> Number;           // Read the input.
     } while (Number <= 0);       // Repeat until a positive number is entered.
     return Number;
 };
 
int main(){
int num;
    srand((unsigned)time(NULL));
    string arr[100];
    int arrLength = 0;
    arrLength = ReadPositiveNumber("How many keys do you want to generate?\n");
    
    FillArrayWithKeys(arr, arrLength);
    fill_string_Array(arr, arrLength);
    
    return 0;


    
};
