#include "Subject.h"
void Subject::Add(IObserver *observer)
{
  if (observer == nullptr)
	throw std::invalid_argument("observer is nullptr");
  observers_.push_back(observer);
}
void Subject::Remove(IObserver *observer)
{
  if (observer == nullptr)
	throw std::invalid_argument("observer is nullptr");
  observers_.remove(observer);
}
void Subject::Notify()
{
  std::for_each(observers_.begin(), observers_.end(), [&](IObserver *observer) { observer->Invoke(); });
}
