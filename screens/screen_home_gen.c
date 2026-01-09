/**
 * @file screen_home_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_home_gen.h"
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

lv_obj_t * screen_home_create(void)
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
    lv_obj_set_name_static(lv_obj_0, "screen_home_#");
    lv_obj_set_style_text_color(lv_obj_0, lv_color_hex3(0xfff), 0);

    lv_obj_add_style(lv_obj_0, &style_main, 0);
    lv_obj_t * welcome_name = lv_label_create(lv_obj_0);
    lv_obj_set_name(welcome_name, "welcome_name");
    lv_label_set_text(welcome_name, "Secure Lock Box");
    lv_obj_set_style_text_font(welcome_name, montserrat_30, 0);
    lv_obj_set_align(welcome_name, LV_ALIGN_TOP_MID);
    lv_obj_set_y(welcome_name, 10);
    
    lv_obj_t * unlock_button = lv_button_create(lv_obj_0);
    lv_obj_set_name(unlock_button, "unlock_button");
    lv_obj_set_align(unlock_button, LV_ALIGN_CENTER);
    lv_obj_set_width(unlock_button, 420);
    lv_obj_set_y(unlock_button, -120);
    lv_obj_set_style_bg_color(unlock_button, lv_color_hex(0xe19419), 0);
    lv_obj_t * lv_label_0 = lv_label_create(unlock_button);
    lv_label_set_text(lv_label_0, "1:  Unlock Secure Box");
    lv_obj_set_style_text_color(lv_label_0, lv_color_hex3(0x000), 0);
    lv_obj_set_style_text_font(lv_label_0, montserrat_26, 0);
    
    lv_obj_add_screen_create_event(unlock_button, LV_EVENT_CLICKED, screen_biometric_select_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);
    
    lv_obj_t * change_pin_button = lv_button_create(lv_obj_0);
    lv_obj_set_name(change_pin_button, "change_pin_button");
    lv_obj_set_align(change_pin_button, LV_ALIGN_CENTER);
    lv_obj_set_width(change_pin_button, 420);
    lv_obj_set_y(change_pin_button, -50);
    lv_obj_set_style_bg_color(change_pin_button, lv_color_hex(0x197de0), 0);
    lv_obj_t * lv_label_1 = lv_label_create(change_pin_button);
    lv_label_set_text(lv_label_1, "2:  Change PIN");
    lv_obj_set_style_text_color(lv_label_1, lv_color_hex3(0x000), 0);
    lv_obj_set_style_text_font(lv_label_1, montserrat_26, 0);
    
    lv_obj_add_screen_create_event(change_pin_button, LV_EVENT_CLICKED, screen_biometric_select_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);
    
    lv_obj_t * register_button = lv_button_create(lv_obj_0);
    lv_obj_set_name(register_button, "register_button");
    lv_obj_set_align(register_button, LV_ALIGN_CENTER);
    lv_obj_set_width(register_button, 420);
    lv_obj_set_y(register_button, 20);
    lv_obj_set_style_bg_color(register_button, lv_color_hex(0x21e019), 0);
    lv_obj_t * lv_label_2 = lv_label_create(register_button);
    lv_label_set_text(lv_label_2, "3:  Register Biometrics");
    lv_obj_set_style_text_color(lv_label_2, lv_color_hex3(0x000), 0);
    lv_obj_set_style_text_font(lv_label_2, montserrat_26, 0);
    
    lv_obj_add_screen_create_event(register_button, LV_EVENT_CLICKED, screen_biometric_select_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);
    
    lv_obj_t * admin_button = lv_button_create(lv_obj_0);
    lv_obj_set_name(admin_button, "admin_button");
    lv_obj_set_align(admin_button, LV_ALIGN_CENTER);
    lv_obj_set_width(admin_button, 420);
    lv_obj_set_y(admin_button, 90);
    lv_obj_set_style_bg_color(admin_button, lv_color_hex(0x8719e0), 0);
    lv_obj_t * lv_label_3 = lv_label_create(admin_button);
    lv_label_set_text(lv_label_3, "4:  Admin");
    lv_obj_set_style_text_color(lv_label_3, lv_color_hex3(0x000), 0);
    lv_obj_set_style_text_font(lv_label_3, montserrat_26, 0);
    
    lv_obj_add_screen_create_event(admin_button, LV_EVENT_CLICKED, screen_biometric_select_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);
    
    lv_obj_t * signout_button = lv_button_create(lv_obj_0);
    lv_obj_set_name(signout_button, "signout_button");
    lv_obj_set_align(signout_button, LV_ALIGN_CENTER);
    lv_obj_set_width(signout_button, 420);
    lv_obj_set_y(signout_button, 160);
    lv_obj_set_style_bg_color(signout_button, lv_color_hex(0xd9e019), 0);
    lv_obj_t * lv_label_4 = lv_label_create(signout_button);
    lv_label_set_text(lv_label_4, "5:  Sign Out/Lock Secure Box             ");
    lv_obj_set_style_text_color(lv_label_4, lv_color_hex3(0x000), 0);
    lv_obj_set_style_text_font(lv_label_4, montserrat_26, 0);
    
    lv_obj_add_screen_create_event(signout_button, LV_EVENT_CLICKED, screen_biometric_select_create, LV_SCREEN_LOAD_ANIM_MOVE_TOP, 500, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

