#include <iostream>
#include <ostream>
#include <string>
#include <fstream>
#include <vector>
#include <map>


int main(){
    std::map<char, int> score;
    score['a'] = 1;
    score['b'] = 2;
    score['c'] = 3;
    score['d'] = 4;
    score['e'] = 5;
    score['f'] = 6;
    score['g'] = 7;
    score['h'] = 8;
    score['i'] = 9;
    score['j'] = 10;
    score['k'] = 11;
    score['l'] = 12;
    score['m'] = 13;
    score['n'] = 14;
    score['o'] = 15;
    score['p'] = 16;
    score['q'] = 17;
    score['r'] = 18;
    score['s'] = 19;
    score['t'] = 20;
    score['u'] = 21;
    score['v'] = 22;
    score['w'] = 23;
    score['x'] = 24;
    score['y'] = 25;
    score['z'] = 26;
    score['A'] = 27;
    score['B'] = 28;
    score['C'] = 29;
    score['D'] = 30;
    score['E'] = 31;
    score['F'] = 32;
    score['G'] = 33;
    score['H'] = 34;
    score['I'] = 35;
    score['J'] = 36;
    score['K'] = 37;
    score['L'] = 38;
    score['M'] = 39;
    score['N'] = 40;
    score['O'] = 41;
    score['P'] = 42;
    score['Q'] = 43;
    score['R'] = 44;
    score['S'] = 45;
    score['T'] = 46;
    score['U'] = 47;
    score['V'] = 48;
    score['W'] = 49;
    score['X'] = 50;
    score['Y'] = 51;
    score['Z'] = 52;

    std::ifstream file("file.txt");
    std::string elf1;
    std::string elf2;
    std::string elf3;
    std::string common;
    int sum = 0;

    while(file >> elf1)
    {
        file >> elf2;
        file >> elf3;

        for( int i = 0; i < elf1.length(); i++ ) {
            for( int j = 0; j < elf2.length(); j++ ) {
                if( elf1[i] == elf2[j] ) {
                    common += elf1[i];
                }
            }
        }
        for( int i = 0; i < common.length(); i++ ) {
            bool flag = false;
            for( int j = 0; j < elf3.length(); j++ ) {
                if( common[i] == elf3[j] ) {
                    common = elf3[j];
                    sum += score[elf3[j]];
                    common = "";
                    flag = true;
                    if (flag) break;
                }
            }
            if(flag) break;
        }

        //Compare the first two
        //grab the common ones (multiple save to a string)
        //compare string to elf3
        //string should only have 1 common with elf3
        //vJrwpWtwJgWrhcsFMMfFFhFp
        //jqHRNqRjqzjGDLGLrsFMfFZSrLrFZsSL
        //PmmdzqPrVvPwwTWBwg
        //r


    }
    std::cout << sum << std::endl;


}