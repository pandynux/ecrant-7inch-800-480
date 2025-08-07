#include "ui_domotic.h"
#include "lvgl.h"

void ui_show_domotic(void) {
    lv_obj_clean(lv_scr_act());
    // Toggle switch (ON/OFF)
    lv_obj_t *sw = lv_switch_create(lv_scr_act());
    lv_obj_align(sw, LV_ALIGN_LEFT_MID, 80, 120);

    // Slider (intensité)
    lv_obj_t *slider = lv_slider_create(lv_scr_act());
    lv_obj_set_size(slider, 300, 50);
    lv_obj_align(slider, LV_ALIGN_RIGHT_MID, -80, 120);
    lv_slider_set_value(slider, 50, LV_ANIM_OFF);

    // Label
    lv_obj_t *lbl = lv_label_create(lv_scr_act());
    lv_label_set_text(lbl, "Contrôle domotique");
    lv_obj_align(lbl, LV_ALIGN_CENTER, 0, 220);
}