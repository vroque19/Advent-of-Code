#include <iostream>
#include <string>
#include <fstream>
#include <stack>

using namespace std;

int main() {
    string line;
    int line_int = 0;
    int sum = 0;
    ifstream file("file.txt");

    while(file >> line) {
        try{
            line_int = std::stoi(line);
             if(line_int <= 100000) {
             sum+= line_int;

             }
        } catch(...) {

        }
    }
    cout << sum << "\n";
}