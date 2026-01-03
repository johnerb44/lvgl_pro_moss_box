/**
 * @file screen_biometric_select_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_biometric_select_gen.h"
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

lv_obj_t * screen_biometric_select_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_biometric_select_#");
    lv_obj_set_style_bg_color(lv_obj_0, lv_color_hex(0x041d3a), 0);
    lv_obj_set_style_text_color(lv_obj_0, lv_color_hex3(0xfff), 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_label_set_text(lv_label_0, "Select a biometric method:");
    lv_obj_set_align(lv_label_0, LV_ALIGN_TOP_MID);
    lv_obj_set_y(lv_label_0, 10);
    lv_obj_set_style_text_font(lv_label_0, montserrat_30, 0);
    
    lv_obj_t * fingerprint_button = lv_button_create(lv_obj_0);
    lv_obj_set_name(fingerprint_button, "fingerprint_button");
    lv_obj_set_align(fingerprint_button, LV_ALIGN_CENTER);
    lv_obj_set_y(fingerprint_button, -100);
    lv_obj_set_style_bg_color(fingerprint_button, lv_color_hex(0xe99309), 0);
    lv_obj_t * lv_label_1 = lv_label_create(fingerprint_button);
    lv_label_set_text(lv_label_1, "Fingerprint Scan");
    lv_obj_set_style_text_color(lv_label_1, lv_color_hex3(0x000), 0);
    lv_obj_set_style_text_font(lv_label_1, montserrat_26, 0);
    
    lv_obj_add_screen_create_event(fingerprint_button, LV_EVENT_CLICKED, screen_fingerprint_scan_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);
    
    lv_obj_t * face_button = lv_button_create(lv_obj_0);
    lv_obj_set_name(face_button, "face_button");
    lv_obj_set_align(face_button, LV_ALIGN_CENTER);
    lv_obj_set_width(face_button, 260);
    lv_obj_set_style_bg_color(face_button, lv_color_hex(0x19abe0), 0);
    lv_obj_t * lv_label_2 = lv_label_create(face_button);
    lv_label_set_text(lv_label_2, "Face Scan");
    lv_obj_set_align(lv_label_2, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(lv_label_2, lv_color_hex3(0x000), 0);
    lv_obj_set_style_text_font(lv_label_2, montserrat_26, 0);
    
    lv_obj_add_screen_create_event(face_button, LV_EVENT_CLICKED, screen_face_scan_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

