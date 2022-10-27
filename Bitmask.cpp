#include "Bitmask.hpp"


Bitmask::Bitmask() : bits(0) {}

void Bitmask::SetMask(Bitmask& other)
{
    bits = other.GetMask();
}

uint32_t Bitmask::GetMask() const
{
    return bits;
}
