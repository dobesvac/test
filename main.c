#include <stdint.h>
struct mdl_rectangle {
 uint32_t x;
 uint32_t y;
 uint32_t width;
 uint32_t height;
};

void mdl_draw_rectangle(struct mdl_rectangle *rect, int flags)
{
 // Do something ...
}
