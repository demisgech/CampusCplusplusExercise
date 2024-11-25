#ifndef STACKEXCEPTION__HPP
#define STACKEXCEPTION__HPP

#include <exception>

using std::exception;

class StackException : public exception {
 private:
  const char* message;

 public:
  StackException(const char* message);
  const char* what() const noexcept override;
};

#endif  // STACKEXCEPTION__HPP