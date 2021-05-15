
#ifndef OPEN_DOOR
#define OPEN_DOOR

#include "CarDoorLockSystem.hpp"

class OpenDoor : public CarDoorStateHandler
{
private:
    CarDoorLockSystem *Object;

public:
    OpenDoor(CarDoorLockSystem *i_Object);
    void Event_UnlockDoor();
    void Event_lockDoor();
};

#endif