/*
 * This config file is for the SDL application
 */

/* We don't run on hardware directly */
#define CONFIG_PLATFORM (PLATFORM_HOSTED|PLATFORM_SDL)
#define HAVE_FPU

/* For Rolo and boot loader */
#define MODEL_NUMBER 100

#define MODEL_NAME   "Rockbox"

#define USB_NONE




/* define this if you have a colour LCD */
#define HAVE_LCD_COLOR

/* define this if you want album art for this target */
#define HAVE_ALBUMART

/* define this to enable bitmap scaling */
#define HAVE_BMP_SCALING

/* define this to enable JPEG decoding */
#define HAVE_JPEG

/* define this if you have access to the quickscreen */
#define HAVE_QUICKSCREEN

/* define this if you would like tagcache to build on this target */
#define HAVE_TAGCACHE

/* LCD dimensions
 *
 * overriden by configure for application builds */
#ifndef LCD_WIDTH
#define LCD_WIDTH  320
#endif

#ifndef LCD_HEIGHT
#define LCD_HEIGHT 480
#endif

#define LCD_DEPTH  24
#define LCD_PIXELFORMAT RGB888

/* define this to indicate your device's keypad */
#define HAVE_TOUCHSCREEN
#define HAVE_BUTTON_DATA
#define HAS_BUTTON_HOLD

/* define this if you have a real-time clock */
#define CONFIG_RTC APPLICATION

/* The number of bytes reserved for loadable codecs */
#define CODEC_SIZE 0x100000

/* The number of bytes reserved for loadable plugins */
#define PLUGIN_BUFFER_SIZE 0x800000

#define AB_REPEAT_ENABLE

#define CONFIG_BATTERY_MEASURE PERCENTAGE_MEASURE


#define HAVE_SCROLLWHEEL
#define CONFIG_KEYPAD SDL_PAD

/* Use SDL audio/pcm in a SDL app build */
#define HAVE_SDL
#define HAVE_SDL_AUDIO

#define HAVE_SW_TONE_CONTROLS 

/* Define this to the CPU frequency */
/*
#define CPU_FREQ 48000000
*/

#define CONFIG_LCD LCD_COWOND2

/* Define this if a programmable hotkey is mapped */
#define HAVE_HOTKEY

#define BOOTDIR "/.rockbox"

/* No special storage */
#define CONFIG_STORAGE STORAGE_HOSTFS
#define HAVE_STORAGE_FLUSH
