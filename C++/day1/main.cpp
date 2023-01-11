#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <compare>

int main() {
    int calories = 0;
    std::string line;
    std::vector<int> vec;
    std::vector<int> sums;
    int sum = 0;
    int max = 0;
    std::ifstream file("file.txt");

    while( getline(file, line) ) {
        try{
            vec.push_back(std::stoi(line));
        }catch(...){
            for(int i = 0; i < vec.size(); i++) {
                sum += vec[i];
                // std::cout << sum << "\n";
            }
            vec.clear();
            sums.push_back(sum);
            sum = 0;
        }

    }


    for( auto it = sums.begin(); it != sums.end(); it++) {
        if(max < *it) {
            max = *it;
        }
    }

    for(auto it = sums.begin(); it != sums.end(); it++) {
        std::cout << max << "\n";
    }
}