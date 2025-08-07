#include "ui.h"
#include "ui_dashboard.h"
#include "ui_domotic.h"
#include "ui_monitoring.h"
#include "ui_settings.h"
#include "lvgl.h"

static lv_obj_t *menu;

static void menu_event_cb(lv_event_t *e) {
    const char *page = lv_event_get_user_data(e);
    if(strcmp(page, "Dashboard") == 0) ui_show_dashboard();
    else if(strcmp(page, "Domotic") == 0) ui_show_domotic();
    else if(strcmp(page, "Monitoring") == 0) ui_show_monitoring();
    else if(strcmp(page, "Settings") == 0) ui_show_settings();
}

void ui_init(void) {
    lv_obj_clean(lv_scr_act());
    menu = lv_obj_create(lv_scr_act());
    lv_obj_set_size(menu, 800, 60);
    lv_obj_align(menu, LV_ALIGN_TOP_MID, 0, 0);

    // Menu buttons
    lv_obj_t *btn_dashboard = lv_btn_create(menu);
    lv_obj_set_width(btn_dashboard, 180);
    lv_obj_align(btn_dashboard, LV_ALIGN_LEFT_MID, 10, 0);
    lv_obj_t *lbl_dashboard = lv_label_create(btn_dashboard);
    lv_label_set_text(lbl_dashboard, "Dashboard");
    lv_obj_center(lbl_dashboard);
    lv_obj_add_event_cb(btn_dashboard, menu_event_cb, LV_EVENT_CLICKED, "Dashboard");

    lv_obj_t *btn_domotic = lv_btn_create(menu);
    lv_obj_set_width(btn_domotic, 180);
    lv_obj_align(btn_domotic, LV_ALIGN_LEFT_MID, 200, 0);
    lv_obj_t *lbl_domotic = lv_label_create(btn_domotic);
    lv_label_set_text(lbl_domotic, "Domotic");
    lv_obj_center(lbl_domotic);
    lv_obj_add_event_cb(btn_domotic, menu_event_cb, LV_EVENT_CLICKED, "Domotic");

    lv_obj_t *btn_monitoring = lv_btn_create(menu);
    lv_obj_set_width(btn_monitoring, 180);
    lv_obj_align(btn_monitoring, LV_ALIGN_LEFT_MID, 390, 0);
    lv_obj_t *lbl_monitoring = lv_label_create(btn_monitoring);
    lv_label_set_text(lbl_monitoring, "Monitoring");
    lv_obj_center(lbl_monitoring);
    lv_obj_add_event_cb(btn_monitoring, menu_event_cb, LV_EVENT_CLICKED, "Monitoring");

    lv_obj_t *btn_settings = lv_btn_create(menu);
    lv_obj_set_width(btn_settings, 180);
    lv_obj_align(btn_settings, LV_ALIGN_LEFT_MID, 580, 0);
    lv_obj_t *lbl_settings = lv_label_create(btn_settings);
    lv_label_set_text(lbl_settings, "Settings");
    lv_obj_center(lbl_settings);
    lv_obj_add_event_cb(btn_settings, menu_event_cb, LV_EVENT_CLICKED, "Settings");

    ui_show_dashboard();
}