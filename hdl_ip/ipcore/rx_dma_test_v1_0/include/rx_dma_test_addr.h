/*
 * File Name:         /home/draco/git/adi_dma_testing/iq_dma_example/hdl_ip/ipcore/rx_dma_test_v1_0/include/rx_dma_test_addr.h
 * Description:       C Header File
 * Created:           2025-08-22 09:27:27
*/

#ifndef RX_DMA_TEST_H_
#define RX_DMA_TEST_H_

#define  IPCore_Reset_rx_dma_test            0x0  //write 0x1 to bit 0 to reset IP core
#define  IPCore_Enable_rx_dma_test           0x4  //enabled (by default) when bit 0 is 0x1
#define  IPCore_Timestamp_rx_dma_test        0x8  //contains unique IP timestamp (yymmddHHMM): 2508220927
#define  Accumulations_Data_rx_dma_test      0x100  //data register for Inport Accumulations
#define  autoTrigger_i_Data_rx_dma_test      0x104  //data register for Inport autoTrigger_i
#define  AccumulatorCount_Data_rx_dma_test   0x108  //data register for Outport AccumulatorCount
#define  frame_rx_trigger_Data_rx_dma_test   0x10C  //data register for Inport frame_rx_trigger
#define  frameLen_i_Data_rx_dma_test         0x110  //data register for Inport frameLen_i
#define  idleTime_i_Data_rx_dma_test         0x114  //data register for Inport idleTime_i

#endif /* RX_DMA_TEST_H_ */
