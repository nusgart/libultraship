#pragma once

#include <cstdint>

namespace ZAPDUtils {

struct Vec2f {
    float x, y;

    Vec2f() {
        x = 0;
        y = 0;
    };
    Vec2f(float nX, float nY) {
        x = nX;
        y = nY;
    };
};
} // namespace ZAPDUtils