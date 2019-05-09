#ifndef __USB4640_H__
#define __USB4640_H__

#define USB4640_NAME	"usb4640"
/*
#define USB4640_OFF_PORT1	(1 << 1)
#define USB4640_OFF_PORT2	(1 << 2)
#define USB4640_OFF_PORT3	(1 << 3)
*/
enum usb4640_mode {
	USB4640_MODE_UNKNOWN = 1,
	USB4640_MODE_HUB,
	USB4640_MODE_STANDBY,
};

struct usb4640_platform_data {
	enum usb4640_mode	initial_mode;
/*	u8      prot_off_mask;
	int	gpio_intn;
	int 	gpio_connect;
*/	int	gpio_reset;
};

#endif
