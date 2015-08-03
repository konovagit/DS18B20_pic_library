#ifndef DS18B20_H
#define	DS18B20_H

#ifdef	__cplusplus
extern "C" {
#endif
#include <p18f4550.h>

#define _XTAL_FREQ 8000000     
    
#define Write_Data LATC0
#define Read_Data RC0
#define Direction_Data TRISC0

    
    
 /*Prototypes des fonctions*/
unsigned char init_sensor(void);



#ifdef	__cplusplus
}
#endif

#endif	/* DS18B20_H */

