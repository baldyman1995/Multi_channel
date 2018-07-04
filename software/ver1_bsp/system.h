/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios2_gen2_0' in SOPC Builder design 'core'
 * SOPC Builder design path: ../../core.sopcinfo
 *
 * Generated: Tue Jun 05 15:54:23 JST 2018
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00008820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x10
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00004020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x10
#define ALT_CPU_NAME "nios2_gen2_0"
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00004000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00008820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x10
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00004020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x10
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00004000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_TIMER
#define __ALTERA_AVALON_UART
#define __ALTERA_NIOS2_GEN2


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone V"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/uart"
#define ALT_STDERR_BASE 0x9000
#define ALT_STDERR_DEV uart
#define ALT_STDERR_IS_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_uart"
#define ALT_STDIN "/dev/uart"
#define ALT_STDIN_BASE 0x9000
#define ALT_STDIN_DEV uart
#define ALT_STDIN_IS_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_uart"
#define ALT_STDOUT "/dev/uart"
#define ALT_STDOUT_BASE 0x9000
#define ALT_STDOUT_DEV uart
#define ALT_STDOUT_IS_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_uart"
#define ALT_SYSTEM_NAME "core"


/*
 * freq_0 configuration
 *
 */

#define ALT_MODULE_CLASS_freq_0 altera_avalon_pio
#define FREQ_0_BASE 0x90c0
#define FREQ_0_BIT_CLEARING_EDGE_REGISTER 0
#define FREQ_0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FREQ_0_CAPTURE 0
#define FREQ_0_DATA_WIDTH 24
#define FREQ_0_DO_TEST_BENCH_WIRING 0
#define FREQ_0_DRIVEN_SIM_VALUE 0
#define FREQ_0_EDGE_TYPE "NONE"
#define FREQ_0_FREQ 50000000
#define FREQ_0_HAS_IN 1
#define FREQ_0_HAS_OUT 0
#define FREQ_0_HAS_TRI 0
#define FREQ_0_IRQ -1
#define FREQ_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FREQ_0_IRQ_TYPE "NONE"
#define FREQ_0_NAME "/dev/freq_0"
#define FREQ_0_RESET_VALUE 0
#define FREQ_0_SPAN 16
#define FREQ_0_TYPE "altera_avalon_pio"


/*
 * freq_1 configuration
 *
 */

#define ALT_MODULE_CLASS_freq_1 altera_avalon_pio
#define FREQ_1_BASE 0x90d0
#define FREQ_1_BIT_CLEARING_EDGE_REGISTER 0
#define FREQ_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FREQ_1_CAPTURE 0
#define FREQ_1_DATA_WIDTH 24
#define FREQ_1_DO_TEST_BENCH_WIRING 0
#define FREQ_1_DRIVEN_SIM_VALUE 0
#define FREQ_1_EDGE_TYPE "NONE"
#define FREQ_1_FREQ 50000000
#define FREQ_1_HAS_IN 1
#define FREQ_1_HAS_OUT 0
#define FREQ_1_HAS_TRI 0
#define FREQ_1_IRQ -1
#define FREQ_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FREQ_1_IRQ_TYPE "NONE"
#define FREQ_1_NAME "/dev/freq_1"
#define FREQ_1_RESET_VALUE 0
#define FREQ_1_SPAN 16
#define FREQ_1_TYPE "altera_avalon_pio"


/*
 * freq_2 configuration
 *
 */

#define ALT_MODULE_CLASS_freq_2 altera_avalon_pio
#define FREQ_2_BASE 0x90e0
#define FREQ_2_BIT_CLEARING_EDGE_REGISTER 0
#define FREQ_2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FREQ_2_CAPTURE 0
#define FREQ_2_DATA_WIDTH 24
#define FREQ_2_DO_TEST_BENCH_WIRING 0
#define FREQ_2_DRIVEN_SIM_VALUE 0
#define FREQ_2_EDGE_TYPE "NONE"
#define FREQ_2_FREQ 50000000
#define FREQ_2_HAS_IN 1
#define FREQ_2_HAS_OUT 0
#define FREQ_2_HAS_TRI 0
#define FREQ_2_IRQ -1
#define FREQ_2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FREQ_2_IRQ_TYPE "NONE"
#define FREQ_2_NAME "/dev/freq_2"
#define FREQ_2_RESET_VALUE 0
#define FREQ_2_SPAN 16
#define FREQ_2_TYPE "altera_avalon_pio"


/*
 * freq_3 configuration
 *
 */

#define ALT_MODULE_CLASS_freq_3 altera_avalon_pio
#define FREQ_3_BASE 0x90f0
#define FREQ_3_BIT_CLEARING_EDGE_REGISTER 0
#define FREQ_3_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FREQ_3_CAPTURE 0
#define FREQ_3_DATA_WIDTH 24
#define FREQ_3_DO_TEST_BENCH_WIRING 0
#define FREQ_3_DRIVEN_SIM_VALUE 0
#define FREQ_3_EDGE_TYPE "NONE"
#define FREQ_3_FREQ 50000000
#define FREQ_3_HAS_IN 1
#define FREQ_3_HAS_OUT 0
#define FREQ_3_HAS_TRI 0
#define FREQ_3_IRQ -1
#define FREQ_3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FREQ_3_IRQ_TYPE "NONE"
#define FREQ_3_NAME "/dev/freq_3"
#define FREQ_3_RESET_VALUE 0
#define FREQ_3_SPAN 16
#define FREQ_3_TYPE "altera_avalon_pio"


/*
 * freq_4 configuration
 *
 */

#define ALT_MODULE_CLASS_freq_4 altera_avalon_pio
#define FREQ_4_BASE 0x9100
#define FREQ_4_BIT_CLEARING_EDGE_REGISTER 0
#define FREQ_4_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FREQ_4_CAPTURE 0
#define FREQ_4_DATA_WIDTH 24
#define FREQ_4_DO_TEST_BENCH_WIRING 0
#define FREQ_4_DRIVEN_SIM_VALUE 0
#define FREQ_4_EDGE_TYPE "NONE"
#define FREQ_4_FREQ 50000000
#define FREQ_4_HAS_IN 1
#define FREQ_4_HAS_OUT 0
#define FREQ_4_HAS_TRI 0
#define FREQ_4_IRQ -1
#define FREQ_4_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FREQ_4_IRQ_TYPE "NONE"
#define FREQ_4_NAME "/dev/freq_4"
#define FREQ_4_RESET_VALUE 0
#define FREQ_4_SPAN 16
#define FREQ_4_TYPE "altera_avalon_pio"


/*
 * freq_5 configuration
 *
 */

#define ALT_MODULE_CLASS_freq_5 altera_avalon_pio
#define FREQ_5_BASE 0x9110
#define FREQ_5_BIT_CLEARING_EDGE_REGISTER 0
#define FREQ_5_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FREQ_5_CAPTURE 0
#define FREQ_5_DATA_WIDTH 24
#define FREQ_5_DO_TEST_BENCH_WIRING 0
#define FREQ_5_DRIVEN_SIM_VALUE 0
#define FREQ_5_EDGE_TYPE "NONE"
#define FREQ_5_FREQ 50000000
#define FREQ_5_HAS_IN 1
#define FREQ_5_HAS_OUT 0
#define FREQ_5_HAS_TRI 0
#define FREQ_5_IRQ -1
#define FREQ_5_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FREQ_5_IRQ_TYPE "NONE"
#define FREQ_5_NAME "/dev/freq_5"
#define FREQ_5_RESET_VALUE 0
#define FREQ_5_SPAN 16
#define FREQ_5_TYPE "altera_avalon_pio"


/*
 * freq_6 configuration
 *
 */

#define ALT_MODULE_CLASS_freq_6 altera_avalon_pio
#define FREQ_6_BASE 0x9120
#define FREQ_6_BIT_CLEARING_EDGE_REGISTER 0
#define FREQ_6_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FREQ_6_CAPTURE 0
#define FREQ_6_DATA_WIDTH 24
#define FREQ_6_DO_TEST_BENCH_WIRING 0
#define FREQ_6_DRIVEN_SIM_VALUE 0
#define FREQ_6_EDGE_TYPE "NONE"
#define FREQ_6_FREQ 50000000
#define FREQ_6_HAS_IN 1
#define FREQ_6_HAS_OUT 0
#define FREQ_6_HAS_TRI 0
#define FREQ_6_IRQ -1
#define FREQ_6_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FREQ_6_IRQ_TYPE "NONE"
#define FREQ_6_NAME "/dev/freq_6"
#define FREQ_6_RESET_VALUE 0
#define FREQ_6_SPAN 16
#define FREQ_6_TYPE "altera_avalon_pio"


/*
 * freq_7 configuration
 *
 */

#define ALT_MODULE_CLASS_freq_7 altera_avalon_pio
#define FREQ_7_BASE 0x9130
#define FREQ_7_BIT_CLEARING_EDGE_REGISTER 0
#define FREQ_7_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FREQ_7_CAPTURE 0
#define FREQ_7_DATA_WIDTH 24
#define FREQ_7_DO_TEST_BENCH_WIRING 0
#define FREQ_7_DRIVEN_SIM_VALUE 0
#define FREQ_7_EDGE_TYPE "NONE"
#define FREQ_7_FREQ 50000000
#define FREQ_7_HAS_IN 1
#define FREQ_7_HAS_OUT 0
#define FREQ_7_HAS_TRI 0
#define FREQ_7_IRQ -1
#define FREQ_7_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FREQ_7_IRQ_TYPE "NONE"
#define FREQ_7_NAME "/dev/freq_7"
#define FREQ_7_RESET_VALUE 0
#define FREQ_7_SPAN 16
#define FREQ_7_TYPE "altera_avalon_pio"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 4
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * onchip_memory2_0 configuration
 *
 */

#define ALT_MODULE_CLASS_onchip_memory2_0 altera_avalon_onchip_memory2
#define ONCHIP_MEMORY2_0_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_MEMORY2_0_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_MEMORY2_0_BASE 0x4000
#define ONCHIP_MEMORY2_0_CONTENTS_INFO ""
#define ONCHIP_MEMORY2_0_DUAL_PORT 0
#define ONCHIP_MEMORY2_0_GUI_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_0_INIT_CONTENTS_FILE "core_onchip_memory2_0"
#define ONCHIP_MEMORY2_0_INIT_MEM_CONTENT 1
#define ONCHIP_MEMORY2_0_INSTANCE_ID "NONE"
#define ONCHIP_MEMORY2_0_IRQ -1
#define ONCHIP_MEMORY2_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ONCHIP_MEMORY2_0_NAME "/dev/onchip_memory2_0"
#define ONCHIP_MEMORY2_0_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_MEMORY2_0_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_0_READ_DURING_WRITE_MODE "DONT_CARE"
#define ONCHIP_MEMORY2_0_SINGLE_CLOCK_OP 0
#define ONCHIP_MEMORY2_0_SIZE_MULTIPLE 1
#define ONCHIP_MEMORY2_0_SIZE_VALUE 16384
#define ONCHIP_MEMORY2_0_SPAN 16384
#define ONCHIP_MEMORY2_0_TYPE "altera_avalon_onchip_memory2"
#define ONCHIP_MEMORY2_0_WRITABLE 1


/*
 * pwm_0 configuration
 *
 */

#define ALT_MODULE_CLASS_pwm_0 altera_avalon_pio
#define PWM_0_BASE 0x9040
#define PWM_0_BIT_CLEARING_EDGE_REGISTER 0
#define PWM_0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PWM_0_CAPTURE 0
#define PWM_0_DATA_WIDTH 7
#define PWM_0_DO_TEST_BENCH_WIRING 0
#define PWM_0_DRIVEN_SIM_VALUE 0
#define PWM_0_EDGE_TYPE "NONE"
#define PWM_0_FREQ 50000000
#define PWM_0_HAS_IN 0
#define PWM_0_HAS_OUT 1
#define PWM_0_HAS_TRI 0
#define PWM_0_IRQ -1
#define PWM_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PWM_0_IRQ_TYPE "NONE"
#define PWM_0_NAME "/dev/pwm_0"
#define PWM_0_RESET_VALUE 0
#define PWM_0_SPAN 16
#define PWM_0_TYPE "altera_avalon_pio"


/*
 * pwm_1 configuration
 *
 */

#define ALT_MODULE_CLASS_pwm_1 altera_avalon_pio
#define PWM_1_BASE 0x9050
#define PWM_1_BIT_CLEARING_EDGE_REGISTER 0
#define PWM_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PWM_1_CAPTURE 0
#define PWM_1_DATA_WIDTH 7
#define PWM_1_DO_TEST_BENCH_WIRING 0
#define PWM_1_DRIVEN_SIM_VALUE 0
#define PWM_1_EDGE_TYPE "NONE"
#define PWM_1_FREQ 50000000
#define PWM_1_HAS_IN 0
#define PWM_1_HAS_OUT 1
#define PWM_1_HAS_TRI 0
#define PWM_1_IRQ -1
#define PWM_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PWM_1_IRQ_TYPE "NONE"
#define PWM_1_NAME "/dev/pwm_1"
#define PWM_1_RESET_VALUE 0
#define PWM_1_SPAN 16
#define PWM_1_TYPE "altera_avalon_pio"


/*
 * pwm_2 configuration
 *
 */

#define ALT_MODULE_CLASS_pwm_2 altera_avalon_pio
#define PWM_2_BASE 0x9060
#define PWM_2_BIT_CLEARING_EDGE_REGISTER 0
#define PWM_2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PWM_2_CAPTURE 0
#define PWM_2_DATA_WIDTH 7
#define PWM_2_DO_TEST_BENCH_WIRING 0
#define PWM_2_DRIVEN_SIM_VALUE 0
#define PWM_2_EDGE_TYPE "NONE"
#define PWM_2_FREQ 50000000
#define PWM_2_HAS_IN 0
#define PWM_2_HAS_OUT 1
#define PWM_2_HAS_TRI 0
#define PWM_2_IRQ -1
#define PWM_2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PWM_2_IRQ_TYPE "NONE"
#define PWM_2_NAME "/dev/pwm_2"
#define PWM_2_RESET_VALUE 0
#define PWM_2_SPAN 16
#define PWM_2_TYPE "altera_avalon_pio"


/*
 * pwm_3 configuration
 *
 */

#define ALT_MODULE_CLASS_pwm_3 altera_avalon_pio
#define PWM_3_BASE 0x9070
#define PWM_3_BIT_CLEARING_EDGE_REGISTER 0
#define PWM_3_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PWM_3_CAPTURE 0
#define PWM_3_DATA_WIDTH 7
#define PWM_3_DO_TEST_BENCH_WIRING 0
#define PWM_3_DRIVEN_SIM_VALUE 0
#define PWM_3_EDGE_TYPE "NONE"
#define PWM_3_FREQ 50000000
#define PWM_3_HAS_IN 0
#define PWM_3_HAS_OUT 1
#define PWM_3_HAS_TRI 0
#define PWM_3_IRQ -1
#define PWM_3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PWM_3_IRQ_TYPE "NONE"
#define PWM_3_NAME "/dev/pwm_3"
#define PWM_3_RESET_VALUE 0
#define PWM_3_SPAN 16
#define PWM_3_TYPE "altera_avalon_pio"


/*
 * pwm_4 configuration
 *
 */

#define ALT_MODULE_CLASS_pwm_4 altera_avalon_pio
#define PWM_4_BASE 0x9080
#define PWM_4_BIT_CLEARING_EDGE_REGISTER 0
#define PWM_4_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PWM_4_CAPTURE 0
#define PWM_4_DATA_WIDTH 7
#define PWM_4_DO_TEST_BENCH_WIRING 0
#define PWM_4_DRIVEN_SIM_VALUE 0
#define PWM_4_EDGE_TYPE "NONE"
#define PWM_4_FREQ 50000000
#define PWM_4_HAS_IN 0
#define PWM_4_HAS_OUT 1
#define PWM_4_HAS_TRI 0
#define PWM_4_IRQ -1
#define PWM_4_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PWM_4_IRQ_TYPE "NONE"
#define PWM_4_NAME "/dev/pwm_4"
#define PWM_4_RESET_VALUE 0
#define PWM_4_SPAN 16
#define PWM_4_TYPE "altera_avalon_pio"


/*
 * pwm_5 configuration
 *
 */

#define ALT_MODULE_CLASS_pwm_5 altera_avalon_pio
#define PWM_5_BASE 0x90a0
#define PWM_5_BIT_CLEARING_EDGE_REGISTER 0
#define PWM_5_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PWM_5_CAPTURE 0
#define PWM_5_DATA_WIDTH 7
#define PWM_5_DO_TEST_BENCH_WIRING 0
#define PWM_5_DRIVEN_SIM_VALUE 0
#define PWM_5_EDGE_TYPE "NONE"
#define PWM_5_FREQ 50000000
#define PWM_5_HAS_IN 0
#define PWM_5_HAS_OUT 1
#define PWM_5_HAS_TRI 0
#define PWM_5_IRQ -1
#define PWM_5_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PWM_5_IRQ_TYPE "NONE"
#define PWM_5_NAME "/dev/pwm_5"
#define PWM_5_RESET_VALUE 0
#define PWM_5_SPAN 16
#define PWM_5_TYPE "altera_avalon_pio"


/*
 * pwm_6 configuration
 *
 */

#define ALT_MODULE_CLASS_pwm_6 altera_avalon_pio
#define PWM_6_BASE 0x9090
#define PWM_6_BIT_CLEARING_EDGE_REGISTER 0
#define PWM_6_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PWM_6_CAPTURE 0
#define PWM_6_DATA_WIDTH 7
#define PWM_6_DO_TEST_BENCH_WIRING 0
#define PWM_6_DRIVEN_SIM_VALUE 0
#define PWM_6_EDGE_TYPE "NONE"
#define PWM_6_FREQ 50000000
#define PWM_6_HAS_IN 0
#define PWM_6_HAS_OUT 1
#define PWM_6_HAS_TRI 0
#define PWM_6_IRQ -1
#define PWM_6_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PWM_6_IRQ_TYPE "NONE"
#define PWM_6_NAME "/dev/pwm_6"
#define PWM_6_RESET_VALUE 0
#define PWM_6_SPAN 16
#define PWM_6_TYPE "altera_avalon_pio"


/*
 * pwm_7 configuration
 *
 */

#define ALT_MODULE_CLASS_pwm_7 altera_avalon_pio
#define PWM_7_BASE 0x90b0
#define PWM_7_BIT_CLEARING_EDGE_REGISTER 0
#define PWM_7_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PWM_7_CAPTURE 0
#define PWM_7_DATA_WIDTH 7
#define PWM_7_DO_TEST_BENCH_WIRING 0
#define PWM_7_DRIVEN_SIM_VALUE 0
#define PWM_7_EDGE_TYPE "NONE"
#define PWM_7_FREQ 50000000
#define PWM_7_HAS_IN 0
#define PWM_7_HAS_OUT 1
#define PWM_7_HAS_TRI 0
#define PWM_7_IRQ -1
#define PWM_7_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PWM_7_IRQ_TYPE "NONE"
#define PWM_7_NAME "/dev/pwm_7"
#define PWM_7_RESET_VALUE 0
#define PWM_7_SPAN 16
#define PWM_7_TYPE "altera_avalon_pio"


/*
 * timer_0 configuration
 *
 */

#define ALT_MODULE_CLASS_timer_0 altera_avalon_timer
#define TIMER_0_ALWAYS_RUN 0
#define TIMER_0_BASE 0x9020
#define TIMER_0_COUNTER_SIZE 32
#define TIMER_0_FIXED_PERIOD 0
#define TIMER_0_FREQ 50000000
#define TIMER_0_IRQ 1
#define TIMER_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_0_LOAD_VALUE 49999999
#define TIMER_0_MULT 1.0
#define TIMER_0_NAME "/dev/timer_0"
#define TIMER_0_PERIOD 1
#define TIMER_0_PERIOD_UNITS "s"
#define TIMER_0_RESET_OUTPUT 0
#define TIMER_0_SNAPSHOT 1
#define TIMER_0_SPAN 32
#define TIMER_0_TICKS_PER_SEC 1
#define TIMER_0_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_0_TYPE "altera_avalon_timer"


/*
 * uart configuration
 *
 */

#define ALT_MODULE_CLASS_uart altera_avalon_uart
#define UART_BASE 0x9000
#define UART_BAUD 115200
#define UART_DATA_BITS 8
#define UART_FIXED_BAUD 1
#define UART_FREQ 50000000
#define UART_IRQ 0
#define UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define UART_NAME "/dev/uart"
#define UART_PARITY 'N'
#define UART_SIM_CHAR_STREAM ""
#define UART_SIM_TRUE_BAUD 0
#define UART_SPAN 32
#define UART_STOP_BITS 1
#define UART_SYNC_REG_DEPTH 2
#define UART_TYPE "altera_avalon_uart"
#define UART_USE_CTS_RTS 0
#define UART_USE_EOP_REGISTER 0

#endif /* __SYSTEM_H_ */
