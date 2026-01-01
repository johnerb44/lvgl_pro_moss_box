/**
 * @file ui_hello_world_gen.h
 */

#ifndef UI_HELLO_WORLD_GEN_H
#define UI_HELLO_WORLD_GEN_H

#ifndef UI_SUBJECT_STRING_LENGTH
#define UI_SUBJECT_STRING_LENGTH 256
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/*-------------------
 * Permanent screens
 *------------------*/

extern lv_obj_t * screen_main;

/*----------------
 * Global styles
 *----------------*/

/*----------------
 * Fonts
 *----------------*/

extern lv_font_t * font_medium;

extern lv_font_t * montserrat_14;

extern lv_font_t * montserrat_18;

extern lv_font_t * montserrat_20;

extern lv_font_t * montserrat_22;

extern lv_font_t * montserrat_24;

extern lv_font_t * montserrat_26;

extern lv_font_t * montserrat_28;

extern lv_font_t * montserrat_30;

/*----------------
 * Images
 *----------------*/

/*----------------
 * Subjects
 *----------------*/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/*----------------
 * Event Callbacks
 *----------------*/

/**
 * Initialize the component library
 */

void ui_hello_world_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

/**********************
 *   POST INCLUDES
 **********************/

/*Include all the widget and components of this library*/
#include "screens/screen_about_gen.h"
#include "screens/screen_hello_world_gen.h"
#include "screens/screen_main_gen.h"
#include "screens/screen_start_gen.h"

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*UI_HELLO_WORLD_GEN_H*/