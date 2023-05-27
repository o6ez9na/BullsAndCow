#ifndef BULLSANDCOWS_SRC_INTERFACES_IOBSERVABLE_H_
#define BULLSANDCOWS_SRC_INTERFACES_IOBSERVABLE_H_

class IObserver;

class IObservable
{
 public:
  virtual void Add(IObserver *observer) = 0;
  virtual void Remove(IObserver *observer) = 0;
  virtual void Notify() = 0;
};
#endif //BULLSANDCOWS_SRC_INTERFACES_IOBSERVABLE_H_
