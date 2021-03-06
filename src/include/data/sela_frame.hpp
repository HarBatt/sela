#ifndef _SELA_FRAME_H_
#define _SELA_FRAME_H_

#include "sela_sub_frame.hpp"

namespace data {
class SelaFrame {
public:
    const int32_t syncWord = 0xAA55FF00;
    std::vector<SelaSubFrame> subFrames;
    uint8_t bitsPerSample; //Not to be written to output
    explicit SelaFrame(uint8_t bitsPerSample)
        : bitsPerSample(bitsPerSample)
    {
    }
    uint32_t getByteCount();
    void write();
};
}

#endif