#ifdef BUILD_PRODUCTION
#include "define.h"
#include "mhscpu.h"
#include "user_fatfs.h"
#include "user_memory.h"
#include "draw_on_lcd.h"
#include "sha256.h"
#include "gui_model.h"
#include "cmsis_os2.h"
#include "drv_qspi_flash.h"

LV_FONT_DECLARE(openSans_24);

/* ForgeBox: the boot area belongs to the ForgeBox bootloader and must never
 * be rewritten from the app. The original updater (search the image for
 * MAGIC_NUMBER, then write it over 0x01000000) is removed; this always fails
 * without touching flash. The flash driver refuses boot-area writes as well. */
int32_t UpdateBootFromFlash(void)
{
    printf("boot update disabled on ForgeBox\n");
    return -1;
}
#endif
