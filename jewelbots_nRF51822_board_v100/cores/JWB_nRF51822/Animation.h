
#ifndef __ANIMATION_H__
#define __ANIMATION_H__

#ifdef __cplusplus
extern "C"{
#endif // __cplusplus


#include <stdbool.h>
#include <stdint.h>

class Animation {
  public:
    Animation();
    ~Animation();
    void breathe_single_color(uint8_t color);
    void jewelbots_logo(void);
    void rainbows(void);
 };

 #ifdef __cplusplus
 } // extern "C"
 #endif // __cplusplus

#endif
