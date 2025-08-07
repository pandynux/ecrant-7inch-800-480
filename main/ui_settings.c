#include "ui_settings.h"
#include "lvgl.h"

void ui_show_settings(void) {
    lv_obj_clean(lv_scr_act());
    // Boutons de réglages
    lv_obj_t *btn_wifi = lv_btn_create(lv_scr_act());
    lv_obj_align(btn_wifi, LV_ALIGN_LEFT_MID, 80, 120);
    lv_obj_t *lbl_wifi = lv_label_create(btn_wifi);
    lv_label_set_text(lbl_wifi, "WiFi");

    lv_obj_t *btn_brightness = lv_btn_create(lv_scr_act());
    lv_obj_align(btn_brightness, LV_ALIGN_RIGHT_MID, -80, 120);
    lv_obj_t *lbl_brightness = lv_label_create(btn_brightness);
    lv_label_set_text(lbl_brightness, "Luminosité");

    lv_obj_t *lbl = lv_label_create(lv_scr_act());
    lv_label_set_text(lbl, "Paramètres");
    lv_obj_align(lbl, LV_ALIGN_CENTER, 0, 220);
}