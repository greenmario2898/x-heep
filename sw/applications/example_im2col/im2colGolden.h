/*
   Copyright EPFL contributors.
  Licensed under the Apache License, Version 2.0, see LICENSE for details.
  SPDX-License-Identifier: Apache-2.0

  Author: Tommaso Terzano <tommaso.terzano@epfl.ch>

                          <tommaso.terzano@gmail.com>

  Info: Header file of im2colGolden, contains activations parameters and the prototypes of both input tensors and golden output.
*/

#ifndef IMAGE_AND_COL_H
#define IMAGE_AND_COL_H

#include <stdint.h>

/* Parameters */
#define IW 10
#define IH 10
#define CH 2
#define FW 4
#define FH 3
#define BATCH 1
#define STRIDE_D1 1
#define STRIDE_D2 1
#define TOP_PAD 1
#define BOTTOM_PAD 1
#define LEFT_PAD 1
#define RIGHT_PAD 1
extern const uint32_t input_image_nchw[200];
extern const uint32_t golden_im2col_nchw[2160];

#endif
