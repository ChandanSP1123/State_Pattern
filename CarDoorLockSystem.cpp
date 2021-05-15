
#include "CarDoorLockSystem.hpp"
#include "OpenDoor.hpp"

CarDoorLockSystem::CarDoorLockSystem()
{
    state = new OpenDoor(this);
}

void CarDoorLockSystem::CaptureEvent(KeyPressEvent Event)
{

    if (DoorUnlock == Event)
    {
        state->Event_UnlockDoor();
    }
    else
    {
        state->Event_lockDoor();
    }
}

void CarDoorLockSystem::SetState(CarDoorStateHandler *NewState)
{
    state = NewState;
}