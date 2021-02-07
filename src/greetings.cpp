#include "foobar.hpp"

int main(int argc, char** argv) {
  if(argc > 1) {
    for(int i=1; i<argc; i++) {
      foobar::hello(argv[i]);
    }
  }
  else {
    foobar::helloWorld();
  }
  return 0;
}
