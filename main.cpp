#include "CarDoorLockSystem.hpp"

int main()
{

    CarDoorLockSystem DoorLockSystem_Object;

    DoorLockSystem_Object.CaptureEvent(DoorLock);
    DoorLockSystem_Object.CaptureEvent(DoorUnlock);
    DoorLockSystem_Object.CaptureEvent(DoorUnlock);
    DoorLockSystem_Object.CaptureEvent(DoorLock);
    DoorLockSystem_Object.CaptureEvent(DoorLock);
    return 0;
}