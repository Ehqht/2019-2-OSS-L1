// C code to demonstrate working of
// strtok
#include <cstring>
#include <iostream>

 using namespace std;

// Driver function
int main()
{
 // Declaration of string
    char gfg[100] = " Hacktober fest by Github";
 
    // Declaration of delimiter
    const char s[4] = "-";
    char* tok;
 
    // Use of strtok
    // get first token
    tok = strtok(gfg, s);
 
    // Checks for delimeter
    while (tok != 0) {
        cout<<tok<<endl;
 
        // Use of strtok
        // go through other tokens
        tok = strtok(0, s);
    }
 
    return (0);
}
