#include "OpenDoor.hpp"
#include "CloseDoor.hpp"

OpenDoor::OpenDoor(CarDoorLockSystem *i_Object)
{
      Object = i_Object;
}

void OpenDoor::Event_UnlockDoor()
{
      std::cout << "do nothing door is open" << std::endl;
}

void OpenDoor::Event_lockDoor()
{
      std::cout << "Door Locked" << std::endl;
      Object->SetState(new CloseDoor(Object));
}
