#ifndef BULLSANDCOWS_SRC_INTERFACES_IOBSERVER_H_
#define BULLSANDCOWS_SRC_INTERFACES_IOBSERVER_H_

class IObserver
{
 public:
  virtual void Invoke() = 0;
};
#endif //BULLSANDCOWS_SRC_INTERFACES_IOBSERVER_H_