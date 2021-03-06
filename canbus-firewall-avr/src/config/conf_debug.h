/*
  Copyright (C) 2015, Jaguar Land Rover
  This program is licensed under the terms and conditions of the
  Mozilla Public License, version 2.0.  The full text of the 
  Mozilla Public License is at https://www.mozilla.org/MPL/2.0/
*/

/*
 * conf_debug.h
 *
 */ 

/*
* store defines and macros needed for various dbg output or configurations
*/

#ifndef CONF_DEBUG_H_
#define CONF_DEBUG_H_

#include <asf.h>

#define DBG_ON						1			//master enable debug
#define DBG_INIT					DBG_ON		
#define DBG_TEST					1			//temp, misc
#define DBG_CLKS					DBG_ON		&& 1 //clocks
#define DBG_CAN_MSG					DBG_ON		&& 0 //can messages
#define DBG_FLASH					DBG_ON		&& 0 //flash
#define DBG_HMAC					DBG_ON		&& 0 //hmac
#define DBG_RULES					DBG_ON		&& 0 //rules
#define DBG_RULESET					DBG_ON		&& 1 //ruleset load
#define DBG_RULESET_MEM				DBG_ON		&& 0 //ruleset in memory
#define DBG_MCP						DBG_ON		&& 0 //mcp chipsets
#define DBG_MCP_CAN_RX				DBG_MCP		&& 0 //messages received
#define DBG_MCP_CAN_TX				DBG_MCP		&& 0 //messages sent
#define DBG_INT						DBG_ON		&& 0 //interrupts
#define DBG_MCP_STATE				DBG_ON		&& 0 //state machine 
#define DBG_MCP_STATUS				DBG_ON		&& 0 //mcp chipset status printing
#define DBG_MSG_QUE					DBG_ON		&& 1 //message que
#define DBG_TIME					DBG_ON		&& 0 // timestamping
#define DBG_TIME_INT				DBG_TIME	&& 0 // timestamping
#define DBG_TIME_PDCA				DBG_TIME	&& 0 // timestamping
#define DBG_TIME_MCP				DBG_TIME	&& 0 // timestamping
#define DBG_TIME_STATUS				DBG_TIME	&& 0 // timestamping
#define DBG_TEST_THROUGHPUT_STM_ONLY/*DBG_ON  &&*/ 0 // all messages received will be flagged for immediate retransmission
#define DBG_TEST_THROUGHPUT_PROC				   0 // all messages in processing interrupt flagged for immediate retransmission
#define DBG_INT_GLBL_SWITCH						   0
#define DBG_INT_GLBL_SWITCH_EIC		DBG_INT_GLBL_SWITCH && 0 // disable global interrupts in respective handler
#define DBG_INT_GLBL_SWITCH_PDCA	DBG_INT_GLBL_SWITCH && 0 // disable global interrupts in respective handler
#define DBG_INT_GLBL_SWITCH_MCP		DBG_INT_GLBL_SWITCH && 0 // disable global interrupts in respective handler
#define DBG_PROC					DBG_ON		&& 0
#define DBG_RX_PTR					DBG_ON		&& 0
#define DBG_WDT						DBG_ON		&& 0
#define DBG_LED						DBG_ON		&& 0

#define DBG_TRACE					DBG_ON		&& 0

//led dbg behaviour
#define DBG_LED_USE_LED_LOOPBACK	1

#define PRINT_NEWLINE()       { if(DBG_ON) {print_dbg("\n\r");} }

extern void print_array_uint8(uint8_t *arr, int length);

#endif /* CONF_DEBUG_H_ */