#ifndef QUEUEException
#define QUEUEException

#include <stdexcept>

class QueueException : public std::exception {
 private:
  const char* message;

 public:
  QueueException(const char* message);
  const char* what() const noexcept override;
};

#endif