#include <iostream>
#include <cstdlib>
#include <time.h>
int main(){

  std::cout << "MAGIC 8-BALL: \n";
  srand(time(NULL));

  int answer = std::rand() % 10;
  
  if(answer == 0){
    std::cout << "It is certain.";
  }
  else if (answer == 1){
    std::cout << "You may rely on it.";
  }
  else if (answer == 2){
    std::cout << "Reply hazy, try again.";
  }
  else if (answer == 3){
    std::cout << "Better not tell you now.";
  }
  else if (answer == 4){
    std::cout << "Ask again later.";
  }
  else if (answer == 5){
    std::cout << "Don't count on it.";
  }
  else if (answer == 6){
    std::cout << "My sources say no.";
  }
  else if (answer == 7){
    std::cout << "Yes - definitely.";
  }
  else if (answer == 8){
    std::cout << "Yes.";
  }
  else if (answer == 9){
    std::cout << "Outlook not so good.";
  }
  else{
    std::cout << "Cannot predict now.";
  }
}