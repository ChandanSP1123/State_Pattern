
#ifndef CLOSE_DOOR
#define CLOSE_DOOR

#include "CarDoorLockSystem.hpp"

class CloseDoor : public CarDoorStateHandler
{
private:
    CarDoorLockSystem *Object;

public:
    CloseDoor(CarDoorLockSystem *i_Object);
    void Event_UnlockDoor();
    void Event_lockDoor();
};

#endif