#ifndef _PWM_H_
#define _PWM_H_

#ifdef __cplusplus
extern "C" {
#endif

/******************************** INCLUDE FILES *******************************/
#include "generic_t.h"

/*********************************** DEFINES **********************************/

/************************** INTERFACE DATA DEFINITIONS ************************/

/************************* INTERFACE FUNCTION PROTOTYPES **********************/
void pwmInit(void);
int pwmProcessData(uint8_t *sesionId, uint8_t *dataStr);

#ifdef __cplusplus
}
#endif

#endif /* _PWM_H_ */