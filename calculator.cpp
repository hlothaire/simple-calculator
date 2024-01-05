#include "calculator.hpp"
#include <cmath>

Calculator::Calculator() : result(0.0), mem(0.0) {}

void Calculator::add() {
  std::string x, y;
  std::cout << "Enter firt number";
  std::cin >> x;
  std::cout << "Enter second number";
  std::cin >> y;
  result = parseInput(x) + parseInput(y);
  std::cout << "Result is " << result;
}

void Calculator::subtract() {
  std::string x, y;
  std::cout << "Enter first number";
  std::cin >> x;
  std::cout << "Enter second number";
  std::cin >> y;
  result = parseInput(x) - parseInput(y);
  std::cout << "Result is " << result;
}

void Calculator::multiply() {
  std::string x, y;
  std::cout << "Enter first number";
  std::cin >> x;
  std::cout << "Enter second number";
  std::cin >> y;
  result = parseInput(x) * parseInput(y);
  std::cout << "Result is " << result;
}

void Calculator::divide() {
  std::string x, y;
  std::cout << "Enter first number";
  std::cin >> x;
  std::cout << "Enter second number";
  std::cin >> y;
  result = parseInput(x) / parseInput(y);
  std::cout << "Result is " << result;
}

void Calculator::square() {
  std::string x;
  std::cout << "Enter number ";
  std::cin >> x;
  double parsedX = parseInput(x);
  result = parsedX * parsedX;
  std::cout << "Result is " << result;
}

void Calculator::sqrt() {
  std::string x;
  std::cout << "Enter number";
  std::cin >> x;
  result = std::sqrt(parseInput(x));
  std::cout << "result is " << result;
}

void Calculator::setMem() {
  std::string x;
  std::cout << "Enter number ";
  std::cin >> x;
  mem = parseInput(x);
}

void Calculator::printMem() const { std::cout << "Mem is " << mem; }

double Calculator::parseInput(const std::string &input) const {
  if (input == "result")
    return result;
  else if (input == "mem")
    return mem;
  else
    return std::stod(input);
}

void Calculator::welcome() const {
  std::cout << "\nEnter an operation (+, -, /, *, sqrt, square, change, "
               "setmem, printmem) or exit\n";
}

void Calculator::parseOperation(const std::string &input) {
  if (input == "+" || input == "add" || input == "addition" || input == "sum") {
    add();
  } else if (input == "-" || input == "sub" || input == "subtraction" ||
             input == "minus") {
    subtract();
  } else if (input == "/" || input == "divide" || input == "div") {
    divide();
  } else if (input == "*" || input == "mul" || input == "multiply" ||
             input == "times") {
    multiply();
  } else if (input == "sqrt") {
    sqrt();
  } else if (input == "square") {
    square();
  } else if (input == "setmem") {
    setMem();
  } else if (input == "printmem") {
    printMem();
  }
}
