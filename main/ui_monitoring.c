#include "ui_monitoring.h"
#include "lvgl.h"

void ui_show_monitoring(void) {
    lv_obj_clean(lv_scr_act());
    // Graphique temps réel
    lv_obj_t *chart = lv_chart_create(lv_scr_act());
    lv_obj_set_size(chart, 700, 250);
    lv_obj_align(chart, LV_ALIGN_CENTER, 0, 60);
    lv_chart_set_point_count(chart, 20);
    lv_chart_set_range(chart, 0, 100);
    lv_chart_series_t *ser = lv_chart_add_series(chart, lv_palette_main(LV_PALETTE_GREEN), LV_CHART_AXIS_PRIMARY_Y);
    for(int i=0; i<20; i++) lv_chart_set_next_value(chart, ser, (i*5)%100);

    // Label
    lv_obj_t *lbl = lv_label_create(lv_scr_act());
    lv_label_set_text(lbl, "Monitoring en temps réel");
    lv_obj_align(lbl, LV_ALIGN_CENTER, 0, 260);
}