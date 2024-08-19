/*
	Copyright EPFL contributors.
	Licensed under the Apache License, Version 2.0, see LICENSE for details.
	SPDX-License-Identifier: Apache-2.0
*/

#include "im2col_golden.h"

const uint32_t golden_im2col_nchw[900] = {
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29849, 59199, 25674, 17336, 34532, 39186, 38424, 740, 58382, 0, 48335, 6076, 40068, 19748, 40294, 48387, 27892, 57487, 42647, 0, 37865, 34742, 37319, 6895, 20005, 56067, 8799, 5797, 50154, 0, 17932, 6395, 25592, 17330, 44900, 21669, 27649, 13351, 17390, 0, 46502, 16954, 26130, 62372, 61056, 7720, 32360, 48808, 53626, 0, 55243, 59891, 18612, 65061, 14850, 348, 10130, 61563, 3721, 0, 13954, 41303, 51837, 46430, 33308, 59514, 23108, 19051, 1107, 0, 1320, 46127, 25927, 2564, 14770, 22906, 21215, 8217, 60974, 0, 9797, 5538, 37897, 2571, 44262, 18579, 14930, 41411, 15307,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29849, 59199, 25674, 17336, 34532, 39186, 38424, 740, 58382, 9096, 48335, 6076, 40068, 19748, 40294, 48387, 27892, 57487, 42647, 20347, 37865, 34742, 37319, 6895, 20005, 56067, 8799, 5797, 50154, 41304, 17932, 6395, 25592, 17330, 44900, 21669, 27649, 13351, 17390, 14293, 46502, 16954, 26130, 62372, 61056, 7720, 32360, 48808, 53626, 37041, 55243, 59891, 18612, 65061, 14850, 348, 10130, 61563, 3721, 19988, 13954, 41303, 51837, 46430, 33308, 59514, 23108, 19051, 1107, 16479, 1320, 46127, 25927, 2564, 14770, 22906, 21215, 8217, 60974, 27906, 9797, 5538, 37897, 2571, 44262, 18579, 14930, 41411, 15307, 15264,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59199, 25674, 17336, 34532, 39186, 38424, 740, 58382, 9096, 0, 6076, 40068, 19748, 40294, 48387, 27892, 57487, 42647, 20347, 0, 34742, 37319, 6895, 20005, 56067, 8799, 5797, 50154, 41304, 0, 6395, 25592, 17330, 44900, 21669, 27649, 13351, 17390, 14293, 0, 16954, 26130, 62372, 61056, 7720, 32360, 48808, 53626, 37041, 0, 59891, 18612, 65061, 14850, 348, 10130, 61563, 3721, 19988, 0, 41303, 51837, 46430, 33308, 59514, 23108, 19051, 1107, 16479, 0, 46127, 25927, 2564, 14770, 22906, 21215, 8217, 60974, 27906, 0, 5538, 37897, 2571, 44262, 18579, 14930, 41411, 15307, 15264, 0,
 0, 29849, 59199, 25674, 17336, 34532, 39186, 38424, 740, 58382, 0, 48335, 6076, 40068, 19748, 40294, 48387, 27892, 57487, 42647, 0, 37865, 34742, 37319, 6895, 20005, 56067, 8799, 5797, 50154, 0, 17932, 6395, 25592, 17330, 44900, 21669, 27649, 13351, 17390, 0, 46502, 16954, 26130, 62372, 61056, 7720, 32360, 48808, 53626, 0, 55243, 59891, 18612, 65061, 14850, 348, 10130, 61563, 3721, 0, 13954, 41303, 51837, 46430, 33308, 59514, 23108, 19051, 1107, 0, 1320, 46127, 25927, 2564, 14770, 22906, 21215, 8217, 60974, 0, 9797, 5538, 37897, 2571, 44262, 18579, 14930, 41411, 15307, 0, 16928, 19669, 45965, 33273, 54694, 49084, 29176, 23398, 28333,
 29849, 59199, 25674, 17336, 34532, 39186, 38424, 740, 58382, 9096, 48335, 6076, 40068, 19748, 40294, 48387, 27892, 57487, 42647, 20347, 37865, 34742, 37319, 6895, 20005, 56067, 8799, 5797, 50154, 41304, 17932, 6395, 25592, 17330, 44900, 21669, 27649, 13351, 17390, 14293, 46502, 16954, 26130, 62372, 61056, 7720, 32360, 48808, 53626, 37041, 55243, 59891, 18612, 65061, 14850, 348, 10130, 61563, 3721, 19988, 13954, 41303, 51837, 46430, 33308, 59514, 23108, 19051, 1107, 16479, 1320, 46127, 25927, 2564, 14770, 22906, 21215, 8217, 60974, 27906, 9797, 5538, 37897, 2571, 44262, 18579, 14930, 41411, 15307, 15264, 16928, 19669, 45965, 33273, 54694, 49084, 29176, 23398, 28333, 48197,
 59199, 25674, 17336, 34532, 39186, 38424, 740, 58382, 9096, 0, 6076, 40068, 19748, 40294, 48387, 27892, 57487, 42647, 20347, 0, 34742, 37319, 6895, 20005, 56067, 8799, 5797, 50154, 41304, 0, 6395, 25592, 17330, 44900, 21669, 27649, 13351, 17390, 14293, 0, 16954, 26130, 62372, 61056, 7720, 32360, 48808, 53626, 37041, 0, 59891, 18612, 65061, 14850, 348, 10130, 61563, 3721, 19988, 0, 41303, 51837, 46430, 33308, 59514, 23108, 19051, 1107, 16479, 0, 46127, 25927, 2564, 14770, 22906, 21215, 8217, 60974, 27906, 0, 5538, 37897, 2571, 44262, 18579, 14930, 41411, 15307, 15264, 0, 19669, 45965, 33273, 54694, 49084, 29176, 23398, 28333, 48197, 0,
 0, 48335, 6076, 40068, 19748, 40294, 48387, 27892, 57487, 42647, 0, 37865, 34742, 37319, 6895, 20005, 56067, 8799, 5797, 50154, 0, 17932, 6395, 25592, 17330, 44900, 21669, 27649, 13351, 17390, 0, 46502, 16954, 26130, 62372, 61056, 7720, 32360, 48808, 53626, 0, 55243, 59891, 18612, 65061, 14850, 348, 10130, 61563, 3721, 0, 13954, 41303, 51837, 46430, 33308, 59514, 23108, 19051, 1107, 0, 1320, 46127, 25927, 2564, 14770, 22906, 21215, 8217, 60974, 0, 9797, 5538, 37897, 2571, 44262, 18579, 14930, 41411, 15307, 0, 16928, 19669, 45965, 33273, 54694, 49084, 29176, 23398, 28333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 48335, 6076, 40068, 19748, 40294, 48387, 27892, 57487, 42647, 20347, 37865, 34742, 37319, 6895, 20005, 56067, 8799, 5797, 50154, 41304, 17932, 6395, 25592, 17330, 44900, 21669, 27649, 13351, 17390, 14293, 46502, 16954, 26130, 62372, 61056, 7720, 32360, 48808, 53626, 37041, 55243, 59891, 18612, 65061, 14850, 348, 10130, 61563, 3721, 19988, 13954, 41303, 51837, 46430, 33308, 59514, 23108, 19051, 1107, 16479, 1320, 46127, 25927, 2564, 14770, 22906, 21215, 8217, 60974, 27906, 9797, 5538, 37897, 2571, 44262, 18579, 14930, 41411, 15307, 15264, 16928, 19669, 45965, 33273, 54694, 49084, 29176, 23398, 28333, 48197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 6076, 40068, 19748, 40294, 48387, 27892, 57487, 42647, 20347, 0, 34742, 37319, 6895, 20005, 56067, 8799, 5797, 50154, 41304, 0, 6395, 25592, 17330, 44900, 21669, 27649, 13351, 17390, 14293, 0, 16954, 26130, 62372, 61056, 7720, 32360, 48808, 53626, 37041, 0, 59891, 18612, 65061, 14850, 348, 10130, 61563, 3721, 19988, 0, 41303, 51837, 46430, 33308, 59514, 23108, 19051, 1107, 16479, 0, 46127, 25927, 2564, 14770, 22906, 21215, 8217, 60974, 27906, 0, 5538, 37897, 2571, 44262, 18579, 14930, 41411, 15307, 15264, 0, 19669, 45965, 33273, 54694, 49084, 29176, 23398, 28333, 48197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

