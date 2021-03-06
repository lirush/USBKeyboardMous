/*----------------------------------------------------------------------------
 * U S B  -  K e r n e l
 *----------------------------------------------------------------------------
 * Name:    hid.h
 * Purpose: USB HID (Human Interface Device) Definitions
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
 *----------------------------------------------------------------------------*/

#ifndef __HID_H
#define __HID_H


/* HID Subclass Codes */
#define HID_SUBCLASS_NONE               0x00
#define HID_SUBCLASS_BOOT               0x01

/* HID Protocol Codes */
#define HID_PROTOCOL_NONE               0x00
#define HID_PROTOCOL_KEYBOARD           0x01
#define HID_PROTOCOL_MOUSE              0x02


/* HID Descriptor Types */
#define HID_HID_DESCRIPTOR_TYPE         0x21
#define HID_REPORT_DESCRIPTOR_TYPE      0x22
#define HID_PHYSICAL_DESCRIPTOR_TYPE    0x23


/* HID Descriptor */
typedef __packed struct _HID_DESCRIPTOR {
  U8  bLength;
  U8  bDescriptorType;
  U16 bcdHID;
  U8  bCountryCode;
  U8  bNumDescriptors;
  /* Array of one or more descriptors */
  __packed struct _HID_DESCRIPTOR_LIST {
    U8  bDescriptorType;
    U16 wDescriptorLength;
  } DescriptorList[1];
} HID_DESCRIPTOR;


/* HID Request Codes */
#define HID_REQUEST_GET_REPORT          0x01
#define HID_REQUEST_GET_IDLE            0x02
#define HID_REQUEST_GET_PROTOCOL        0x03
#define HID_REQUEST_SET_REPORT          0x09
#define HID_REQUEST_SET_IDLE            0x0A
#define HID_REQUEST_SET_PROTOCOL        0x0B

/* HID Report Types */
#define HID_REPORT_INPUT                0x01
#define HID_REPORT_OUTPUT               0x02
#define HID_REPORT_FEATURE              0x03


/* Usage Pages */
#define HID_USAGE_PAGE_UNDEFINED        0x00
#define HID_USAGE_PAGE_GENERIC          0x01
#define HID_USAGE_PAGE_SIMULATION       0x02
#define HID_USAGE_PAGE_VR               0x03
#define HID_USAGE_PAGE_SPORT            0x04
#define HID_USAGE_PAGE_GAME             0x05
#define HID_USAGE_PAGE_DEV_CONTROLS     0x06
#define HID_USAGE_PAGE_KEYBOARD         0x07
#define HID_USAGE_PAGE_LED              0x08
#define HID_USAGE_PAGE_BUTTON           0x09
#define HID_USAGE_PAGE_ORDINAL          0x0A
#define HID_USAGE_PAGE_TELEPHONY        0x0B
#define HID_USAGE_PAGE_CONSUMER         0x0C
#define HID_USAGE_PAGE_DIGITIZER        0x0D
#define HID_USAGE_PAGE_UNICODE          0x10
#define HID_USAGE_PAGE_ALPHANUMERIC     0x14
/* ... */


/* Generic Desktop Page (0x01) */
#define HID_USAGE_GENERIC_POINTER               0x01
#define HID_USAGE_GENERIC_MOUSE                 0x02
#define HID_USAGE_GENERIC_JOYSTICK              0x04
#define HID_USAGE_GENERIC_GAMEPAD               0x05
#define HID_USAGE_GENERIC_KEYBOARD              0x06
#define HID_USAGE_GENERIC_KEYPAD                0x07
#define HID_USAGE_GENERIC_X                     0x30
#define HID_USAGE_GENERIC_Y                     0x31
#define HID_USAGE_GENERIC_Z                     0x32
#define HID_USAGE_GENERIC_RX                    0x33
#define HID_USAGE_GENERIC_RY                    0x34
#define HID_USAGE_GENERIC_RZ                    0x35
#define HID_USAGE_GENERIC_SLIDER                0x36
#define HID_USAGE_GENERIC_DIAL                  0x37
#define HID_USAGE_GENERIC_WHEEL                 0x38
#define HID_USAGE_GENERIC_HATSWITCH             0x39
#define HID_USAGE_GENERIC_COUNTED_BUFFER        0x3A
#define HID_USAGE_GENERIC_BYTE_COUNT            0x3B
#define HID_USAGE_GENERIC_MOTION_WAKEUP         0x3C
#define HID_USAGE_GENERIC_VX                    0x40
#define HID_USAGE_GENERIC_VY                    0x41
#define HID_USAGE_GENERIC_VZ                    0x42
#define HID_USAGE_GENERIC_VBRX                  0x43
#define HID_USAGE_GENERIC_VBRY                  0x44
#define HID_USAGE_GENERIC_VBRZ                  0x45
#define HID_USAGE_GENERIC_VNO                   0x46
#define HID_USAGE_GENERIC_SYSTEM_CTL            0x80
#define HID_USAGE_GENERIC_SYSCTL_POWER          0x81
#define HID_USAGE_GENERIC_SYSCTL_SLEEP          0x82
#define HID_USAGE_GENERIC_SYSCTL_WAKE           0x83
#define HID_USAGE_GENERIC_SYSCTL_CONTEXT_MENU   0x84
#define HID_USAGE_GENERIC_SYSCTL_MAIN_MENU      0x85
#define HID_USAGE_GENERIC_SYSCTL_APP_MENU       0x86
#define HID_USAGE_GENERIC_SYSCTL_HELP_MENU      0x87
#define HID_USAGE_GENERIC_SYSCTL_MENU_EXIT      0x88
#define HID_USAGE_GENERIC_SYSCTL_MENU_SELECT    0x89
#define HID_USAGE_GENERIC_SYSCTL_MENU_RIGHT     0x8A
#define HID_USAGE_GENERIC_SYSCTL_MENU_LEFT      0x8B
#define HID_USAGE_GENERIC_SYSCTL_MENU_UP        0x8C
#define HID_USAGE_GENERIC_SYSCTL_MENU_DOWN      0x8D
/* ... */

/* Simulation Controls Page (0x02) */
/* ... */
#define HID_USAGE_SIMULATION_RUDDER             0xBA
#define HID_USAGE_SIMULATION_THROTTLE           0xBB
/* ... */

/* Virtual Reality Controls Page (0x03) */
/* ... */

/* Sport Controls Page (0x04) */
/* ... */

/* Game Controls Page (0x05) */
/* ... */

/* Generic Device Controls Page (0x06) */
/* ... */

/* Keyboard/Keypad Page (0x07) */

/* Error "keys" */
#define HID_USAGE_KEYBOARD_NOEVENT              0x00
#define HID_USAGE_KEYBOARD_ROLLOVER             0x01
#define HID_USAGE_KEYBOARD_POSTFAIL             0x02
#define HID_USAGE_KEYBOARD_UNDEFINED            0x03

/* Letters */
#define HID_USAGE_KEYBOARD_aA                   0x04
#define HID_USAGE_KEYBOARD_bB                   0x05
#define HID_USAGE_KEYBOARD_cC                   0x06
#define HID_USAGE_KEYBOARD_dD                   0x07
#define HID_USAGE_KEYBOARD_eE                   0x08
#define HID_USAGE_KEYBOARD_fF                   0x09
#define HID_USAGE_KEYBOARD_gG                   0x0a
#define HID_USAGE_KEYBOARD_hH                   0x0b
#define HID_USAGE_KEYBOARD_iI                   0x0c
#define HID_USAGE_KEYBOARD_jJ                   0x0d
#define HID_USAGE_KEYBOARD_kK                   0x0e
#define HID_USAGE_KEYBOARD_lL                   0x0f
#define HID_USAGE_KEYBOARD_mM                   0x10
#define HID_USAGE_KEYBOARD_nN                   0x11
#define HID_USAGE_KEYBOARD_oO                   0x12
#define HID_USAGE_KEYBOARD_pP                   0x13
#define HID_USAGE_KEYBOARD_qQ                   0x14
#define HID_USAGE_KEYBOARD_rR                   0x15
#define HID_USAGE_KEYBOARD_sS                   0x16
#define HID_USAGE_KEYBOARD_tT                   0x17
#define HID_USAGE_KEYBOARD_uU                   0x18
#define HID_USAGE_KEYBOARD_vV                   0x19
#define HID_USAGE_KEYBOARD_wW                   0x1a
#define HID_USAGE_KEYBOARD_xX                   0x1b
#define HID_USAGE_KEYBOARD_yY                   0x1c
#define HID_USAGE_KEYBOARD_zZ                   0x1D

/* Numbers */
#define HID_USAGE_KEYBOARD_ONE                 	0x1E
#define HID_USAGE_KEYBOARD_TWO                 	0x1F
#define HID_USAGE_KEYBOARD_THREE              	0x20
#define HID_USAGE_KEYBOARD_FOUR                	0x21
#define HID_USAGE_KEYBOARD_FIVE                 0x22
#define HID_USAGE_KEYBOARD_SIX                 	0x23
#define HID_USAGE_KEYBOARD_SEVEN                0x24
#define HID_USAGE_KEYBOARD_EIGHT                0x25
#define HID_USAGE_KEYBOARD_NINE                	0x26
#define HID_USAGE_KEYBOARD_ZERO                 0x27

#define HID_USAGE_KEYBOARD_RETURN               0x28
#define HID_USAGE_KEYBOARD_ESCAPE               0x29
#define HID_USAGE_KEYBOARD_BACKSPASE            0x2A
#define HID_USAGE_KEYBOARD_TAB		              0x2B
#define HID_USAGE_KEYBOARD_SPACE	              0x2C
#define HID_USAGE_KEYBOARD_MINUS               	0x2D
#define HID_USAGE_KEYBOARD_EQUALY               0x2E
#define HID_USAGE_KEYBOARD_BRACKET_OPEN         0x2F
#define HID_USAGE_KEYBOARD_BRACKET_CLOSE        0x30
#define HID_USAGE_KEYBOARD_SLASH_LEFT		        0x31

#define HID_USAGE_KEYBOARD_SEMICOLON		        0x33
#define HID_USAGE_KEYBOARD_QUETOS				        0x34
#define HID_USAGE_KEYBOARD_TILDE				        0x35
#define HID_USAGE_KEYBOARD_LESS					        0x36
#define HID_USAGE_KEYBOARD_MORE					        0x37
#define HID_USAGE_KEYBOARD_SLASH_RIGHT	        0x38
#define HID_USAGE_KEYBOARD_CAPS_LOCK            0x39

/* Funtion keys */
#define HID_USAGE_KEYBOARD_F1                   0x3A
#define HID_USAGE_KEYBOARD_F2                   0x3B
#define HID_USAGE_KEYBOARD_F3                   0x3C
#define HID_USAGE_KEYBOARD_F4                   0x3D
#define HID_USAGE_KEYBOARD_F5                   0x3E
#define HID_USAGE_KEYBOARD_F6                   0x3F
#define HID_USAGE_KEYBOARD_F7                   0x40
#define HID_USAGE_KEYBOARD_F8                   0x41
#define HID_USAGE_KEYBOARD_F9                   0x42
#define HID_USAGE_KEYBOARD_F10                  0x43
#define HID_USAGE_KEYBOARD_F11                  0x44
#define HID_USAGE_KEYBOARD_F12                  0x45
#define HID_USAGE_KEYBOARD_F13                  0x68
#define HID_USAGE_KEYBOARD_F14                  0x69
#define HID_USAGE_KEYBOARD_F15                  0x6A
#define HID_USAGE_KEYBOARD_F16                  0x6B
#define HID_USAGE_KEYBOARD_F17                  0x6C
#define HID_USAGE_KEYBOARD_F18                  0x6D
#define HID_USAGE_KEYBOARD_F19                  0x6E
#define HID_USAGE_KEYBOARD_F20                  0x6F
#define HID_USAGE_KEYBOARD_F21                  0x70
#define HID_USAGE_KEYBOARD_F22                  0x71
#define HID_USAGE_KEYBOARD_F23                  0x72
#define HID_USAGE_KEYBOARD_F24                  0x73

#define HID_USAGE_KEYBOARD_PRINT_SCREEN         0x46
#define HID_USAGE_KEYBOARD_BREAK_PAUSE	        0x48
#define HID_USAGE_KEYBOARD_INSERT				        0x49
#define HID_USAGE_KEYBOARD_HOME					        0x4A
#define HID_USAGE_KEYBOARD_PAGEUP				        0x4B
#define HID_USAGE_KEYBOARD_DELETE				        0x4C
#define HID_USAGE_KEYBOARD_END					        0x4D
#define HID_USAGE_KEYBOARD_PAGEDOWN			        0x4E

/* Array */
#define HID_USAGE_KEYBOARD_RIGHTARR			        0x4F
#define HID_USAGE_KEYBOARD_LEFTARR			        0x50
#define HID_USAGE_KEYBOARD_DOWNARR			        0x51
#define HID_USAGE_KEYBOARD_UPARR				        0x52

/*Keypad*/
#define HID_USAGE_KEYBOARD_KEYPAD_SLASH_RIGHT   0x54
#define HID_USAGE_KEYBOARD_KEYPAD_MUL					  0x55
#define HID_USAGE_KEYBOARD_KEYPAD_MINUS				  0x56
#define HID_USAGE_KEYBOARD_KEYPAD_PLUS				  0x57
#define HID_USAGE_KEYBOARD_KEYPAD_ENTER				  0x58
#define HID_USAGE_KEYBOARD_KEYPAD_ONE					  0x59
#define HID_USAGE_KEYBOARD_KEYPAD_TWO					  0x5A
#define HID_USAGE_KEYBOARD_KEYPAD_THREE				  0x5B
#define HID_USAGE_KEYBOARD_KEYPAD_FOUR				  0x5C
#define HID_USAGE_KEYBOARD_KEYPAD_FIVE				  0x5D
#define HID_USAGE_KEYBOARD_KEYPAD_SIX					  0x5E
#define HID_USAGE_KEYBOARD_KEYPAD_SEVEN				  0x5F
#define HID_USAGE_KEYBOARD_KEYPAD_EIGHT				  0x60
#define HID_USAGE_KEYBOARD_KEYPAD_NINE				  0x61
#define HID_USAGE_KEYBOARD_KEYPAD_ZERO				  0x62
#define HID_USAGE_KEYBOARD_KEYPAD_DELETE			  0x63
#define HID_USAGE_KEYBOARD_KEYPAD_EQUALLY			  0x67

#define HID_USAGE_KEYBOARD_EUROPE2						  0x64
#define HID_USAGE_KEYBOARD_APP								  0x65
#define HID_USAGE_KEYBOARD_POWER							  0x66


/* Modifier Keys */
#define HID_USAGE_KEYBOARD_MODIFIER_LCTRL_BIT   0
#define HID_USAGE_KEYBOARD_MODIFIER_LSHFT_BIT   1
#define HID_USAGE_KEYBOARD_MODIFIER_LALT_BIT    2
#define HID_USAGE_KEYBOARD_MODIFIER_LGUI_BIT    3
#define HID_USAGE_KEYBOARD_MODIFIER_RCTRL_BIT   4
#define HID_USAGE_KEYBOARD_MODIFIER_RSHFT_BIT   5
#define HID_USAGE_KEYBOARD_MODIFIER_RALT_BIT    6
#define HID_USAGE_KEYBOARD_MODIFIER_RGUI_BIT    7

#define HID_USAGE_KEYBOARD_LCTRL                0xE0
#define HID_USAGE_KEYBOARD_LSHFT                0xE1
#define HID_USAGE_KEYBOARD_LALT                 0xE2
#define HID_USAGE_KEYBOARD_LGUI                 0xE3
#define HID_USAGE_KEYBOARD_RCTRL                0xE4
#define HID_USAGE_KEYBOARD_RSHFT                0xE5
#define HID_USAGE_KEYBOARD_RALT                 0xE6
#define HID_USAGE_KEYBOARD_RGUI                 0xE7
#define HID_USAGE_KEYBOARD_SCROLL_LOCK          0x47
#define HID_USAGE_KEYBOARD_NUM_LOCK             0x53

/* ... */

/* LED Page (0x08) */
#define HID_USAGE_LED_NUM_LOCK                  0x01
#define HID_USAGE_LED_CAPS_LOCK                 0x02
#define HID_USAGE_LED_SCROLL_LOCK               0x03
#define HID_USAGE_LED_COMPOSE                   0x04
#define HID_USAGE_LED_KANA                      0x05
#define HID_USAGE_LED_POWER                     0x06
#define HID_USAGE_LED_SHIFT                     0x07
#define HID_USAGE_LED_DO_NOT_DISTURB            0x08
#define HID_USAGE_LED_MUTE                      0x09
#define HID_USAGE_LED_TONE_ENABLE               0x0A
#define HID_USAGE_LED_HIGH_CUT_FILTER           0x0B
#define HID_USAGE_LED_LOW_CUT_FILTER            0x0C
#define HID_USAGE_LED_EQUALIZER_ENABLE          0x0D
#define HID_USAGE_LED_SOUND_FIELD_ON            0x0E
#define HID_USAGE_LED_SURROUND_FIELD_ON         0x0F
#define HID_USAGE_LED_REPEAT                    0x10
#define HID_USAGE_LED_STEREO                    0x11
#define HID_USAGE_LED_SAMPLING_RATE_DETECT      0x12
#define HID_USAGE_LED_SPINNING                  0x13
#define HID_USAGE_LED_CAV                       0x14
#define HID_USAGE_LED_CLV                       0x15
#define HID_USAGE_LED_RECORDING_FORMAT_DET      0x16
#define HID_USAGE_LED_OFF_HOOK                  0x17
#define HID_USAGE_LED_RING                      0x18
#define HID_USAGE_LED_MESSAGE_WAITING           0x19
#define HID_USAGE_LED_DATA_MODE                 0x1A
#define HID_USAGE_LED_BATTERY_OPERATION         0x1B
#define HID_USAGE_LED_BATTERY_OK                0x1C
#define HID_USAGE_LED_BATTERY_LOW               0x1D
#define HID_USAGE_LED_SPEAKER                   0x1E
#define HID_USAGE_LED_HEAD_SET                  0x1F
#define HID_USAGE_LED_HOLD                      0x20
#define HID_USAGE_LED_MICROPHONE                0x21
#define HID_USAGE_LED_COVERAGE                  0x22
#define HID_USAGE_LED_NIGHT_MODE                0x23
#define HID_USAGE_LED_SEND_CALLS                0x24
#define HID_USAGE_LED_CALL_PICKUP               0x25
#define HID_USAGE_LED_CONFERENCE                0x26
#define HID_USAGE_LED_STAND_BY                  0x27
#define HID_USAGE_LED_CAMERA_ON                 0x28
#define HID_USAGE_LED_CAMERA_OFF                0x29
#define HID_USAGE_LED_ON_LINE                   0x2A
#define HID_USAGE_LED_OFF_LINE                  0x2B
#define HID_USAGE_LED_BUSY                      0x2C
#define HID_USAGE_LED_READY                     0x2D
#define HID_USAGE_LED_PAPER_OUT                 0x2E
#define HID_USAGE_LED_PAPER_JAM                 0x2F
#define HID_USAGE_LED_REMOTE                    0x30
#define HID_USAGE_LED_FORWARD                   0x31
#define HID_USAGE_LED_REVERSE                   0x32
#define HID_USAGE_LED_STOP                      0x33
#define HID_USAGE_LED_REWIND                    0x34
#define HID_USAGE_LED_FAST_FORWARD              0x35
#define HID_USAGE_LED_PLAY                      0x36
#define HID_USAGE_LED_PAUSE                     0x37
#define HID_USAGE_LED_RECORD                    0x38
#define HID_USAGE_LED_ERROR                     0x39
#define HID_USAGE_LED_SELECTED_INDICATOR        0x3A
#define HID_USAGE_LED_IN_USE_INDICATOR          0x3B
#define HID_USAGE_LED_MULTI_MODE_INDICATOR      0x3C
#define HID_USAGE_LED_INDICATOR_ON              0x3D
#define HID_USAGE_LED_INDICATOR_FLASH           0x3E
#define HID_USAGE_LED_INDICATOR_SLOW_BLINK      0x3F
#define HID_USAGE_LED_INDICATOR_FAST_BLINK      0x40
#define HID_USAGE_LED_INDICATOR_OFF             0x41
#define HID_USAGE_LED_FLASH_ON_TIME             0x42
#define HID_USAGE_LED_SLOW_BLINK_ON_TIME        0x43
#define HID_USAGE_LED_SLOW_BLINK_OFF_TIME       0x44
#define HID_USAGE_LED_FAST_BLINK_ON_TIME        0x45
#define HID_USAGE_LED_FAST_BLINK_OFF_TIME       0x46
#define HID_USAGE_LED_INDICATOR_COLOR           0x47
#define HID_USAGE_LED_RED                       0x48
#define HID_USAGE_LED_GREEN                     0x49
#define HID_USAGE_LED_AMBER                     0x4A
#define HID_USAGE_LED_GENERIC_INDICATOR         0x4B

/* Button Page (0x09) */
/*   There is no need to label these usages. */

/* Ordinal Page (0x0A) */
/*   There is no need to label these usages. */

/* Telephony Device Page (0x0B) */
#define HID_USAGE_TELEPHONY_PHONE               0x01
#define HID_USAGE_TELEPHONY_ANSWERING_MACHINE   0x02
#define HID_USAGE_TELEPHONY_MESSAGE_CONTROLS    0x03
#define HID_USAGE_TELEPHONY_HANDSET             0x04
#define HID_USAGE_TELEPHONY_HEADSET             0x05
#define HID_USAGE_TELEPHONY_KEYPAD              0x06
#define HID_USAGE_TELEPHONY_PROGRAMMABLE_BUTTON 0x07
/* ... */

/* Consumer Page (0x0C) */
#define HID_USAGE_CONSUMER_CONTROL              0x01
/* ... */

/* and others ... */


/* HID Report Item Macros */

/* Main Items */
#define HID_Input(x)           0x81,x
#define HID_Output(x)          0x91,x
#define HID_Feature(x)         0xB1,x // in other example it = 0xB2 !!
#define HID_Collection(x)      0xA1,x
#define HID_EndCollection      0xC0

/* Data (Input, Output, Feature) */
#define HID_Data               0<<0
#define HID_Constant           1<<0
#define HID_Array              0<<1
#define HID_Variable           1<<1
#define HID_Absolute           0<<2
#define HID_Relative           1<<2
#define HID_NoWrap             0<<3
#define HID_Wrap               1<<3
#define HID_Linear             0<<4
#define HID_NonLinear          1<<4
#define HID_PreferredState     0<<5
#define HID_NoPreferred        1<<5
#define HID_NoNullPosition     0<<6
#define HID_NullState          1<<6
#define HID_NonVolatile        0<<7
#define HID_Volatile           1<<7

/* Collection Data */
#define HID_Physical           0x00
#define HID_Application        0x01
#define HID_Logical            0x02
#define HID_Report             0x03
#define HID_NamedArray         0x04
#define HID_UsageSwitch        0x05
#define HID_UsageModifier      0x06

/* Global Items */
#define HID_UsagePage(x)       0x05,x
#define HID_UsagePageVendor(x) 0x06,x,0xFF
#define HID_LogicalMin(x)      0x15,x
#define HID_LogicalMinS(x)     0x16,(x&0xFF),((x>>8)&0xFF)
#define HID_LogicalMinL(x)     0x17,(x&0xFF),((x>>8)&0xFF),((x>>16)&0xFF),((x>>24)&0xFF)
#define HID_LogicalMax(x)      0x25,x
#define HID_LogicalMaxS(x)     0x26,(x&0xFF),((x>>8)&0xFF)
#define HID_LogicalMaxL(x)     0x27,(x&0xFF),((x>>8)&0xFF),((x>>16)&0xFF),((x>>24)&0xFF)
#define HID_PhysicalMin(x)     0x35,x
#define HID_PhysicalMinS(x)    0x36,(x&0xFF),((x>>8)&0xFF)
#define HID_PhysicalMinL(x)    0x37,(x&0xFF),((x>>8)&0xFF),((x>>16)&0xFF),((x>>24)&0xFF)
#define HID_PhysicalMax(x)     0x45,x
#define HID_PhysicalMaxS(x)    0x46,(x&0xFF),((x>>8)&0xFF)
#define HID_PhysicalMaxL(x)    0x47,(x&0xFF),((x>>8)&0xFF),((x>>16)&0xFF),((x>>24)&0xFF)
#define HID_UnitExponent(x)    0x55,x
#define HID_Unit(x)            0x65,x
#define HID_UnitS(x)           0x66,(x&0xFF),((x>>8)&0xFF)
#define HID_UnitL(x)           0x67,(x&0xFF),((x>>8)&0xFF),((x>>16)&0xFF),((x>>24)&0xFF)
#define HID_ReportSize(x)      0x75,x
#define HID_ReportID(x)        0x85,x
#define HID_ReportCount(x)     0x95,x
#define HID_Push               0xA0
#define HID_Pop                0xB0

/* Local Items */
#define HID_Usage(x)           0x09,x
#define HID_UsageMin(x)        0x19,x
#define HID_UsageMax(x)        0x29,x


#endif  /* __HID_H */
