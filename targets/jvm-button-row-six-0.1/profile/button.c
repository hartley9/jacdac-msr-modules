#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x3ee73659, "JM button row (six) 0.1");

void app_init_services() {
    button_init(PA_4, 0, -1);
    button_init(PA_5, 0, -1);
    button_init(PA_6, 0, -1);
    button_init(PA_7, 0, -1);
    button_init(PA_8, 0, -1);
    button_init(PA_11, 0, -1);
}
