// Main entry point for the ESP-IDF LVGL demo project.
#include <stdio.h>
#include "ui.h"

void app_main() {
    // Initialize LVGL
    lv_init();

    // Initialize drivers
    init_lcd();
    init_touch();

    // Main loop
    while (1) {
        lv_task_handler();
        vTaskDelay(pdMS_TO_TICKS(10));
    }
}
