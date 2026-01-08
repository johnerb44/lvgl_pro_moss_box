/**
 * @file screen_btn_test_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_btn_test_gen.h"
#include "ui_hello_world.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * screen_btn_test_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_btn_test_#");
    lv_obj_set_style_bg_color(lv_obj_0, lv_color_hex(0x041d3a), 0);
    lv_obj_set_style_text_color(lv_obj_0, lv_color_hex3(0xfff), 0);

    lv_obj_t * lv_button_0 = lv_button_create(lv_obj_0);
    lv_obj_set_width(lv_button_0, 200);
    lv_obj_set_height(lv_button_0, 100);
    lv_obj_add_event_cb(lv_button_0, my_callback_1, LV_EVENT_CLICKED, "some_text");
    lv_obj_t * lv_label_0 = lv_label_create(lv_button_0);
    lv_label_set_text(lv_label_0, "Hello");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

