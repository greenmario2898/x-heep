/*
   Copyright EPFL contributors.
  Licensed under the Apache License, Version 2.0, see LICENSE for details.
  SPDX-License-Identifier: Apache-2.0

  Author: Tommaso Terzano <tommaso.terzano@epfl.ch>

                          <tommaso.terzano@gmail.com>

  Info: Contains randomly generated input activations and the golden result of the im2col algorithm, computed with either Pytorch or Tensorflow,
  depending on the format.
*/

#include "im2colGolden.h"

const uint32_t input_image_nchw[300] = {
    11251, 34253, 65225, 14162, 6614, 16302, 52773, 53612, 22586, 60717,
    7364, 60798, 25473, 7435, 27284, 44369, 49389, 52554, 61258, 41715,
    44419, 53182, 53738, 15319, 8142, 50358, 27095, 49032, 28447, 28332,
    31763, 17057, 44962, 34607, 3197, 55036, 28986, 25867, 14229, 16806,
    32732, 54591, 51869, 42674, 34621, 29970, 2486, 30765, 45996, 35672,
    27502, 57944, 44821, 30977, 64542, 11998, 32513, 7080, 17792, 61770,
    22264, 43347, 20438, 48229, 36040, 22679, 30490, 64178, 23563, 3927,
    42955, 28247, 38245, 27827, 40419, 16871, 11955, 53470, 50253, 52952,
    35936, 54862, 12502, 210, 50437, 45812, 34041, 10642, 9603, 26503,
    39192, 48042, 15827, 50878, 58305, 5, 63134, 60895, 23442, 18082,
    26529, 58766, 19217, 18240, 61191, 40233, 11185, 17378, 21739, 17634,
    22959, 57414, 24733, 33411, 26704, 56230, 22065, 63071, 1279, 22730,
    53726, 129, 38961, 9682, 33836, 10367, 54900, 55439, 25337, 20364,
    47811, 9960, 26135, 5294, 17966, 56373, 52710, 49772, 58728, 33611,
    28757, 38997, 9398, 6030, 35192, 23242, 51399, 48736, 39167, 12860,
    20856, 42379, 35274, 16611, 10197, 11085, 14680, 53739, 28797, 18345,
    8882, 10810, 62673, 306, 1472, 747, 46815, 55527, 19003, 59525,
    33319, 8347, 36461, 56532, 28400, 7174, 39544, 61803, 39656, 19657,
    11451, 65330, 64590, 54272, 61258, 7948, 57138, 29682, 61064, 61964,
    9957, 28581, 31344, 21612, 37130, 4448, 51298, 46365, 24111, 5437,
    51602, 62559, 11071, 3149, 41714, 58244, 389, 63793, 39701, 34989,
    33416, 31816, 23223, 31097, 4237, 9081, 28498, 58525, 28151, 46174,
    10119, 56680, 39906, 20514, 43144, 62438, 11918, 33239, 25950, 11069,
    33821, 16266, 7595, 19640, 21319, 37279, 15731, 51359, 60867, 57910,
    33620, 49500, 14627, 53939, 32806, 43938, 48499, 16876, 58964, 10431,
    49247, 58438, 32240, 9589, 6655, 40765, 23475, 53278, 57513, 36469,
    33251, 56900, 59506, 5468, 22865, 59319, 21919, 50074, 25468, 64826,
    34743, 8633, 16727, 12057, 54699, 30693, 34118, 49366, 58712, 11859,
    25162, 13148, 1166, 28694, 22882, 1264, 18571, 18023, 52936, 50969,
    36219, 57449, 2477, 37521, 34952, 50551, 55343, 4314, 42486, 49853
};
const uint32_t golden_im2col_nchw[1452] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11251, 34253, 65225, 14162, 6614, 16302, 52773, 53612, 22586, 60717, 0, 7364, 60798, 25473, 7435, 27284, 44369, 49389, 52554, 61258, 41715, 0, 44419, 53182, 53738, 15319, 8142, 50358, 27095, 49032, 28447, 28332, 0, 31763, 17057, 44962, 34607, 3197, 55036, 28986, 25867, 14229, 16806, 0, 32732, 54591, 51869, 42674, 34621, 29970, 2486, 30765, 45996, 35672, 0, 27502, 57944, 44821, 30977, 64542, 11998, 32513, 7080, 17792, 61770, 0, 22264, 43347, 20438, 48229, 36040, 22679, 30490, 64178, 23563, 3927, 0, 42955, 28247, 38245, 27827, 40419, 16871, 11955, 53470, 50253, 52952, 0, 35936, 54862, 12502, 210, 50437, 45812, 34041, 10642, 9603, 26503, 0, 39192, 48042, 15827, 50878, 58305, 5, 63134, 60895, 23442, 18082,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11251, 34253, 65225, 14162, 6614, 16302, 52773, 53612, 22586, 60717, 0, 7364, 60798, 25473, 7435, 27284, 44369, 49389, 52554, 61258, 41715, 0, 44419, 53182, 53738, 15319, 8142, 50358, 27095, 49032, 28447, 28332, 0, 31763, 17057, 44962, 34607, 3197, 55036, 28986, 25867, 14229, 16806, 0, 32732, 54591, 51869, 42674, 34621, 29970, 2486, 30765, 45996, 35672, 0, 27502, 57944, 44821, 30977, 64542, 11998, 32513, 7080, 17792, 61770, 0, 22264, 43347, 20438, 48229, 36040, 22679, 30490, 64178, 23563, 3927, 0, 42955, 28247, 38245, 27827, 40419, 16871, 11955, 53470, 50253, 52952, 0, 35936, 54862, 12502, 210, 50437, 45812, 34041, 10642, 9603, 26503, 0, 39192, 48042, 15827, 50878, 58305, 5, 63134, 60895, 23442, 18082, 0,
    0, 11251, 34253, 65225, 14162, 6614, 16302, 52773, 53612, 22586, 60717, 0, 7364, 60798, 25473, 7435, 27284, 44369, 49389, 52554, 61258, 41715, 0, 44419, 53182, 53738, 15319, 8142, 50358, 27095, 49032, 28447, 28332, 0, 31763, 17057, 44962, 34607, 3197, 55036, 28986, 25867, 14229, 16806, 0, 32732, 54591, 51869, 42674, 34621, 29970, 2486, 30765, 45996, 35672, 0, 27502, 57944, 44821, 30977, 64542, 11998, 32513, 7080, 17792, 61770, 0, 22264, 43347, 20438, 48229, 36040, 22679, 30490, 64178, 23563, 3927, 0, 42955, 28247, 38245, 27827, 40419, 16871, 11955, 53470, 50253, 52952, 0, 35936, 54862, 12502, 210, 50437, 45812, 34041, 10642, 9603, 26503, 0, 39192, 48042, 15827, 50878, 58305, 5, 63134, 60895, 23442, 18082, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    11251, 34253, 65225, 14162, 6614, 16302, 52773, 53612, 22586, 60717, 0, 7364, 60798, 25473, 7435, 27284, 44369, 49389, 52554, 61258, 41715, 0, 44419, 53182, 53738, 15319, 8142, 50358, 27095, 49032, 28447, 28332, 0, 31763, 17057, 44962, 34607, 3197, 55036, 28986, 25867, 14229, 16806, 0, 32732, 54591, 51869, 42674, 34621, 29970, 2486, 30765, 45996, 35672, 0, 27502, 57944, 44821, 30977, 64542, 11998, 32513, 7080, 17792, 61770, 0, 22264, 43347, 20438, 48229, 36040, 22679, 30490, 64178, 23563, 3927, 0, 42955, 28247, 38245, 27827, 40419, 16871, 11955, 53470, 50253, 52952, 0, 35936, 54862, 12502, 210, 50437, 45812, 34041, 10642, 9603, 26503, 0, 39192, 48042, 15827, 50878, 58305, 5, 63134, 60895, 23442, 18082, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26529, 58766, 19217, 18240, 61191, 40233, 11185, 17378, 21739, 17634, 0, 22959, 57414, 24733, 33411, 26704, 56230, 22065, 63071, 1279, 22730, 0, 53726, 129, 38961, 9682, 33836, 10367, 54900, 55439, 25337, 20364, 0, 47811, 9960, 26135, 5294, 17966, 56373, 52710, 49772, 58728, 33611, 0, 28757, 38997, 9398, 6030, 35192, 23242, 51399, 48736, 39167, 12860, 0, 20856, 42379, 35274, 16611, 10197, 11085, 14680, 53739, 28797, 18345, 0, 8882, 10810, 62673, 306, 1472, 747, 46815, 55527, 19003, 59525, 0, 33319, 8347, 36461, 56532, 28400, 7174, 39544, 61803, 39656, 19657, 0, 11451, 65330, 64590, 54272, 61258, 7948, 57138, 29682, 61064, 61964, 0, 9957, 28581, 31344, 21612, 37130, 4448, 51298, 46365, 24111, 5437,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26529, 58766, 19217, 18240, 61191, 40233, 11185, 17378, 21739, 17634, 0, 22959, 57414, 24733, 33411, 26704, 56230, 22065, 63071, 1279, 22730, 0, 53726, 129, 38961, 9682, 33836, 10367, 54900, 55439, 25337, 20364, 0, 47811, 9960, 26135, 5294, 17966, 56373, 52710, 49772, 58728, 33611, 0, 28757, 38997, 9398, 6030, 35192, 23242, 51399, 48736, 39167, 12860, 0, 20856, 42379, 35274, 16611, 10197, 11085, 14680, 53739, 28797, 18345, 0, 8882, 10810, 62673, 306, 1472, 747, 46815, 55527, 19003, 59525, 0, 33319, 8347, 36461, 56532, 28400, 7174, 39544, 61803, 39656, 19657, 0, 11451, 65330, 64590, 54272, 61258, 7948, 57138, 29682, 61064, 61964, 0, 9957, 28581, 31344, 21612, 37130, 4448, 51298, 46365, 24111, 5437, 0,
    0, 26529, 58766, 19217, 18240, 61191, 40233, 11185, 17378, 21739, 17634, 0, 22959, 57414, 24733, 33411, 26704, 56230, 22065, 63071, 1279, 22730, 0, 53726, 129, 38961, 9682, 33836, 10367, 54900, 55439, 25337, 20364, 0, 47811, 9960, 26135, 5294, 17966, 56373, 52710, 49772, 58728, 33611, 0, 28757, 38997, 9398, 6030, 35192, 23242, 51399, 48736, 39167, 12860, 0, 20856, 42379, 35274, 16611, 10197, 11085, 14680, 53739, 28797, 18345, 0, 8882, 10810, 62673, 306, 1472, 747, 46815, 55527, 19003, 59525, 0, 33319, 8347, 36461, 56532, 28400, 7174, 39544, 61803, 39656, 19657, 0, 11451, 65330, 64590, 54272, 61258, 7948, 57138, 29682, 61064, 61964, 0, 9957, 28581, 31344, 21612, 37130, 4448, 51298, 46365, 24111, 5437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    26529, 58766, 19217, 18240, 61191, 40233, 11185, 17378, 21739, 17634, 0, 22959, 57414, 24733, 33411, 26704, 56230, 22065, 63071, 1279, 22730, 0, 53726, 129, 38961, 9682, 33836, 10367, 54900, 55439, 25337, 20364, 0, 47811, 9960, 26135, 5294, 17966, 56373, 52710, 49772, 58728, 33611, 0, 28757, 38997, 9398, 6030, 35192, 23242, 51399, 48736, 39167, 12860, 0, 20856, 42379, 35274, 16611, 10197, 11085, 14680, 53739, 28797, 18345, 0, 8882, 10810, 62673, 306, 1472, 747, 46815, 55527, 19003, 59525, 0, 33319, 8347, 36461, 56532, 28400, 7174, 39544, 61803, 39656, 19657, 0, 11451, 65330, 64590, 54272, 61258, 7948, 57138, 29682, 61064, 61964, 0, 9957, 28581, 31344, 21612, 37130, 4448, 51298, 46365, 24111, 5437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51602, 62559, 11071, 3149, 41714, 58244, 389, 63793, 39701, 34989, 0, 33416, 31816, 23223, 31097, 4237, 9081, 28498, 58525, 28151, 46174, 0, 10119, 56680, 39906, 20514, 43144, 62438, 11918, 33239, 25950, 11069, 0, 33821, 16266, 7595, 19640, 21319, 37279, 15731, 51359, 60867, 57910, 0, 33620, 49500, 14627, 53939, 32806, 43938, 48499, 16876, 58964, 10431, 0, 49247, 58438, 32240, 9589, 6655, 40765, 23475, 53278, 57513, 36469, 0, 33251, 56900, 59506, 5468, 22865, 59319, 21919, 50074, 25468, 64826, 0, 34743, 8633, 16727, 12057, 54699, 30693, 34118, 49366, 58712, 11859, 0, 25162, 13148, 1166, 28694, 22882, 1264, 18571, 18023, 52936, 50969, 0, 36219, 57449, 2477, 37521, 34952, 50551, 55343, 4314, 42486, 49853,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51602, 62559, 11071, 3149, 41714, 58244, 389, 63793, 39701, 34989, 0, 33416, 31816, 23223, 31097, 4237, 9081, 28498, 58525, 28151, 46174, 0, 10119, 56680, 39906, 20514, 43144, 62438, 11918, 33239, 25950, 11069, 0, 33821, 16266, 7595, 19640, 21319, 37279, 15731, 51359, 60867, 57910, 0, 33620, 49500, 14627, 53939, 32806, 43938, 48499, 16876, 58964, 10431, 0, 49247, 58438, 32240, 9589, 6655, 40765, 23475, 53278, 57513, 36469, 0, 33251, 56900, 59506, 5468, 22865, 59319, 21919, 50074, 25468, 64826, 0, 34743, 8633, 16727, 12057, 54699, 30693, 34118, 49366, 58712, 11859, 0, 25162, 13148, 1166, 28694, 22882, 1264, 18571, 18023, 52936, 50969, 0, 36219, 57449, 2477, 37521, 34952, 50551, 55343, 4314, 42486, 49853, 0,
    0, 51602, 62559, 11071, 3149, 41714, 58244, 389, 63793, 39701, 34989, 0, 33416, 31816, 23223, 31097, 4237, 9081, 28498, 58525, 28151, 46174, 0, 10119, 56680, 39906, 20514, 43144, 62438, 11918, 33239, 25950, 11069, 0, 33821, 16266, 7595, 19640, 21319, 37279, 15731, 51359, 60867, 57910, 0, 33620, 49500, 14627, 53939, 32806, 43938, 48499, 16876, 58964, 10431, 0, 49247, 58438, 32240, 9589, 6655, 40765, 23475, 53278, 57513, 36469, 0, 33251, 56900, 59506, 5468, 22865, 59319, 21919, 50074, 25468, 64826, 0, 34743, 8633, 16727, 12057, 54699, 30693, 34118, 49366, 58712, 11859, 0, 25162, 13148, 1166, 28694, 22882, 1264, 18571, 18023, 52936, 50969, 0, 36219, 57449, 2477, 37521, 34952, 50551, 55343, 4314, 42486, 49853, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    51602, 62559, 11071, 3149, 41714, 58244, 389, 63793, 39701, 34989, 0, 33416, 31816, 23223, 31097, 4237, 9081, 28498, 58525, 28151, 46174, 0, 10119, 56680, 39906, 20514, 43144, 62438, 11918, 33239, 25950, 11069, 0, 33821, 16266, 7595, 19640, 21319, 37279, 15731, 51359, 60867, 57910, 0, 33620, 49500, 14627, 53939, 32806, 43938, 48499, 16876, 58964, 10431, 0, 49247, 58438, 32240, 9589, 6655, 40765, 23475, 53278, 57513, 36469, 0, 33251, 56900, 59506, 5468, 22865, 59319, 21919, 50074, 25468, 64826, 0, 34743, 8633, 16727, 12057, 54699, 30693, 34118, 49366, 58712, 11859, 0, 25162, 13148, 1166, 28694, 22882, 1264, 18571, 18023, 52936, 50969, 0, 36219, 57449, 2477, 37521, 34952, 50551, 55343, 4314, 42486, 49853, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};


const uint32_t input_image_nhwc[300] = {
 18392, 10998, 52378, 16714, 51441, 5068, 36278, 2206, 12411, 22617,
 5332, 41273, 16426, 12995, 58931, 8416, 10255, 47763, 26147, 52004,
 58971, 8145, 6244, 57913, 62218, 52738, 62670, 29381, 52091, 11282,
 24107, 40671, 44800, 56935, 43515, 55422, 41639, 59192, 44315, 30333,
 10800, 861, 24976, 46419, 9859, 56468, 40061, 21067, 62252, 39970,
 12763, 3647, 45032, 17967, 24421, 10151, 42890, 22666, 25663, 48156,
 1849, 25286, 41474, 11377, 39325, 59842, 8755, 42140, 8597, 59578,
 59664, 42247, 40269, 29405, 56376, 51500, 32457, 42935, 24345, 51814,
 43451, 44589, 28427, 10107, 13620, 52249, 17970, 10361, 59454, 9084,
 25630, 35904, 47352, 41163, 49537, 45511, 16707, 38105, 5092, 14504,
 43817, 37923, 59500, 44901, 36921, 45337, 14884, 18758, 208, 1910,
 57250, 26994, 22042, 11989, 51589, 2125, 53104, 15040, 31502, 48197,
 12965, 28160, 50052, 42811, 28606, 37437, 47850, 44019, 31848, 29484,
 33022, 40792, 31776, 7133, 55069, 29295, 16480, 33540, 21801, 44362,
 43362, 12487, 45497, 62287, 45004, 13848, 57302, 49652, 20514, 10993,
 59945, 16435, 40067, 21021, 50723, 36837, 62503, 36457, 65020, 5438,
 57457, 41437, 33703, 62922, 48063, 41363, 4909, 19049, 14630, 17599,
 885, 35345, 28754, 15601, 6551, 31753, 11183, 28465, 55218, 25302,
 10789, 62949, 24871, 51118, 45838, 41668, 50008, 57401, 572, 62688,
 16769, 23211, 6274, 58148, 63163, 31066, 1767, 43534, 52981, 11649,
 16383, 63982, 4143, 18105, 21846, 62572, 48987, 37325, 1637, 62744,
 23092, 1351, 34023, 30767, 43095, 24648, 51550, 63381, 13186, 2963,
 27314, 36994, 63137, 27367, 60752, 24843, 48649, 65394, 24170, 41041,
 8951, 37025, 1863, 29390, 43466, 46684, 61145, 43727, 64432, 46354,
 11295, 47005, 51463, 29047, 8635, 47247, 16653, 34734, 32326, 44188,
 15805, 6140, 39826, 15571, 5984, 35956, 52254, 31877, 42305, 36222,
 6243, 14318, 42759, 26785, 49742, 27919, 61251, 19643, 47905, 45759,
 28654, 9011, 33271, 20083, 47313, 28000, 25221, 39541, 60551, 47878,
 26069, 2360, 27222, 64770, 20096, 23830, 44435, 27531, 27366, 36251,
 26218, 6594, 49057, 8529, 53603, 656, 61921, 10605, 5206, 6005
};
const uint32_t golden_im2col_nhwc[1452] = {
 0, 0, 0, 18392, 0, 0, 0, 10998, 0, 0, 0, 52378,
 0, 0, 18392, 16714, 0, 0, 10998, 51441, 0, 0, 52378, 5068,
 0, 0, 16714, 36278, 0, 0, 51441, 2206, 0, 0, 5068, 12411,
 0, 0, 36278, 22617, 0, 0, 2206, 5332, 0, 0, 12411, 41273,
 0, 0, 22617, 16426, 0, 0, 5332, 12995, 0, 0, 41273, 58931,
 0, 0, 16426, 8416, 0, 0, 12995, 10255, 0, 0, 58931, 47763,
 0, 0, 8416, 26147, 0, 0, 10255, 52004, 0, 0, 47763, 58971,
 0, 0, 26147, 8145, 0, 0, 52004, 6244, 0, 0, 58971, 57913,
 0, 0, 8145, 62218, 0, 0, 6244, 52738, 0, 0, 57913, 62670,
 0, 0, 62218, 29381, 0, 0, 52738, 52091, 0, 0, 62670, 11282,
 0, 0, 29381, 0, 0, 0, 52091, 0, 0, 0, 11282, 0,
 0, 18392, 0, 24107, 0, 10998, 0, 40671, 0, 52378, 0, 44800,
 18392, 16714, 24107, 56935, 10998, 51441, 40671, 43515, 52378, 5068, 44800, 55422,
 16714, 36278, 56935, 41639, 51441, 2206, 43515, 59192, 5068, 12411, 55422, 44315,
 36278, 22617, 41639, 30333, 2206, 5332, 59192, 10800, 12411, 41273, 44315, 861,
 22617, 16426, 30333, 24976, 5332, 12995, 10800, 46419, 41273, 58931, 861, 9859,
 16426, 8416, 24976, 56468, 12995, 10255, 46419, 40061, 58931, 47763, 9859, 21067,
 8416, 26147, 56468, 62252, 10255, 52004, 40061, 39970, 47763, 58971, 21067, 12763,
 26147, 8145, 62252, 3647, 52004, 6244, 39970, 45032, 58971, 57913, 12763, 17967,
 8145, 62218, 3647, 24421, 6244, 52738, 45032, 10151, 57913, 62670, 17967, 42890,
 62218, 29381, 24421, 22666, 52738, 52091, 10151, 25663, 62670, 11282, 42890, 48156,
 29381, 0, 22666, 0, 52091, 0, 25663, 0, 11282, 0, 48156, 0,
 0, 24107, 0, 1849, 0, 40671, 0, 25286, 0, 44800, 0, 41474,
 24107, 56935, 1849, 11377, 40671, 43515, 25286, 39325, 44800, 55422, 41474, 59842,
 56935, 41639, 11377, 8755, 43515, 59192, 39325, 42140, 55422, 44315, 59842, 8597,
 41639, 30333, 8755, 59578, 59192, 10800, 42140, 59664, 44315, 861, 8597, 42247,
 30333, 24976, 59578, 40269, 10800, 46419, 59664, 29405, 861, 9859, 42247, 56376,
 24976, 56468, 40269, 51500, 46419, 40061, 29405, 32457, 9859, 21067, 56376, 42935,
 56468, 62252, 51500, 24345, 40061, 39970, 32457, 51814, 21067, 12763, 42935, 43451,
 62252, 3647, 24345, 44589, 39970, 45032, 51814, 28427, 12763, 17967, 43451, 10107,
 3647, 24421, 44589, 13620, 45032, 10151, 28427, 52249, 17967, 42890, 10107, 17970,
 24421, 22666, 13620, 10361, 10151, 25663, 52249, 59454, 42890, 48156, 17970, 9084,
 22666, 0, 10361, 0, 25663, 0, 59454, 0, 48156, 0, 9084, 0,
 0, 1849, 0, 25630, 0, 25286, 0, 35904, 0, 41474, 0, 47352,
 1849, 11377, 25630, 41163, 25286, 39325, 35904, 49537, 41474, 59842, 47352, 45511,
 11377, 8755, 41163, 16707, 39325, 42140, 49537, 38105, 59842, 8597, 45511, 5092,
 8755, 59578, 16707, 14504, 42140, 59664, 38105, 43817, 8597, 42247, 5092, 37923,
 59578, 40269, 14504, 59500, 59664, 29405, 43817, 44901, 42247, 56376, 37923, 36921,
 40269, 51500, 59500, 45337, 29405, 32457, 44901, 14884, 56376, 42935, 36921, 18758,
 51500, 24345, 45337, 208, 32457, 51814, 14884, 1910, 42935, 43451, 18758, 57250,
 24345, 44589, 208, 26994, 51814, 28427, 1910, 22042, 43451, 10107, 57250, 11989,
 44589, 13620, 26994, 51589, 28427, 52249, 22042, 2125, 10107, 17970, 11989, 53104,
 13620, 10361, 51589, 15040, 52249, 59454, 2125, 31502, 17970, 9084, 53104, 48197,
 10361, 0, 15040, 0, 59454, 0, 31502, 0, 9084, 0, 48197, 0,
 0, 25630, 0, 12965, 0, 35904, 0, 28160, 0, 47352, 0, 50052,
 25630, 41163, 12965, 42811, 35904, 49537, 28160, 28606, 47352, 45511, 50052, 37437,
 41163, 16707, 42811, 47850, 49537, 38105, 28606, 44019, 45511, 5092, 37437, 31848,
 16707, 14504, 47850, 29484, 38105, 43817, 44019, 33022, 5092, 37923, 31848, 40792,
 14504, 59500, 29484, 31776, 43817, 44901, 33022, 7133, 37923, 36921, 40792, 55069,
 59500, 45337, 31776, 29295, 44901, 14884, 7133, 16480, 36921, 18758, 55069, 33540,
 45337, 208, 29295, 21801, 14884, 1910, 16480, 44362, 18758, 57250, 33540, 43362,
 208, 26994, 21801, 12487, 1910, 22042, 44362, 45497, 57250, 11989, 43362, 62287,
 26994, 51589, 12487, 45004, 22042, 2125, 45497, 13848, 11989, 53104, 62287, 57302,
 51589, 15040, 45004, 49652, 2125, 31502, 13848, 20514, 53104, 48197, 57302, 10993,
 15040, 0, 49652, 0, 31502, 0, 20514, 0, 48197, 0, 10993, 0,
 0, 12965, 0, 59945, 0, 28160, 0, 16435, 0, 50052, 0, 40067,
 12965, 42811, 59945, 21021, 28160, 28606, 16435, 50723, 50052, 37437, 40067, 36837,
 42811, 47850, 21021, 62503, 28606, 44019, 50723, 36457, 37437, 31848, 36837, 65020,
 47850, 29484, 62503, 5438, 44019, 33022, 36457, 57457, 31848, 40792, 65020, 41437,
 29484, 31776, 5438, 33703, 33022, 7133, 57457, 62922, 40792, 55069, 41437, 48063,
 31776, 29295, 33703, 41363, 7133, 16480, 62922, 4909, 55069, 33540, 48063, 19049,
 29295, 21801, 41363, 14630, 16480, 44362, 4909, 17599, 33540, 43362, 19049, 885,
 21801, 12487, 14630, 35345, 44362, 45497, 17599, 28754, 43362, 62287, 885, 15601,
 12487, 45004, 35345, 6551, 45497, 13848, 28754, 31753, 62287, 57302, 15601, 11183,
 45004, 49652, 6551, 28465, 13848, 20514, 31753, 55218, 57302, 10993, 11183, 25302,
 49652, 0, 28465, 0, 20514, 0, 55218, 0, 10993, 0, 25302, 0,
 0, 59945, 0, 10789, 0, 16435, 0, 62949, 0, 40067, 0, 24871,
 59945, 21021, 10789, 51118, 16435, 50723, 62949, 45838, 40067, 36837, 24871, 41668,
 21021, 62503, 51118, 50008, 50723, 36457, 45838, 57401, 36837, 65020, 41668, 572,
 62503, 5438, 50008, 62688, 36457, 57457, 57401, 16769, 65020, 41437, 572, 23211,
 5438, 33703, 62688, 6274, 57457, 62922, 16769, 58148, 41437, 48063, 23211, 63163,
 33703, 41363, 6274, 31066, 62922, 4909, 58148, 1767, 48063, 19049, 63163, 43534,
 41363, 14630, 31066, 52981, 4909, 17599, 1767, 11649, 19049, 885, 43534, 16383,
 14630, 35345, 52981, 63982, 17599, 28754, 11649, 4143, 885, 15601, 16383, 18105,
 35345, 6551, 63982, 21846, 28754, 31753, 4143, 62572, 15601, 11183, 18105, 48987,
 6551, 28465, 21846, 37325, 31753, 55218, 62572, 1637, 11183, 25302, 48987, 62744,
 28465, 0, 37325, 0, 55218, 0, 1637, 0, 25302, 0, 62744, 0,
 0, 10789, 0, 23092, 0, 62949, 0, 1351, 0, 24871, 0, 34023,
 10789, 51118, 23092, 30767, 62949, 45838, 1351, 43095, 24871, 41668, 34023, 24648,
 51118, 50008, 30767, 51550, 45838, 57401, 43095, 63381, 41668, 572, 24648, 13186,
 50008, 62688, 51550, 2963, 57401, 16769, 63381, 27314, 572, 23211, 13186, 36994,
 62688, 6274, 2963, 63137, 16769, 58148, 27314, 27367, 23211, 63163, 36994, 60752,
 6274, 31066, 63137, 24843, 58148, 1767, 27367, 48649, 63163, 43534, 60752, 65394,
 31066, 52981, 24843, 24170, 1767, 11649, 48649, 41041, 43534, 16383, 65394, 8951,
 52981, 63982, 24170, 37025, 11649, 4143, 41041, 1863, 16383, 18105, 8951, 29390,
 63982, 21846, 37025, 43466, 4143, 62572, 1863, 46684, 18105, 48987, 29390, 61145,
 21846, 37325, 43466, 43727, 62572, 1637, 46684, 64432, 48987, 62744, 61145, 46354,
 37325, 0, 43727, 0, 1637, 0, 64432, 0, 62744, 0, 46354, 0,
 0, 23092, 0, 11295, 0, 1351, 0, 47005, 0, 34023, 0, 51463,
 23092, 30767, 11295, 29047, 1351, 43095, 47005, 8635, 34023, 24648, 51463, 47247,
 30767, 51550, 29047, 16653, 43095, 63381, 8635, 34734, 24648, 13186, 47247, 32326,
 51550, 2963, 16653, 44188, 63381, 27314, 34734, 15805, 13186, 36994, 32326, 6140,
 2963, 63137, 44188, 39826, 27314, 27367, 15805, 15571, 36994, 60752, 6140, 5984,
 63137, 24843, 39826, 35956, 27367, 48649, 15571, 52254, 60752, 65394, 5984, 31877,
 24843, 24170, 35956, 42305, 48649, 41041, 52254, 36222, 65394, 8951, 31877, 6243,
 24170, 37025, 42305, 14318, 41041, 1863, 36222, 42759, 8951, 29390, 6243, 26785,
 37025, 43466, 14318, 49742, 1863, 46684, 42759, 27919, 29390, 61145, 26785, 61251,
 43466, 43727, 49742, 19643, 46684, 64432, 27919, 47905, 61145, 46354, 61251, 45759,
 43727, 0, 19643, 0, 64432, 0, 47905, 0, 46354, 0, 45759, 0,
 0, 11295, 0, 28654, 0, 47005, 0, 9011, 0, 51463, 0, 33271,
 11295, 29047, 28654, 20083, 47005, 8635, 9011, 47313, 51463, 47247, 33271, 28000,
 29047, 16653, 20083, 25221, 8635, 34734, 47313, 39541, 47247, 32326, 28000, 60551,
 16653, 44188, 25221, 47878, 34734, 15805, 39541, 26069, 32326, 6140, 60551, 2360,
 44188, 39826, 47878, 27222, 15805, 15571, 26069, 64770, 6140, 5984, 2360, 20096,
 39826, 35956, 27222, 23830, 15571, 52254, 64770, 44435, 5984, 31877, 20096, 27531,
 35956, 42305, 23830, 27366, 52254, 36222, 44435, 36251, 31877, 6243, 27531, 26218,
 42305, 14318, 27366, 6594, 36222, 42759, 36251, 49057, 6243, 26785, 26218, 8529,
 14318, 49742, 6594, 53603, 42759, 27919, 49057, 656, 26785, 61251, 8529, 61921,
 49742, 19643, 53603, 10605, 27919, 47905, 656, 5206, 61251, 45759, 61921, 6005,
 19643, 0, 10605, 0, 47905, 0, 5206, 0, 45759, 0, 6005, 0,
 0, 28654, 0, 0, 0, 9011, 0, 0, 0, 33271, 0, 0,
 28654, 20083, 0, 0, 9011, 47313, 0, 0, 33271, 28000, 0, 0,
 20083, 25221, 0, 0, 47313, 39541, 0, 0, 28000, 60551, 0, 0,
 25221, 47878, 0, 0, 39541, 26069, 0, 0, 60551, 2360, 0, 0,
 47878, 27222, 0, 0, 26069, 64770, 0, 0, 2360, 20096, 0, 0,
 27222, 23830, 0, 0, 64770, 44435, 0, 0, 20096, 27531, 0, 0,
 23830, 27366, 0, 0, 44435, 36251, 0, 0, 27531, 26218, 0, 0,
 27366, 6594, 0, 0, 36251, 49057, 0, 0, 26218, 8529, 0, 0,
 6594, 53603, 0, 0, 49057, 656, 0, 0, 8529, 61921, 0, 0,
 53603, 10605, 0, 0, 656, 5206, 0, 0, 61921, 6005, 0, 0,
 10605, 0, 0, 0, 5206, 0, 0, 0, 6005, 0, 0, 0
};
