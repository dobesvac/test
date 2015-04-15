#include <stdint.h>
struct mdl_rectangle {
 uint32_t x;
 uint32_t y;
 uint32_t width;
 uint32_t height;
};

struct mdl_circle {
 uint32_t x; /* Centre */
 uint32_t y; /* Centre */
 uint32_t radius;
}

struct mdl_hexagon {
 uint32_t x; /* Centre */
 uint32_t y; /* Centre */
 uint32_t radius;
 uint32_t rotation;
}

void mdl_draw_rectangle(struct mdl_rectangle *rect, int flags)
{
 // Do something ...
}

void mdl_draw_circle(struct mdl_circle *circ, int flags)
{
 // Do something ...
}

void mdl_draw_hexagon(struct mdl_hexagon *hex, int flags)
{
 // Do something ...
}
