#ifndef CPP_BITMASK_H
#define CPP_BITMASK_H

#include <stdint.h>

class Bitmask {
    private:
    uint32_t bits;

    public:
    Bitmask();
    void SetMask(Bitmask& other); // overwrite bitmask
    uint32_t GetMask() const; // binary rep of mask
    bool GetBit(int pos) const; // return true if bit at pos=1, else false
    bool SetBit(int pos, bool on); // sets bit at pos to 1 or 0
    void SetBit(int pos);
    void ClearBit(int pos);
    void Clear();


};

#endif