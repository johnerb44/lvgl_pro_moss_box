/**
 * @file screen_btn_matrix_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_btn_matrix_gen.h"
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

lv_obj_t * screen_btn_matrix_create(void)
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
    lv_obj_set_name_static(lv_obj_0, "screen_btn_matrix_#");
    lv_obj_set_style_text_color(lv_obj_0, lv_color_hex3(0xfff), 0);

    lv_obj_add_style(lv_obj_0, &style_main, 0);
    lv_obj_t * get_pin_title = lv_label_create(lv_obj_0);
    lv_obj_set_name(get_pin_title, "get_pin_title");
    lv_label_set_text(get_pin_title, "Enter PIN");
    lv_obj_set_style_text_font(get_pin_title, montserrat_30, 0);
    lv_obj_set_align(get_pin_title, LV_ALIGN_TOP_MID);
    lv_obj_set_y(get_pin_title, 10);
    
    lv_obj_t * pin_display = lv_label_create(lv_obj_0);
    lv_obj_set_name(pin_display, "pin_display");
    lv_obj_set_align(pin_display, LV_ALIGN_CENTER);
    lv_obj_set_style_width(pin_display, 200, 0);
    lv_obj_set_style_height(pin_display, 50, 0);
    lv_obj_set_y(pin_display, -140);
    lv_obj_set_style_outline_width(pin_display, 5, 0);
    lv_obj_set_style_outline_color(pin_display, lv_color_hex3(0xfff), 0);
    lv_obj_set_style_text_color(pin_display, lv_color_hex3(0x111), 0);
    lv_obj_set_style_text_align(pin_display, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_bg_color(pin_display, lv_color_hex3(0xfff), 0);
    lv_obj_set_style_bg_opa(pin_display, 255, 0);
    lv_obj_set_style_pad_top(pin_display, 12, 0);
    lv_obj_set_style_text_opa(pin_display, 255, 0);
    lv_obj_set_style_text_font(pin_display, montserrat_30, 0);
    lv_label_set_text(pin_display, "----");
    
    lv_obj_t * button_matrix_pin = lv_buttonmatrix_create(lv_obj_0);
    lv_obj_set_name(button_matrix_pin, "button_matrix_pin");
    lv_obj_set_align(button_matrix_pin, LV_ALIGN_LEFT_MID);
    lv_obj_set_style_text_font(button_matrix_pin, montserrat_26, 0);
    lv_obj_set_height(button_matrix_pin, 240);
    lv_obj_set_width(button_matrix_pin, 530);
    lv_obj_set_style_text_color(button_matrix_pin, lv_color_hex(0x1a1919), 0);
    lv_obj_set_x(button_matrix_pin, 140);
    lv_obj_set_y(button_matrix_pin, 20);
    static const char *button_matrix_pin_map_0[] = {"1", "2", "3", "\\n", "4", "5", "6", "\\n", "7", "8", "9", "\\n", "Clear", "0", "Backspace", NULL};
    lv_buttonmatrix_set_map(button_matrix_pin, button_matrix_pin_map_0);
    
    lv_obj_t * submit_button = lv_button_create(lv_obj_0);
    lv_obj_set_name(submit_button, "submit_button");
    lv_obj_set_align(submit_button, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_y(submit_button, -30);
    lv_obj_set_style_bg_color(submit_button, lv_color_hex(0xe19419), 0);
    lv_obj_t * lv_label_0 = lv_label_create(submit_button);
    lv_label_set_text(lv_label_0, "SUBMIT");
    lv_obj_set_style_text_color(lv_label_0, lv_color_hex3(0x000), 0);
    lv_obj_set_style_text_font(lv_label_0, montserrat_26, 0);
    
    lv_obj_add_screen_create_event(submit_button, LV_EVENT_CLICKED, screen_biometric_select_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

