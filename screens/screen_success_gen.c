/**
 * @file screen_success_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_success_gen.h"
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

lv_obj_t * screen_success_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_main);
        lv_style_set_bg_color(&style_main, lv_color_hex(0x041d3a));
        lv_style_set_text_color(&style_main, lv_color_hex3(0xfff));

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_success_#");
    lv_obj_set_style_text_color(lv_obj_0, lv_color_hex3(0xfff), 0);

    lv_obj_add_style(lv_obj_0, &style_main, 0);
    lv_obj_t * bio_success = lv_label_create(lv_obj_0);
    lv_obj_set_name(bio_success, "bio_success");
    lv_label_set_text(bio_success, "BIOMETRIC SUCCESS");
    lv_obj_set_style_text_font(bio_success, montserrat_30, 0);
    lv_obj_set_align(bio_success, LV_ALIGN_TOP_MID);
    lv_obj_set_y(bio_success, 10);
    
    lv_obj_t * start_button = lv_button_create(lv_obj_0);
    lv_obj_set_name(start_button, "start_button");
    lv_obj_set_align(start_button, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(start_button, lv_color_hex(0xe19419), 0);
    lv_obj_t * lv_label_0 = lv_label_create(start_button);
    lv_label_set_text(lv_label_0, "Continue");
    lv_obj_set_style_text_color(lv_label_0, lv_color_hex3(0x000), 0);
    lv_obj_set_style_text_font(lv_label_0, montserrat_26, 0);
    
    lv_obj_add_screen_create_event(start_button, LV_EVENT_CLICKED, screen_biometric_select_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

