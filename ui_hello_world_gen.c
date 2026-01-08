/**
 * @file ui_hello_world_gen.c
 */

/*********************
 *      INCLUDES
 *********************/

#include "ui_hello_world_gen.h"

#if LV_USE_XML
#endif /* LV_USE_XML */

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/*----------------
 * Translations
 *----------------*/

/**********************
 *  GLOBAL VARIABLES
 **********************/

/*--------------------
 *  Permanent screens
 *-------------------*/

lv_obj_t * screen_main = NULL;

/*----------------
 * Global styles
 *----------------*/

/*----------------
 * Fonts
 *----------------*/

lv_font_t * font_medium;
extern lv_font_t font_medium_data;
lv_font_t * montserrat_14;
extern lv_font_t montserrat_14_data;
lv_font_t * montserrat_18;
extern lv_font_t montserrat_18_data;
lv_font_t * montserrat_20;
extern lv_font_t montserrat_20_data;
lv_font_t * montserrat_22;
extern lv_font_t montserrat_22_data;
lv_font_t * montserrat_24;
extern lv_font_t montserrat_24_data;
lv_font_t * montserrat_26;
extern lv_font_t montserrat_26_data;
lv_font_t * montserrat_28;
extern lv_font_t montserrat_28_data;
lv_font_t * montserrat_30;
extern lv_font_t montserrat_30_data;

/*----------------
 * Images
 *----------------*/

/*----------------
 * Subjects
 *----------------*/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void ui_hello_world_init_gen(const char * asset_path)
{
    char buf[256];

    /*----------------
     * Global styles
     *----------------*/

    /*----------------
     * Fonts
     *----------------*/

    /* get font 'font_medium' from a C array */
    font_medium = &font_medium_data;
    /* get font 'montserrat_14' from a C array */
    montserrat_14 = &montserrat_14_data;
    /* get font 'montserrat_18' from a C array */
    montserrat_18 = &montserrat_18_data;
    /* get font 'montserrat_20' from a C array */
    montserrat_20 = &montserrat_20_data;
    /* get font 'montserrat_22' from a C array */
    montserrat_22 = &montserrat_22_data;
    /* get font 'montserrat_24' from a C array */
    montserrat_24 = &montserrat_24_data;
    /* get font 'montserrat_26' from a C array */
    montserrat_26 = &montserrat_26_data;
    /* get font 'montserrat_28' from a C array */
    montserrat_28 = &montserrat_28_data;
    /* get font 'montserrat_30' from a C array */
    montserrat_30 = &montserrat_30_data;


    /*----------------
     * Images
     *----------------*/
    /*----------------
     * Subjects
     *----------------*/
    /*----------------
     * Translations
     *----------------*/

#if LV_USE_XML
    /* Register widgets */

    /* Register fonts */
    lv_xml_register_font(NULL, "font_medium", font_medium);
    lv_xml_register_font(NULL, "montserrat_14", montserrat_14);
    lv_xml_register_font(NULL, "montserrat_18", montserrat_18);
    lv_xml_register_font(NULL, "montserrat_20", montserrat_20);
    lv_xml_register_font(NULL, "montserrat_22", montserrat_22);
    lv_xml_register_font(NULL, "montserrat_24", montserrat_24);
    lv_xml_register_font(NULL, "montserrat_26", montserrat_26);
    lv_xml_register_font(NULL, "montserrat_28", montserrat_28);
    lv_xml_register_font(NULL, "montserrat_30", montserrat_30);

    /* Register subjects */

    /* Register callbacks */
    lv_xml_register_event_cb(NULL, "my_callback_1", my_callback_1);
#endif

    /* Register all the global assets so that they won't be created again when globals.xml is parsed.
     * While running in the editor skip this step to update the preview when the XML changes */
#if LV_USE_XML && !defined(LV_EDITOR_PREVIEW)
    /* Register images */
#endif

#if LV_USE_XML == 0
    /*--------------------
     *  Permanent screens
     *-------------------*/
    /* If XML is enabled it's assumed that the permanent screens are created
     * manaully from XML using lv_xml_create() */
    /* To allow screens to reference each other, create them all before calling the sceen create functions */
    screen_main = lv_obj_create(NULL);

    screen_main_create();
#endif
}

/* Callbacks */
#if defined(LV_EDITOR_PREVIEW)
void __attribute__((weak)) my_callback_1(lv_event_t * e)
{
    LV_UNUSED(e);
    LV_LOG("my_callback_1 was called\n");
}
#endif

/**********************
 *   STATIC FUNCTIONS
 **********************/