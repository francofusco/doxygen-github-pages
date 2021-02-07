#pragma once

#include <string>

/// Main project namespace.
namespace foobar {

/// Function that knows how to greet people.
/** The function will print a greetings message on the standard output.
  * @param who the person/entity to greet.
  */
void hello(const std::string& who);

/// Performs the most common programming action.
/** This method print the iconic `Hello, World!` sentence on the console.
  */
inline void helloWorld() { hello("World"); }

}
