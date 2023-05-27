#ifndef BULLSANDCOWS_SRC_SUBJECT_SUBJECT_H_
#define BULLSANDCOWS_SRC_SUBJECT_SUBJECT_H_

#include <list>
#include <stdexcept>
#include <algorithm>

#include "../interfaces/IObservable.h"
#include "../interfaces/IObserver.h"

class Subject : public IObservable
{
 private:
  std::list<IObserver *> observers_;
 public:
  Subject() = default;
  ~Subject() = default;

  void Add(IObserver *observer) override;
  void Remove(IObserver *observer) override;
  void Notify() override;
};

#endif //BULLSANDCOWS_SRC_SUBJECT_SUBJECT_H_
