#ifndef BULLSANDCOWS_SRC_INTERFACES_IAPPLICATIONSTATE_H_
#define BULLSANDCOWS_SRC_INTERFACES_IAPPLICATIONSTATE_H_

#include "IUpdatableEvents.h"
#include "IRendered.h"

class IApplicationState : public IUpdatableEvents, public IRendered {};

#endif //BULLSANDCOWS_SRC_INTERFACES_IAPPLICATIONSTATE_H_
