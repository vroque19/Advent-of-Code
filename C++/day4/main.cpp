#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>

int main(){
    std::unordered_map<int, int> map;
    std::ifstream file("file.txt");
    int a;
    int b;
    int c;
    int d;
    int score = 0;


    while(file >> a >> b >> c >> d){
        if( a <= c ) {
            if( c <= b) {
                score++;
            }
        } else if( c <= a ) {
            if( a <= d) {
                score++;
            }
        }
    }

//        std::cout << a << " " << b << " " << c << " " << d;
    std::cout << "score: " << score << "\n";
}