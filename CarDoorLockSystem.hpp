

#ifndef CAR_DOOR_INCLUDE
#define CAR_DOOR_INCLUDE

#include <iostream>
#include "CarDoorStateHandler.hpp"

enum KeyPressEvent
{
  DoorUnlock,
  DoorLock
};

class CarDoorLockSystem
{
private:
  CarDoorStateHandler *state;

public:
  CarDoorLockSystem();
  void CaptureEvent(KeyPressEvent);
  void SetState(CarDoorStateHandler *);
};

#endif
