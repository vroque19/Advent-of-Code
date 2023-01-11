#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

int main() {

    ifstream file("file.txt");
    string s;
    string temp;
    // Get the string from the user
    getline(file, s);

    // Loop through the characters in the string
    for (int i = 0; i < s.length() - 13; i++)
    {
        // Check if the current group of four characters is unique
        bool isUnique = true;
        for (int j = 0; j < 14; j++)
        {
            for (int k = 0; k < 14; k++)
            {
                if (j != k && s[i + j] == s[i + k])
                {
                    isUnique = false;
                    break;
                }
            }
            if (!isUnique) break;
        }

        // If the current group of four characters is unique, print them and return
        if (isUnique)
        {
            cout << "The first four consecutive unique characters are: " << s.substr(i, 14) << endl;
            cout << i << "\n";
            return 0;
        }
    }

    // If no unique group of four characters was found, print a message
    cout << "There are no four consecutive unique characters in the string." << endl;
    return 0;
    
}