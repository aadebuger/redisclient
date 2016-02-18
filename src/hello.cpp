#include <iostream>
#include <redox.hpp>

using namespace std;
using namespace redox;

int main(int argc, char* argv[]) {

  Redox rdx;
  if(!rdx.connect("localhost", 6379)) return 1;

  rdx.set("hello", "world!");
  cout << "Hello, " << rdx.get("hello") << endl;

  rdx.disconnect();
  return 0;
}
