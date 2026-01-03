/**
 * @file screen_face_scan_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_face_scan_gen.h"
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

lv_obj_t * screen_face_scan_create(void)
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
    lv_obj_set_name_static(lv_obj_0, "screen_face_scan_#");
    lv_obj_set_style_text_color(lv_obj_0, lv_color_hex3(0xfff), 0);

    lv_obj_add_style(lv_obj_0, &style_main, 0);
    lv_obj_t * face_scan_title = lv_label_create(lv_obj_0);
    lv_obj_set_name(face_scan_title, "face_scan_title");
    lv_label_set_text(face_scan_title, "Face Scan");
    lv_obj_set_style_text_font(face_scan_title, montserrat_30, 0);
    lv_obj_set_align(face_scan_title, LV_ALIGN_TOP_MID);
    lv_obj_set_y(face_scan_title, 10);
    
    lv_obj_t * fp_instr_1 = lv_label_create(lv_obj_0);
    lv_obj_set_name(fp_instr_1, "fp_instr_1");
    lv_label_set_text(fp_instr_1, "1.   Raise Face Recognition Module");
    lv_obj_set_style_text_font(fp_instr_1, montserrat_26, 0);
    lv_obj_set_align(fp_instr_1, LV_ALIGN_TOP_LEFT);
    lv_obj_set_x(fp_instr_1, 50);
    lv_obj_set_y(fp_instr_1, 100);
    
    lv_obj_t * fp_instr_2 = lv_label_create(lv_obj_0);
    lv_obj_set_name(fp_instr_2, "fp_instr_2");
    lv_label_set_text(fp_instr_2, "2.   Verify Screen Displays Your Face");
    lv_obj_set_style_text_font(fp_instr_2, montserrat_26, 0);
    lv_obj_set_align(fp_instr_2, LV_ALIGN_TOP_LEFT);
    lv_obj_set_x(fp_instr_2, 50);
    lv_obj_set_y(fp_instr_2, 150);
    
    lv_obj_t * fp_instr_3 = lv_label_create(lv_obj_0);
    lv_obj_set_name(fp_instr_3, "fp_instr_3");
    lv_label_set_text(fp_instr_3, "3.   Place Face in Scan Area");
    lv_obj_set_style_text_font(fp_instr_3, montserrat_26, 0);
    lv_obj_set_align(fp_instr_3, LV_ALIGN_TOP_LEFT);
    lv_obj_set_x(fp_instr_3, 50);
    lv_obj_set_y(fp_instr_3, 200);
    
    lv_obj_t * start_button = lv_button_create(lv_obj_0);
    lv_obj_set_name(start_button, "start_button");
    lv_obj_set_align(start_button, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(start_button, lv_color_hex(0xe19419), 0);
    lv_obj_set_y(start_button, 200);
    lv_obj_t * lv_label_0 = lv_label_create(start_button);
    lv_label_set_text(lv_label_0, "Begin Scan");
    lv_obj_set_style_text_color(lv_label_0, lv_color_hex3(0x000), 0);
    lv_obj_set_style_text_font(lv_label_0, montserrat_26, 0);
    
    lv_obj_add_screen_create_event(start_button, LV_EVENT_CLICKED, screen_biometric_select_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

