#ifndef generatedreg_to_esp
	#define generatedreg_to_esp
#include "pcap_regs_offsets.h"
#include "pcap_regs_ands.h"
#include "pcap_regs_bytenums.h"


unsigned char PCap04v1_TestConfig[64]={
0x1D, 0x00, 0x58, 0x10,\
0x81, 0x00, 0x0C, 0x08,\
0x00, 0xD0, 0x07, 0x00,\
0x00, 0x18, 0xFF, 0x03,\
0x00, 0x24, 0x00, 0x00,\
0x00, 0x0A, 0x50, 0x30,\
0x73, 0x04, 0x50, 0x08,\
0x5A, 0x00, 0x82, 0x08,\
0x08, 0x00, 0x47, 0x40,\
0x00, 0x00, 0x00, 0x71,\
0x00, 0x00, 0x00, 0x00,\
0x00, 0x00, 0x00, 0x01,\
0x00, 0x00, 0x00, 0x00};
unsigned char convert_register(unsigned char *registervals,unsigned char register_num,unsigned char offset,unsigned char andvalue){
	unsigned char reg_byte = registervals[register_num];
	reg_byte = reg_byte & andvalue;
	reg_byte = reg_byte>>offset;
	return reg_byte;
}




//int main()
//{
//    
//    unsigned char register_num = 0;
//    unsigned char offset = 2;
//    unsigned char andval = 0x3C;
//	
//	int register_val = (int) convert_register(PCap04v1_TestCongig,register_num,offset,andval);
//	
//	printf("Hexadecimal value is %x \n",register_val);
//
//    return 0;
//}

#endif
