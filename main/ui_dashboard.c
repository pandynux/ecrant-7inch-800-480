#include "ui_dashboard.h"
#include "lvgl.h"

void ui_show_dashboard(void) {
    lv_obj_clean(lv_scr_act());
    // Jauge
    lv_obj_t *gauge = lv_gauge_create(lv_scr_act());
    lv_obj_set_size(gauge, 200, 200);
    lv_obj_align(gauge, LV_ALIGN_LEFT_MID, 50, 120);
    lv_gauge_set_value(gauge, 0, 75);

    // Courbe
    lv_obj_t *chart = lv_chart_create(lv_scr_act());
    lv_obj_set_size(chart, 400, 200);
    lv_obj_align(chart, LV_ALIGN_RIGHT_MID, -50, 120);
    lv_chart_set_point_count(chart, 10);
    lv_chart_set_range(chart, 0, 100);
    lv_chart_series_t *ser = lv_chart_add_series(chart, lv_palette_main(LV_PALETTE_BLUE), LV_CHART_AXIS_PRIMARY_Y);
    for(int i=0; i<10; i++) lv_chart_set_next_value(chart, ser, 10*i);

    // Bouton
    lv_obj_t *btn = lv_btn_create(lv_scr_act());
    lv_obj_align(btn, LV_ALIGN_CENTER, 0, 150);
    lv_obj_t *lbl = lv_label_create(btn);
    lv_label_set_text(lbl, "Action");
    lv_obj_center(lbl);
}