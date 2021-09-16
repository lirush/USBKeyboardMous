/*----------------------------------------------------------------------------
 * U S B  -  K e r n e l
 *----------------------------------------------------------------------------
 * Name:    usbdesc.c
 * Purpose: USB Descriptors
 * Version: V1.20
 *----------------------------------------------------------------------------
 * This file is part of the uVision/ARM development tools.
 * This software may only be used under the terms of a valid, current,
 * end user licence from KEIL for a compatible version of KEIL software
 * development tools. Nothing else gives you the right to use this software.
 *
 * This software is supplied "AS IS" without warranties of any kind.
 *
 * Copyright (c) 2009-2011 Keil - An ARM Company. All rights reserved.
 *----------------------------------------------------------------------------
 * History:
 *          V1.20 Changed string descriptor handling
 *                Changed HID Report Descriptor
 *          V1.00 Initial Version
 *----------------------------------------------------------------------------*/

#include "type.h"

#include "usb.h"
#include "usbcfg_MDR32F9x.h"
#include "usbdesc.h"
#include "hid.h"

int lenght_conf=0;

U8 InitHIDev=USE_BOTH;

/*------------------------------------------------------------------------------
  HID Report Descriptor
 *------------------------------------------------------------------------------*/

const U8 HID_ReportDescriptor[] = 
	{
0x05, 0x01,	//USAGE_PAGE (Generic Desktop)	
0x09, 0x06,	//USAGE (Keyboard)	
0xA1, 0x01, //COLLECTION (Application)	
//0x85, 0x01, //Report ID (1)
0x05, 0x07,	//USAGE_PAGE (Keyboard)	
0x19, 0xE0,	//USAGE_MINIMUM (Keyboard LeftControl)	
0x29, 0xE7,	//USAGE_MAXIMUM (Keyboard Right GUI)	
0x15, 0x00,	//LOGICAL_MINIMUM (0)	
0x25, 0x01, //LOGICAL_MAXIMUM (1)	
0x75, 0x01, //REPORT_SIZE (1)	
0x95, 0x08, //REPORT_COUNT (8)	
0x81, 0x02, //INPUT (Data,Var,Abs)	
0x95, 0x01, //REPORT_COUNT (1)	
0x75, 0x08, //REPORT_SIZE (8)	
0x81, 0x03, //INPUT (Cnst,Var,Abs)	
0x95, 0x05, //REPORT_COUNT (5)	
0x75, 0x01, //REPORT_SIZE (1)	
0x05, 0x08,	//USAGE_PAGE (LEDs)	
0x19, 0x01,	//USAGE_MINIMUM (Num Lock)	
0x29, 0x05,	//USAGE_MAXIMUM (Kana)	
0x91, 0x02,	//OUTPUT (Data,Var,Abs)	
0x95, 0x01, //REPORT_COUNT (1)	
0x75, 0x03, //REPORT_SIZE (3)	
0x91, 0x03, //OUTPUT (Cnst,Var,Abs)	
0x95, 0x06, //REPORT_COUNT (6)	
0x75, 0x08, //REPORT_SIZE (8)	
0x15, 0x00, //LOGICAL_MINIMUM (0)	
0x25, 0x65, //LOGICAL_MAXIMUM (101)	
0x05, 0x07,	//USAGE_PAGE (Keyboard)	
0x19, 0x00,	//USAGE_MINIMUM (Reserved (no event indicated))	
0x29, 0x65,	//USAGE_MAXIMUM (Keyboard Application)	
0x81, 0x00,	//INPUT (Data,Ary,Abs)	
0xC0,				//END_COLLECTION
};

//const U8 HID_ReportDescriptorM[] = 
//	{
//    0x05, 0x01,       /* Usage Page (Generic Desktop),       */     \
//    0x09, 0x02,       /* Usage (Mouse),                      */     \
//    0xA1, 0x01,       /*  Collection (Application),          */     \
//    0x09, 0x01,       /*   Usage (Pointer),                  */     \
//    0xA1, 0x00,       /*  Collection (Physical),             */     \
//    0x05, 0x09,       /*     Usage Page (Buttons),           */     \
//    0x19, 0x01,       /*     Usage Minimum (1),             */     \
//    0x29, 0x03,       /*     Usage Maximum (3),           */     \
//    0x15, 0x00,       /*     Logical Minimum (0),            */     \
//    0x25, 0x01,       /*     Logical Maximum (1),            */     \
//    0x75, 0x01,       /*     Report Size (1),                */     \
//    0x95, 0x03,       /*     Report Count (3),            */     \
//    0x81, 0x02,       /*     Input (Data, Variable, Absolute)*/     \
//    0x75, 0x05, 			/*     Report Size (5),         */     \
//    0x95, 0x01,       /*     Report Count (1),               */     \
//    0x81, 0x01,       /*     Input (Constant),               */     \
//    0x05, 0x01,       /*     Usage Page (Generic Desktop),   */     \
//    0x09, 0x30,       /*     Usage (X),                      */     \
//    0x09, 0x31,       /*     Usage (Y),                      */     \
//    0x09, 0x38,      	/*     Usage (Scroll),                 */			\
//    0x15, 0x81,       /*     Logical Minimum (-127),         */     \
//    0x25, 0x7F,       /*     Logical Maximum (127),          */     \
//    0x75, 0x08,       /*     Report Size (8),                */     \
//    0x95, 0x03,       /*     Report Count (3),               */     \
//    0x81, 0x06,       /*     Input (Data, Variable, Relative)*/     \
//    0xC0,         /*  End Collection,                        */     \
//    0xC0,         /* End Collection                          */     \
//};

const U8 HID_ReportDescriptorM[] = 
	{
0x05, 0x01,  
0x09, 0x02,  
0xA1, 0x01,  
0x05, 0x09,  
0x19, 0x01,  
0x29, 0x03,  
0x15, 0x00,  
0x25, 0x01,  
0x95, 0x03,  
0x75, 0x01,  
0x81, 0x02,  
0x95, 0x01,  
0x75, 0x05,  
0x81, 0x03,  
0x05, 0x01,  
0x09, 0x01,  
0xA1, 0x00,  
0x09, 0x30,  
0x09, 0x31,  
0x15, 0x81,  
0x25, 0x7F,  
0x75, 0x08,  
0x95, 0x02,  
0x81, 0x06,  
0xC0,  
0x09, 0x38,  
0x15, 0x81,  
0x25, 0x7F,  
0x75, 0x08,  
0x95, 0x01,  
0x81, 0x06,  
0xC0 
};


const U16 HID_ReportDescSize = sizeof(HID_ReportDescriptor);
const U16 HID_ReportDescSizeM = sizeof(HID_ReportDescriptorM);

U8 USB_DeviceDescriptor[18] = {0};

/* USB Configuration Descriptor */
/*   All Descriptors (Configuration, Interface, Endpoint, Class, Vendor) */
U8 USB_ConfigDescriptor[68] = {0};


/* USB String Descriptor (optional) */
U8 USB_StringDescriptor[90] = {0};
