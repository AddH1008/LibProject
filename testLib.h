#ifndef NOTIFICATION_H_
#define NOTIFICATION_H_

#include "stdint.h"

typedef struct _GPI_MESSAGE_TYPE_ {
	uint8_t eMessageType1;
	uint8_t eMessageType2;
	uint8_t eMessageType3;
	uint8_t eMessageType4;
	uint16_t eMessageType5;

} s_Notif_Queue_Message_t;

#endif /* NOTIFICATION_H_ */
