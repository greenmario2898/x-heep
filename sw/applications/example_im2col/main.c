/*
    Copyright EPFL contributors.
    Licensed under the Apache License, Version 2.0, see LICENSE for details.
    SPDX-License-Identifier: Apache-2.0

    Author: Tommaso Terzano <tommaso.terzano@epfl.ch>
    
    Info: Example application of im2col algorithm with configurable format, verification and performance analysis.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "x-heep.h"
#include "im2col_lib.h"

#define NCHW_FORMAT 0
#define NHWC_FORMAT 1

int main()
{
    PRINTF("\n\rStarting test...\n\r\n\r");
    
    int errors;
    unsigned int cycles;
    
    for (int i=0; i<3; i++)
    {
        im2col_nchw_int32(i, &cycles);
        
        PRINTF("im2col NCHW test %d executed\n\r", i);

        PRINTF_TIM("Total number of cycles: [%d]\n\r", cycles);

        errors = verify(NCHW_FORMAT);
        
        if (errors != 0)
        {
            PRINTF("TEST %d FAILED: %d errors\n\r", errors);
            return 1;
        } 
        else
        {
            PRINTF("TEST PASSED!\n\r\n\r");
        }
    }

    /*for (int i=0; i<1; i++)
    {
        im2col_nhwc_int32(i, &cycles);
        
        PRINTF("im2col NHWC test %d executed\n\r", i);
        
        PRINTF_TIM("Total number of cycles: [%d]\n\r", cycles);
        
        errors = verify(NHWC_FORMAT);
    
        if (errors != 0)
        {
            PRINTF("TEST %d FAILED: %d errors\n\r", errors);
            return 1;
        } 
        else
        {
            PRINTF("TEST PASSED!\n\r\n\r");
        }
    }*/

    return 0;
}
