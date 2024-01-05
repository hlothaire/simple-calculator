#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

#include <iostream>

class Calculator {
public:
  Calculator();
  virtual ~Calculator() = default;
  void add();
  void subtract();
  void multiply();
  void divide();
  void square();
  void sqrt();
  void setMem();
  void printMem() const;

  double parseInput(const std::string &) const;
  virtual void welcome() const;
  virtual void parseOperation(const std::string &);

protected:
  double result;
  double mem;
};

#endif // CALCULATOR_HPP
