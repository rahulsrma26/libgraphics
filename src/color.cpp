#include "lfbg/graphics.h"

namespace lfbg {

namespace COLOR {
const color BLACK = 0x000000;
const color BLUE = 0x0000AA;
const color GREEN = 0x00AA00;
const color CYAN = 0x00AAAA;
const color RED = 0xAA0000;
const color MAGENTA = 0xAA00AA;
const color BROWN = 0xAA5500;
const color GRAY = 0xAAAAAA;
const color DARK_GRAY = 0x555555;
const color BRIGHT_BLUE = 0x5555FF;
const color BRIGHT_GREEN = 0x55FF55;
const color BRIGHT_CYAN = 0x55FFFF;
const color BRIGHT_RED = 0xFF5555;
const color BRIGHT_MAGENTA = 0xFF55FF;
const color YELLOW = 0xFFFF55;
const color WHITE = 0xFFFFFF;
} // namespace COLOR

color rgb2color(int r, int g, int b) { return ((b & 255) << 16) | ((g & 255) << 8) | (r & 255); }

} // namespace lfbg
