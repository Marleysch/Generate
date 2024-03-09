#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

// argc is the num of params (argument count)
// stoi string to int
// int main(int argc, char *argv[]){
void generate(int count, int max, int min){
  // if (argc != 4){
    // cout << "Please enter 3 parameters:\n";
    // cout << "Please enter 3 parameters:\n";
    // cout << "Please enter 3 parameters:\n";
    // cout << "Please enter 3 parameters:\n";
    // exit(EXIT_SUCCESS);
  // }

  ofstream numbers;
  numbers.open("numbers.dat");
  srand(time(0));
  for (int i = 0; i < count; i++){
    numbers << (rand() % (max - min  + 1) + min) << endl;
  }
  numbers.close();
  
}

int main(){
  generate(10000, 100, -1000000);
}