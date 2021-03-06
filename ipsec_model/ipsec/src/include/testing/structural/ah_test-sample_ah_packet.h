/** @file ah_test-sample_ah_packet.h
 *  @brief This file contains reference ping data for the AH module structural test
 */


// Generated by BreakPoint Software's Hex Workshop v4.10
//   http://www.hexworkshop.com
//   http://www.bpsoft.com
//
//  Source File: ah_test-sample_ah_packet.bin
//         Time: 17.11.2003 09:58
// Orig. Offset: 0 / 0x00000000
//       Length: 118 / 0x00000076 

/**
 * Dumped TCP SYN packet from 192.168.1.40 to 192.168.1.3
 *
 * FreeS/WAN configuration:
 *  
 *	ah=hmac-md5-96
 *	spi=0x1010
 *  ahkey=0x01234567_01234567_01234567_01234567
 *
 */
unsigned char ah_test_sample_ah_outer_packet[] =
{
	// Ethernet Header
	// 0x00, 0xA0, 0x24, 0x15, 0x3E, 0x12, 0x00, 0xE0, 0x29, 0x25, 0x60, 0x6C, 0x08, 0x00, 
	
	// IP Header
	0x45, 0x00, 
    0x00, 0x68, 0x79, 0x9C, 0x00, 0x00, 0x40, 0x33, 0x7D, 0x4B, 0xC0, 0xA8, 0x01, 0x28, 0xC0, 0xA8, 
    0x01, 0x03, 
	// AH Header
	0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x10, 0x09, 0x00, 0x00, 0x00, 0x01, 0x45, 0x2F, 
    0x1D, 0xE9, 0xEE, 0x8B, 0x41, 0x26, 0x44, 0x51, 0xCC, 0x8D, 
	// inner packet
	0x45, 0x00, 0x00, 0x3C, 0xE7, 0x7A, 
    0x40, 0x00, 0x40, 0x06, 0xCF, 0xC5, 0xC0, 0xA8, 0x01, 0x28, 0xC0, 0xA8, 0x01, 0x03, 0x80, 0x1A, 
    0x00, 0x50, 0x84, 0xB9, 0xC5, 0x66, 0x00, 0x00, 0x00, 0x00, 0xA0, 0x02, 0x7E, 0xB8, 0x1F, 0x75, 
    0x00, 0x00, 0x02, 0x04, 0x3F, 0x5C, 0x04, 0x02, 0x08, 0x0A, 0x00, 0x0F, 0x22, 0x1C, 0x00, 0x00, 
    0x00, 0x00, 0x01, 0x03, 0x03, 0x00, 
};

unsigned char ah_test_sample_ah_inner_packet[] =
{
	// Ethernet Header
	// 0x00, 0xA0, 0x24, 0x15, 0x3E, 0x12, 0x00, 0xE0, 0x29, 0x25, 0x60, 0x6C, 0x08, 0x00, 
	
	// IP Header
//	0x45, 0x00, 
//    0x00, 0x68, 0x79, 0x9C, 0x00, 0x00, 0x40, 0x33, 0x7D, 0x4B, 0xC0, 0xA8, 0x01, 0x28, 0xC0, 0xA8, 
//    0x01, 0x03, 
	// AH Header
//	0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x10, 0x09, 0x00, 0x00, 0x00, 0x01, 0x45, 0x2F, 
//    0x1D, 0xE9, 0xEE, 0x8B, 0x41, 0x26, 0x44, 0x51, 0xCC, 0x8D, 
	// inner packet
	0x45, 0x00, 0x00, 0x3C, 0xE7, 0x7A, 
    0x40, 0x00, 0x40, 0x06, 0xCF, 0xC5, 0xC0, 0xA8, 0x01, 0x28, 0xC0, 0xA8, 0x01, 0x03, 0x80, 0x1A, 
    0x00, 0x50, 0x84, 0xB9, 0xC5, 0x66, 0x00, 0x00, 0x00, 0x00, 0xA0, 0x02, 0x7E, 0xB8, 0x1F, 0x75, 
    0x00, 0x00, 0x02, 0x04, 0x3F, 0x5C, 0x04, 0x02, 0x08, 0x0A, 0x00, 0x0F, 0x22, 0x1C, 0x00, 0x00, 
    0x00, 0x00, 0x01, 0x03, 0x03, 0x00, 
};

// Generated by BreakPoint Software's Hex Workshop v4.10
//   http://www.hexworkshop.com
//   http://www.bpsoft.com
//
//  Source File: ping-answer.bin
//         Time: 20.11.2003 11:31
// Orig. Offset: 0 / 0x00000000
//       Length: 98 / 0x00000062
/**
 * Dumped ICMP Ping reply packet generated by lwIP
 * Sent from 192.168.1.3 (MCB167NET) to 192.168.1.5 (FreeS/WAN Debian Linux)
 *
 */ 
unsigned char ah_test_sample_ping_reply_packet[] =
{
	// Ethernet Header
    // 0x00, 0xA0, 0x24, 0x15, 0x3E, 0x12, 0xAA, 0xE0, 0x29, 0x25, 0x60, 0x6C, 0x08, 0x00, 

	// IP Header
	0x45, 0x00, 0x00, 0x54,
	0x00, 0x00, 0x40, 0x00,
	0x40, 0x01, 0xB7, 0x50,
	0xC0, 0xA8, 0x01, 0x03,
	0xC0, 0xA8, 0x01, 0x05,

	// Payload
	0x00, 0x00, 0x2A, 0xCD, 0x86, 0x04, 0x00, 0x00, 0x3F, 0xBC, 0x96, 0x8E, 0x00, 0x04, 0x8D, 0xDC,
	0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17,
	0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27,
	0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37,
};



