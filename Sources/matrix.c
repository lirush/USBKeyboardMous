#include "matrix.h"

/*matrix[row][col]*/
uint8_t matrix[MATRIX_ROWS][MATRIX_COLS]=
	{0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x62,		//0
	 0x42,	0xE2,	0x06,	0x11,	0x36,	0x00,	0x00,	0x63,		//1
	 0x00,	0xE1,	0x1b,	0x05,	0x0e,	0x34,	0x00,	0x5A,		//2
	 0x3E,	0x00, 0x07,	0x0b,	0x0c,	0x00,	0x00,	0x5D,		//3
	 0x3C,	0xE0,	0x08,	0x0a,	0x12,	0x2F,	0x00,	0x5E,		//4
	 0x3A,	0x14,	0x21,	0x1c,	0x27,	0x2E,	0x00,	0x60,		//5
	 0x3B,	0x1E,	0x20,	0x23,	0x26,	0x00,	0x2A,	0x29,		//6
	 0x45,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x53,		//7
	 0x00,	0x00,	0x00,	0x00,	0x00,	0x39,	0x00,	0x44,		//8
	 0x43,	0x00,	0x2C,	0x00,	0x37,	0xE5,	0x59,	0x57,		//9
	 0x41,	0x1D,	0x19,	0x10,	0x38,	0x28,	0x00,	0x5B,		//10
	 0x3F,	0x16,	0x09,	0x0d,	0x0f,	0x30,	0x5C,	0x56,		//11
	 0x3D,	0x04,	0x17,	0x18,	0x33,	0x00,	0x5F,	0x55,		//12
	 0x2B,	0x1a,	0x15,	0x24,	0x13,	0x31,	0x00,	0x61,		//13
	 0x35,	0x1F,	0x22,	0x25,	0x2D,	0x00,	0x00,	0x47,		//14
	 0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,		//15
	 0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x49,		//16
	 0x00,	0xE6,	0x00,	0x00,	0x00,	0x00,	0x00,	0x4C,		//17
	 0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x51,		//18
	 0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,		//19
	 0x00,	0xE4,	0x00,	0x00,	0x00,	0x00,	0x00,	0x4F,		//20
	 0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x52,		//21
	 0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,		//22
	 0x00,	0x00,	0xE7,	0x00,	0x00,	0x00,	0x00,	0x00,		//23
	 0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,		//24
	 0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x4D,	0x00,		//25
	 0x00,	0x00,	0x00,	0x00,	0x54,	0x58,	0x00,	0x4E,		//26
	 0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x50,	0x00,		//27
	 0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x4A,	0x46,		//28
	 0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x4B,		//29
	 0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,		//30
	 0x00,	0xE3,	0x65,	0x00,	0x00,	0x00,	0x00,	0x00};	//31	 	 
	
uint8_t getRow(uint8_t code)
{
		return (code & 0x0F);
}

uint8_t getCol(uint8_t code)
{
		return (code >> 4);
}
	 
uint8_t Matrix_Get_Scancode(uint8_t code, uint8_t move)
{
	uint8_t row=0, col=0;
	
	uint8_t offset= (move==DOWN_MATRIX)?16:0;
	
	row = getRow(code)+offset;
	
	col = getCol(code);
		
	return matrix[row][col];
}

