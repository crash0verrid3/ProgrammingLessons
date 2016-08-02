#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]){
  string my_variable;
  getline(cin, my_variable);
  cout << "You entered: " << my_variable << "\n";
  
  return 0;
}
