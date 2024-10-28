// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Register Package auto-generated by `reggen` containing data structure

package dma_reg_pkg;

  // Address widths within the block
  parameter int BlockAw = 7;

  ////////////////////////////
  // Typedefs for registers //
  ////////////////////////////

  typedef struct packed {logic [31:0] q;} dma_reg2hw_src_ptr_reg_t;

  typedef struct packed {logic [31:0] q;} dma_reg2hw_dst_ptr_reg_t;

  typedef struct packed {logic [31:0] q;} dma_reg2hw_addr_ptr_reg_t;

  typedef struct packed {
    logic [15:0] q;
    logic        qe;
  } dma_reg2hw_size_d1_reg_t;

  typedef struct packed {logic [15:0] q;} dma_reg2hw_size_d2_reg_t;

  typedef struct packed {
    struct packed {
      logic q;
      logic re;
    } ready;
    struct packed {
      logic q;
      logic re;
    } window_done;
  } dma_reg2hw_status_reg_t;

  typedef struct packed {logic [5:0] q;} dma_reg2hw_src_ptr_inc_d1_reg_t;

  typedef struct packed {logic [22:0] q;} dma_reg2hw_src_ptr_inc_d2_reg_t;

  typedef struct packed {logic [5:0] q;} dma_reg2hw_dst_ptr_inc_d1_reg_t;

  typedef struct packed {logic [22:0] q;} dma_reg2hw_dst_ptr_inc_d2_reg_t;

  typedef struct packed {
    struct packed {logic [15:0] q;} rx_trigger_slot;
    struct packed {logic [15:0] q;} tx_trigger_slot;
  } dma_reg2hw_slot_reg_t;

  typedef struct packed {logic [1:0] q;} dma_reg2hw_src_data_type_reg_t;

  typedef struct packed {logic [1:0] q;} dma_reg2hw_dst_data_type_reg_t;

  typedef struct packed {logic q;} dma_reg2hw_sign_ext_reg_t;

  typedef struct packed {logic [2:0] q;} dma_reg2hw_mode_reg_t;

  typedef struct packed {logic q;} dma_reg2hw_dim_config_reg_t;

  typedef struct packed {logic q;} dma_reg2hw_dim_inv_reg_t;

  typedef struct packed {logic [5:0] q;} dma_reg2hw_pad_top_reg_t;

  typedef struct packed {logic [5:0] q;} dma_reg2hw_pad_bottom_reg_t;

  typedef struct packed {logic [5:0] q;} dma_reg2hw_pad_right_reg_t;

  typedef struct packed {logic [5:0] q;} dma_reg2hw_pad_left_reg_t;

  typedef struct packed {logic [12:0] q;} dma_reg2hw_window_size_reg_t;

  typedef struct packed {logic [7:0] q;} dma_reg2hw_window_count_reg_t;

  typedef struct packed {
    struct packed {logic q;} transaction_done;
    struct packed {logic q;} window_done;
  } dma_reg2hw_interrupt_en_reg_t;

  typedef struct packed {
    logic q;
    logic re;
  } dma_reg2hw_transaction_ifr_reg_t;

  typedef struct packed {
    logic q;
    logic re;
  } dma_reg2hw_window_ifr_reg_t;

  typedef struct packed {
    struct packed {logic d;} ready;
    struct packed {logic d;} window_done;
  } dma_hw2reg_status_reg_t;

  typedef struct packed {
    logic [7:0] d;
    logic       de;
  } dma_hw2reg_window_count_reg_t;

  typedef struct packed {logic d;} dma_hw2reg_transaction_ifr_reg_t;

  typedef struct packed {logic d;} dma_hw2reg_window_ifr_reg_t;

  // Register -> HW type
  typedef struct packed {
    dma_reg2hw_src_ptr_reg_t src_ptr;  // [283:252]
    dma_reg2hw_dst_ptr_reg_t dst_ptr;  // [251:220]
    dma_reg2hw_addr_ptr_reg_t addr_ptr;  // [219:188]
    dma_reg2hw_size_d1_reg_t size_d1;  // [187:171]
    dma_reg2hw_size_d2_reg_t size_d2;  // [170:155]
    dma_reg2hw_status_reg_t status;  // [154:151]
    dma_reg2hw_src_ptr_inc_d1_reg_t src_ptr_inc_d1;  // [150:145]
    dma_reg2hw_src_ptr_inc_d2_reg_t src_ptr_inc_d2;  // [144:122]
    dma_reg2hw_dst_ptr_inc_d1_reg_t dst_ptr_inc_d1;  // [121:116]
    dma_reg2hw_dst_ptr_inc_d2_reg_t dst_ptr_inc_d2;  // [115:93]
    dma_reg2hw_slot_reg_t slot;  // [92:61]
    dma_reg2hw_src_data_type_reg_t src_data_type;  // [60:59]
    dma_reg2hw_dst_data_type_reg_t dst_data_type;  // [58:57]
    dma_reg2hw_sign_ext_reg_t sign_ext;  // [56:56]
    dma_reg2hw_mode_reg_t mode;  // [55:53]
    dma_reg2hw_dim_config_reg_t dim_config;  // [52:52]
    dma_reg2hw_dim_inv_reg_t dim_inv;  // [51:51]
    dma_reg2hw_pad_top_reg_t pad_top;  // [50:45]
    dma_reg2hw_pad_bottom_reg_t pad_bottom;  // [44:39]
    dma_reg2hw_pad_right_reg_t pad_right;  // [38:33]
    dma_reg2hw_pad_left_reg_t pad_left;  // [32:27]
    dma_reg2hw_window_size_reg_t window_size;  // [26:14]
    dma_reg2hw_window_count_reg_t window_count;  // [13:6]
    dma_reg2hw_interrupt_en_reg_t interrupt_en;  // [5:4]
    dma_reg2hw_transaction_ifr_reg_t transaction_ifr;  // [3:2]
    dma_reg2hw_window_ifr_reg_t window_ifr;  // [1:0]
  } dma_reg2hw_t;

  // HW -> register type
  typedef struct packed {
    dma_hw2reg_status_reg_t status;  // [12:11]
    dma_hw2reg_window_count_reg_t window_count;  // [10:2]
    dma_hw2reg_transaction_ifr_reg_t transaction_ifr;  // [1:1]
    dma_hw2reg_window_ifr_reg_t window_ifr;  // [0:0]
  } dma_hw2reg_t;

  // Register offsets
  parameter logic [BlockAw-1:0] DMA_SRC_PTR_OFFSET = 7'h0;
  parameter logic [BlockAw-1:0] DMA_DST_PTR_OFFSET = 7'h4;
  parameter logic [BlockAw-1:0] DMA_ADDR_PTR_OFFSET = 7'h8;
  parameter logic [BlockAw-1:0] DMA_SIZE_D1_OFFSET = 7'hc;
  parameter logic [BlockAw-1:0] DMA_SIZE_D2_OFFSET = 7'h10;
  parameter logic [BlockAw-1:0] DMA_STATUS_OFFSET = 7'h14;
  parameter logic [BlockAw-1:0] DMA_SRC_PTR_INC_D1_OFFSET = 7'h18;
  parameter logic [BlockAw-1:0] DMA_SRC_PTR_INC_D2_OFFSET = 7'h1c;
  parameter logic [BlockAw-1:0] DMA_DST_PTR_INC_D1_OFFSET = 7'h20;
  parameter logic [BlockAw-1:0] DMA_DST_PTR_INC_D2_OFFSET = 7'h24;
  parameter logic [BlockAw-1:0] DMA_SLOT_OFFSET = 7'h28;
  parameter logic [BlockAw-1:0] DMA_SRC_DATA_TYPE_OFFSET = 7'h2c;
  parameter logic [BlockAw-1:0] DMA_DST_DATA_TYPE_OFFSET = 7'h30;
  parameter logic [BlockAw-1:0] DMA_SIGN_EXT_OFFSET = 7'h34;
  parameter logic [BlockAw-1:0] DMA_MODE_OFFSET = 7'h38;
  parameter logic [BlockAw-1:0] DMA_DIM_CONFIG_OFFSET = 7'h3c;
  parameter logic [BlockAw-1:0] DMA_DIM_INV_OFFSET = 7'h40;
  parameter logic [BlockAw-1:0] DMA_PAD_TOP_OFFSET = 7'h44;
  parameter logic [BlockAw-1:0] DMA_PAD_BOTTOM_OFFSET = 7'h48;
  parameter logic [BlockAw-1:0] DMA_PAD_RIGHT_OFFSET = 7'h4c;
  parameter logic [BlockAw-1:0] DMA_PAD_LEFT_OFFSET = 7'h50;
  parameter logic [BlockAw-1:0] DMA_WINDOW_SIZE_OFFSET = 7'h54;
  parameter logic [BlockAw-1:0] DMA_WINDOW_COUNT_OFFSET = 7'h58;
  parameter logic [BlockAw-1:0] DMA_INTERRUPT_EN_OFFSET = 7'h5c;
  parameter logic [BlockAw-1:0] DMA_TRANSACTION_IFR_OFFSET = 7'h60;
  parameter logic [BlockAw-1:0] DMA_WINDOW_IFR_OFFSET = 7'h64;

  // Reset values for hwext registers and their fields
  parameter logic [1:0] DMA_STATUS_RESVAL = 2'h1;
  parameter logic [0:0] DMA_STATUS_READY_RESVAL = 1'h1;
  parameter logic [0:0] DMA_STATUS_WINDOW_DONE_RESVAL = 1'h0;
  parameter logic [0:0] DMA_TRANSACTION_IFR_RESVAL = 1'h0;
  parameter logic [0:0] DMA_TRANSACTION_IFR_FLAG_RESVAL = 1'h0;
  parameter logic [0:0] DMA_WINDOW_IFR_RESVAL = 1'h0;
  parameter logic [0:0] DMA_WINDOW_IFR_FLAG_RESVAL = 1'h0;

  // Register index
  typedef enum int {
    DMA_SRC_PTR,
    DMA_DST_PTR,
    DMA_ADDR_PTR,
    DMA_SIZE_D1,
    DMA_SIZE_D2,
    DMA_STATUS,
    DMA_SRC_PTR_INC_D1,
    DMA_SRC_PTR_INC_D2,
    DMA_DST_PTR_INC_D1,
    DMA_DST_PTR_INC_D2,
    DMA_SLOT,
    DMA_SRC_DATA_TYPE,
    DMA_DST_DATA_TYPE,
    DMA_SIGN_EXT,
    DMA_MODE,
    DMA_DIM_CONFIG,
    DMA_DIM_INV,
    DMA_PAD_TOP,
    DMA_PAD_BOTTOM,
    DMA_PAD_RIGHT,
    DMA_PAD_LEFT,
    DMA_WINDOW_SIZE,
    DMA_WINDOW_COUNT,
    DMA_INTERRUPT_EN,
    DMA_TRANSACTION_IFR,
    DMA_WINDOW_IFR
  } dma_id_e;

  // Register width information to check illegal writes
  parameter logic [3:0] DMA_PERMIT[26] = '{
      4'b1111,  // index[ 0] DMA_SRC_PTR
      4'b1111,  // index[ 1] DMA_DST_PTR
      4'b1111,  // index[ 2] DMA_ADDR_PTR
      4'b0011,  // index[ 3] DMA_SIZE_D1
      4'b0011,  // index[ 4] DMA_SIZE_D2
      4'b0001,  // index[ 5] DMA_STATUS
      4'b0001,  // index[ 6] DMA_SRC_PTR_INC_D1
      4'b0111,  // index[ 7] DMA_SRC_PTR_INC_D2
      4'b0001,  // index[ 8] DMA_DST_PTR_INC_D1
      4'b0111,  // index[ 9] DMA_DST_PTR_INC_D2
      4'b1111,  // index[10] DMA_SLOT
      4'b0001,  // index[11] DMA_SRC_DATA_TYPE
      4'b0001,  // index[12] DMA_DST_DATA_TYPE
      4'b0001,  // index[13] DMA_SIGN_EXT
      4'b0001,  // index[14] DMA_MODE
      4'b0001,  // index[15] DMA_DIM_CONFIG
      4'b0001,  // index[16] DMA_DIM_INV
      4'b0001,  // index[17] DMA_PAD_TOP
      4'b0001,  // index[18] DMA_PAD_BOTTOM
      4'b0001,  // index[19] DMA_PAD_RIGHT
      4'b0001,  // index[20] DMA_PAD_LEFT
      4'b0011,  // index[21] DMA_WINDOW_SIZE
      4'b0001,  // index[22] DMA_WINDOW_COUNT
      4'b0001,  // index[23] DMA_INTERRUPT_EN
      4'b0001,  // index[24] DMA_TRANSACTION_IFR
      4'b0001  // index[25] DMA_WINDOW_IFR
  };

endpackage

