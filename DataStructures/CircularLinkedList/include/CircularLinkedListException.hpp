#ifndef CIRCULARLINKEDLISTEXEPTION
#define CIRCULARLINKEDLISTEXEPTION
#include <exception>

using std::exception;

class CircularLinkedListException : public exception {
 private:
  const char* message;

 public:
  CircularLinkedListException(const char* message);
  const char* what() const noexcept override;
};
#endif  // CIRCULARLINKEDLISTEXEPTION