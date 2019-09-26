#include "Singleton.h"

CSingleton* CSingleton::pInstance = nullptr;
std::mutex CSingleton::mMutex;
