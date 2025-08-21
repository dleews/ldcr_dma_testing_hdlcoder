/*
 * File Name:         /home/draco/git/adi_dma_testing/iq_dma_example/hdl_ip/ipcore/rx_dma_test_v1_0/include/rx_dma_test_addr.h
 * Description:       C Header File
 * Created:           2025-08-21 13:52:11
*/

#ifndef RX_DMA_TEST_H_
#define RX_DMA_TEST_H_

#define  IPCore_Reset_rx_dma_test               0x0  //write 0x1 to bit 0 to reset IP core
#define  IPCore_Enable_rx_dma_test              0x4  //enabled (by default) when bit 0 is 0x1
#define  IPCore_Timestamp_rx_dma_test           0x8  //contains unique IP timestamp (yymmddHHMM): 2508211352
#define  Accumulations_Data_rx_dma_test         0x100  //data register for Inport Accumulations
#define  AccumulatorCount_Data_rx_dma_test      0x108  //data register for Outport AccumulatorCount
#define  enable_rx_dma_count_Data_rx_dma_test   0x10C  //data register for Inport enable_rx_dma_count

#endif /* RX_DMA_TEST_H_ */
