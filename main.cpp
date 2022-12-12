#include <iostream>
#include <fstream>
#include <string>

// a = rock   b = paper   c = scissors

// x = rock  y = paper z = scissor

// rock = 1   paper = 2   scissors = 3
int main() {

std::ifstream file("file.txt");
std::string   line;

int           rock     = 0;
int           paper    = 0;
int           scissors = 0;
int           win      = 0;
int           tie      = 0;

while ( file >> line) {


  if( line == "A" ) {
    file >> line;
    if( line == "X") {
      scissors++;
    }
    if( line == "Y") {
      rock++;
      tie++;
    }
    if( line == "Z") {
      paper++;
      win++;
    }
  }

  if( line == "B" ) {
    file >> line;
    if ( line == "X") {
      rock++;
    }
    if( line == "Y") {
      paper++;
      tie++;
    }
    if( line == "Z") {
      scissors++;
      win++;
    }
  }

    if( line == "C" ) {
      file >> line;
      if( line == "X" )
      {
        paper++;
      }
      if( line == "Y" )
      {
        scissors++;
        tie++;
      }
      if( line == "Z" )
      {
        rock++;
        win++;
      }
    }

}
int score = ( rock * 1 ) + ( paper * 2 ) + ( scissors * 3 ) + (win* 6) + (tie*3);

std::cout << score << std::endl;

return 0;


// x = lose
// y = tie
// z = win
}
