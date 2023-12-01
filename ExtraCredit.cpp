#include <iostream>
#include <string>

using namespace std;

string swapNthCase(const string & str, const int n);


//DO NOT MODIFY THE MAIN FUNCTION



int main(){
    //prompt for string
    string str;
    int n;
    cout << "Enter word: ";
    cin >> str;
    cout << "Enter N: ";
    cin >> n;
    //swap cases
    cout << "Swapped every Nth case: " << swapNthCase(str, n) << endl;

    return 0;
}

string swapNthCase(const string & str, const int n){
std::string inside = str;
for (size_t i = n - 1; i < inside.length(); i += n) { //needs to start on first instance//cant be 0
if (isalpha(inside[i])) { // Check if the character is an alphabet letter
            if (islower(inside[i])) {
                inside[i] = toupper(inside[i]);
            } else if (isupper(inside[i])) {
                inside[i] = tolower(inside[i]);
            }
        }
    }
    return inside;
}

