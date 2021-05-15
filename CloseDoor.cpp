#include "OpenDoor.hpp"
#include "CloseDoor.hpp"

CloseDoor::CloseDoor(CarDoorLockSystem *i_Object)
{
      Object = i_Object;
}

void CloseDoor::Event_UnlockDoor()
{
      std::cout << "Door is open" << std::endl;
      Object->SetState(new OpenDoor(Object));
}

void CloseDoor::Event_lockDoor()
{
      std::cout << "Door is closed already" << std::endl;
}