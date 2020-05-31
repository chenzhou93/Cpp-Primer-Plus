/**
 * 7.
 * Write a program that reads input a word at a time until a lone q is entered. 
 * The program should then report the number of words that began with vowels, 
 * the number that began with consonants, 
 * and the number that fit neither of those categories. 
 * 
 * One approach is to use isalpha() to discriminate between words beginning with letters 
 * and those that don’t and 
 * then use an if or switch statement 
 * to further identify those passing the isalpha() test that begin with vowels. 
 * 
 * 
 * A sample run might look like this:
 * 
 * Enter words (q to quit):
 * The 12 awesome oxen ambled
 * quietly across 15 meters of lawn. q
 * 5 words beginning with vowels
 * 4 words beginning with consonants
 * 2 others
 * 
 */

#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main(){
    char word[20];
    int volNum = 0;
    int constNum = 0;
    int other = 0;
    
    while(cin >> word){
        if(strcmp(word, "q") == 0){
            break;
        }else{
            if(isalpha(word[0])){
                if(word[0] == 'a' || word[0] == 'e' 
                    || word[0] == 'i' || word[0] == 'o' 
                    || word[0] == 'u' || word[0] == 'A' || word[0] == 'E' 
                    || word[0] == 'I' || word[0] == 'O' 
                    || word[0] == 'U'){
                    volNum++;
                }else{
                    constNum++;
                }
            }else{
                other++;
            }
        }
    }

    cout << volNum << " words beginning with vowels" << endl;
    cout << constNum << " words beginning with consonants" << endl;
    cout << other << " others" << endl;
    
    return 0;
}
