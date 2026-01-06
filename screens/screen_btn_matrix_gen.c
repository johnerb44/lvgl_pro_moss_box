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
    lv_label_set_text(get_pin_title, "ENTER PIN");
    lv_obj_set_style_text_font(get_pin_title, montserrat_30, 0);
    lv_obj_set_align(get_pin_title, LV_ALIGN_TOP_MID);
    lv_obj_set_y(get_pin_title, 10);
    
    lv_obj_t * pin_display = lv_label_create(lv_obj_0);
    lv_obj_set_name(pin_display, "pin_display");
    lv_obj_set_align(pin_display, LV_ALIGN_CENTER);
    lv_obj_set_style_width(pin_display, 200, 0);
    lv_obj_set_style_height(pin_display, 50, 0);
    lv_obj_set_y(pin_display, -200);
    lv_obj_set_style_outline_width(pin_display, 5, 0);
    lv_obj_set_style_outline_color(pin_display, lv_color_hex3(0xfff), 0);
    lv_obj_set_style_text_color(pin_display, lv_color_hex3(0xfff), 0);
    lv_obj_set_style_text_align(pin_display, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_bg_color(pin_display, lv_color_hex(0xfa0000), 0);
    lv_obj_set_style_bg_opa(pin_display, 255, 0);
    lv_obj_set_style_pad_top(pin_display, 12, 0);
    lv_obj_set_style_text_opa(pin_display, 255, 0);
    lv_obj_set_style_text_font(pin_display, montserrat_26, 0);
    lv_label_set_text(pin_display, "test");
    
    lv_obj_t * bm_row_1 = lv_buttonmatrix_create(lv_obj_0);
    lv_obj_set_name(bm_row_1, "bm_row_1");
    lv_obj_set_align(bm_row_1, LV_ALIGN_LEFT_MID);
    lv_obj_set_style_text_font(bm_row_1, montserrat_26, 0);
    lv_obj_set_height(bm_row_1, 80);
    lv_obj_set_width(bm_row_1, 260);
    lv_obj_set_style_text_color(bm_row_1, lv_color_hex(0x1a1919), 0);
    lv_obj_set_x(bm_row_1, 275);
    static const char *bm_row_1_map_0[] = {"1", "2", "3", "4", "5", NULL};
    lv_buttonmatrix_set_map(bm_row_1, bm_row_1_map_0);
    
    lv_obj_t * bm_row_2 = lv_buttonmatrix_create(lv_obj_0);
    lv_obj_set_name(bm_row_2, "bm_row_2");
    lv_obj_set_align(bm_row_2, LV_ALIGN_LEFT_MID);
    lv_obj_set_style_text_font(bm_row_2, montserrat_26, 0);
    lv_obj_set_height(bm_row_2, 80);
    lv_obj_set_width(bm_row_2, 260);
    lv_obj_set_style_text_color(bm_row_2, lv_color_hex(0x1a1919), 0);
    lv_obj_set_y(bm_row_2, 85);
    lv_obj_set_x(bm_row_2, 275);
    static const char *bm_row_2_map_1[] = {"6", "7", "8", "9", "0", NULL};
    lv_buttonmatrix_set_map(bm_row_2, bm_row_2_map_1);
    
    lv_obj_t * continue_button = lv_button_create(lv_obj_0);
    lv_obj_set_name(continue_button, "continue_button");
    lv_obj_set_align(continue_button, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_y(continue_button, -20);
    lv_obj_set_style_bg_color(continue_button, lv_color_hex(0xe19419), 0);
    lv_obj_t * lv_label_0 = lv_label_create(continue_button);
    lv_label_set_text(lv_label_0, "SUBMIT");
    lv_obj_set_style_text_color(lv_label_0, lv_color_hex3(0x000), 0);
    lv_obj_set_style_text_font(lv_label_0, montserrat_26, 0);
    
    lv_obj_add_screen_create_event(continue_button, LV_EVENT_CLICKED, screen_biometric_select_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

