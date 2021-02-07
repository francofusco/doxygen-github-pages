#include "foobar.hpp"
#include <iostream>

namespace foobar {

void hello(const std::string& who) {
  std::cout << "Hello, " << who << "!" << std::endl;
}

}
