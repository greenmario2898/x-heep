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

const uint32_t input_image_nchw[132] = {
    2195, 55246, 8383, 64693, 37531, 58476, 29058, 565, 48636, 16881, 5745, 45855,
    46558, 6641, 31786, 33463, 37704, 25130, 32274, 45870, 51672, 27974, 34725, 13771,
    53554, 575, 47869, 29652, 24992, 51421, 55044, 4133, 39691, 15110, 21752, 22283,
    14023, 36336, 38112, 3183, 64319, 23269, 25348, 29519, 53169, 11947, 12366, 57033,
    46232, 1223, 44000, 2106, 11660, 30646, 11894, 28294, 9077, 42452, 42931, 23251,
    51297, 7725, 13601, 35418, 9860, 39823, 23152, 28788, 10986, 31717, 30396, 12514,
    25537, 34495, 58683, 2856, 18899, 14472, 18343, 40155, 2951, 14375, 5468, 10194,
    57095, 29007, 60222, 60669, 36926, 12948, 10930, 49491, 42906, 41141, 20942, 906,
    31193, 48414, 14399, 9687, 27764, 55417, 12616, 49249, 18476, 38955, 14894, 40812,
    64680, 51130, 3484, 14794, 10258, 19407, 45341, 17959, 13461, 25511, 4259, 14224,
    19418, 45708, 51694, 22184, 62621, 5248, 30182, 9593, 764, 41854, 33431, 60153
};
const uint32_t golden_im2col_nchw[1728] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2195, 55246, 8383, 64693, 37531, 58476, 29058, 565, 48636, 16881, 5745, 0, 46558, 6641, 31786, 33463, 37704, 25130, 32274, 45870, 51672, 27974, 34725, 0, 53554, 575, 47869, 29652, 24992, 51421, 55044, 4133, 39691, 15110, 21752, 0, 14023, 36336, 38112, 3183, 64319, 23269, 25348, 29519, 53169, 11947, 12366, 0, 46232, 1223, 44000, 2106, 11660, 30646, 11894, 28294, 9077, 42452, 42931, 0, 51297, 7725, 13601, 35418, 9860, 39823, 23152, 28788, 10986, 31717, 30396, 0, 25537, 34495, 58683, 2856, 18899, 14472, 18343, 40155, 2951, 14375, 5468, 0, 57095, 29007, 60222, 60669, 36926, 12948, 10930, 49491, 42906, 41141, 20942, 0, 31193, 48414, 14399, 9687, 27764, 55417, 12616, 49249, 18476, 38955, 14894, 0, 64680, 51130, 3484, 14794, 10258, 19407, 45341, 17959, 13461, 25511, 4259,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2195, 55246, 8383, 64693, 37531, 58476, 29058, 565, 48636, 16881, 5745, 45855, 46558, 6641, 31786, 33463, 37704, 25130, 32274, 45870, 51672, 27974, 34725, 13771, 53554, 575, 47869, 29652, 24992, 51421, 55044, 4133, 39691, 15110, 21752, 22283, 14023, 36336, 38112, 3183, 64319, 23269, 25348, 29519, 53169, 11947, 12366, 57033, 46232, 1223, 44000, 2106, 11660, 30646, 11894, 28294, 9077, 42452, 42931, 23251, 51297, 7725, 13601, 35418, 9860, 39823, 23152, 28788, 10986, 31717, 30396, 12514, 25537, 34495, 58683, 2856, 18899, 14472, 18343, 40155, 2951, 14375, 5468, 10194, 57095, 29007, 60222, 60669, 36926, 12948, 10930, 49491, 42906, 41141, 20942, 906, 31193, 48414, 14399, 9687, 27764, 55417, 12616, 49249, 18476, 38955, 14894, 40812, 64680, 51130, 3484, 14794, 10258, 19407, 45341, 17959, 13461, 25511, 4259, 14224,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55246, 8383, 64693, 37531, 58476, 29058, 565, 48636, 16881, 5745, 45855, 0, 6641, 31786, 33463, 37704, 25130, 32274, 45870, 51672, 27974, 34725, 13771, 0, 575, 47869, 29652, 24992, 51421, 55044, 4133, 39691, 15110, 21752, 22283, 0, 36336, 38112, 3183, 64319, 23269, 25348, 29519, 53169, 11947, 12366, 57033, 0, 1223, 44000, 2106, 11660, 30646, 11894, 28294, 9077, 42452, 42931, 23251, 0, 7725, 13601, 35418, 9860, 39823, 23152, 28788, 10986, 31717, 30396, 12514, 0, 34495, 58683, 2856, 18899, 14472, 18343, 40155, 2951, 14375, 5468, 10194, 0, 29007, 60222, 60669, 36926, 12948, 10930, 49491, 42906, 41141, 20942, 906, 0, 48414, 14399, 9687, 27764, 55417, 12616, 49249, 18476, 38955, 14894, 40812, 0, 51130, 3484, 14794, 10258, 19407, 45341, 17959, 13461, 25511, 4259, 14224, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8383, 64693, 37531, 58476, 29058, 565, 48636, 16881, 5745, 45855, 0, 0, 31786, 33463, 37704, 25130, 32274, 45870, 51672, 27974, 34725, 13771, 0, 0, 47869, 29652, 24992, 51421, 55044, 4133, 39691, 15110, 21752, 22283, 0, 0, 38112, 3183, 64319, 23269, 25348, 29519, 53169, 11947, 12366, 57033, 0, 0, 44000, 2106, 11660, 30646, 11894, 28294, 9077, 42452, 42931, 23251, 0, 0, 13601, 35418, 9860, 39823, 23152, 28788, 10986, 31717, 30396, 12514, 0, 0, 58683, 2856, 18899, 14472, 18343, 40155, 2951, 14375, 5468, 10194, 0, 0, 60222, 60669, 36926, 12948, 10930, 49491, 42906, 41141, 20942, 906, 0, 0, 14399, 9687, 27764, 55417, 12616, 49249, 18476, 38955, 14894, 40812, 0, 0, 3484, 14794, 10258, 19407, 45341, 17959, 13461, 25511, 4259, 14224, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2195, 55246, 8383, 64693, 37531, 58476, 29058, 565, 48636, 16881, 5745, 0, 46558, 6641, 31786, 33463, 37704, 25130, 32274, 45870, 51672, 27974, 34725, 0, 53554, 575, 47869, 29652, 24992, 51421, 55044, 4133, 39691, 15110, 21752, 0, 14023, 36336, 38112, 3183, 64319, 23269, 25348, 29519, 53169, 11947, 12366, 0, 46232, 1223, 44000, 2106, 11660, 30646, 11894, 28294, 9077, 42452, 42931, 0, 51297, 7725, 13601, 35418, 9860, 39823, 23152, 28788, 10986, 31717, 30396, 0, 25537, 34495, 58683, 2856, 18899, 14472, 18343, 40155, 2951, 14375, 5468, 0, 57095, 29007, 60222, 60669, 36926, 12948, 10930, 49491, 42906, 41141, 20942, 0, 31193, 48414, 14399, 9687, 27764, 55417, 12616, 49249, 18476, 38955, 14894, 0, 64680, 51130, 3484, 14794, 10258, 19407, 45341, 17959, 13461, 25511, 4259, 0, 19418, 45708, 51694, 22184, 62621, 5248, 30182, 9593, 764, 41854, 33431,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2195, 55246, 8383, 64693, 37531, 58476, 29058, 565, 48636, 16881, 5745, 45855, 46558, 6641, 31786, 33463, 37704, 25130, 32274, 45870, 51672, 27974, 34725, 13771, 53554, 575, 47869, 29652, 24992, 51421, 55044, 4133, 39691, 15110, 21752, 22283, 14023, 36336, 38112, 3183, 64319, 23269, 25348, 29519, 53169, 11947, 12366, 57033, 46232, 1223, 44000, 2106, 11660, 30646, 11894, 28294, 9077, 42452, 42931, 23251, 51297, 7725, 13601, 35418, 9860, 39823, 23152, 28788, 10986, 31717, 30396, 12514, 25537, 34495, 58683, 2856, 18899, 14472, 18343, 40155, 2951, 14375, 5468, 10194, 57095, 29007, 60222, 60669, 36926, 12948, 10930, 49491, 42906, 41141, 20942, 906, 31193, 48414, 14399, 9687, 27764, 55417, 12616, 49249, 18476, 38955, 14894, 40812, 64680, 51130, 3484, 14794, 10258, 19407, 45341, 17959, 13461, 25511, 4259, 14224, 19418, 45708, 51694, 22184, 62621, 5248, 30182, 9593, 764, 41854, 33431, 60153,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55246, 8383, 64693, 37531, 58476, 29058, 565, 48636, 16881, 5745, 45855, 0, 6641, 31786, 33463, 37704, 25130, 32274, 45870, 51672, 27974, 34725, 13771, 0, 575, 47869, 29652, 24992, 51421, 55044, 4133, 39691, 15110, 21752, 22283, 0, 36336, 38112, 3183, 64319, 23269, 25348, 29519, 53169, 11947, 12366, 57033, 0, 1223, 44000, 2106, 11660, 30646, 11894, 28294, 9077, 42452, 42931, 23251, 0, 7725, 13601, 35418, 9860, 39823, 23152, 28788, 10986, 31717, 30396, 12514, 0, 34495, 58683, 2856, 18899, 14472, 18343, 40155, 2951, 14375, 5468, 10194, 0, 29007, 60222, 60669, 36926, 12948, 10930, 49491, 42906, 41141, 20942, 906, 0, 48414, 14399, 9687, 27764, 55417, 12616, 49249, 18476, 38955, 14894, 40812, 0, 51130, 3484, 14794, 10258, 19407, 45341, 17959, 13461, 25511, 4259, 14224, 0, 45708, 51694, 22184, 62621, 5248, 30182, 9593, 764, 41854, 33431, 60153, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8383, 64693, 37531, 58476, 29058, 565, 48636, 16881, 5745, 45855, 0, 0, 31786, 33463, 37704, 25130, 32274, 45870, 51672, 27974, 34725, 13771, 0, 0, 47869, 29652, 24992, 51421, 55044, 4133, 39691, 15110, 21752, 22283, 0, 0, 38112, 3183, 64319, 23269, 25348, 29519, 53169, 11947, 12366, 57033, 0, 0, 44000, 2106, 11660, 30646, 11894, 28294, 9077, 42452, 42931, 23251, 0, 0, 13601, 35418, 9860, 39823, 23152, 28788, 10986, 31717, 30396, 12514, 0, 0, 58683, 2856, 18899, 14472, 18343, 40155, 2951, 14375, 5468, 10194, 0, 0, 60222, 60669, 36926, 12948, 10930, 49491, 42906, 41141, 20942, 906, 0, 0, 14399, 9687, 27764, 55417, 12616, 49249, 18476, 38955, 14894, 40812, 0, 0, 3484, 14794, 10258, 19407, 45341, 17959, 13461, 25511, 4259, 14224, 0, 0, 51694, 22184, 62621, 5248, 30182, 9593, 764, 41854, 33431, 60153, 0, 0,
    0, 2195, 55246, 8383, 64693, 37531, 58476, 29058, 565, 48636, 16881, 5745, 0, 46558, 6641, 31786, 33463, 37704, 25130, 32274, 45870, 51672, 27974, 34725, 0, 53554, 575, 47869, 29652, 24992, 51421, 55044, 4133, 39691, 15110, 21752, 0, 14023, 36336, 38112, 3183, 64319, 23269, 25348, 29519, 53169, 11947, 12366, 0, 46232, 1223, 44000, 2106, 11660, 30646, 11894, 28294, 9077, 42452, 42931, 0, 51297, 7725, 13601, 35418, 9860, 39823, 23152, 28788, 10986, 31717, 30396, 0, 25537, 34495, 58683, 2856, 18899, 14472, 18343, 40155, 2951, 14375, 5468, 0, 57095, 29007, 60222, 60669, 36926, 12948, 10930, 49491, 42906, 41141, 20942, 0, 31193, 48414, 14399, 9687, 27764, 55417, 12616, 49249, 18476, 38955, 14894, 0, 64680, 51130, 3484, 14794, 10258, 19407, 45341, 17959, 13461, 25511, 4259, 0, 19418, 45708, 51694, 22184, 62621, 5248, 30182, 9593, 764, 41854, 33431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2195, 55246, 8383, 64693, 37531, 58476, 29058, 565, 48636, 16881, 5745, 45855, 46558, 6641, 31786, 33463, 37704, 25130, 32274, 45870, 51672, 27974, 34725, 13771, 53554, 575, 47869, 29652, 24992, 51421, 55044, 4133, 39691, 15110, 21752, 22283, 14023, 36336, 38112, 3183, 64319, 23269, 25348, 29519, 53169, 11947, 12366, 57033, 46232, 1223, 44000, 2106, 11660, 30646, 11894, 28294, 9077, 42452, 42931, 23251, 51297, 7725, 13601, 35418, 9860, 39823, 23152, 28788, 10986, 31717, 30396, 12514, 25537, 34495, 58683, 2856, 18899, 14472, 18343, 40155, 2951, 14375, 5468, 10194, 57095, 29007, 60222, 60669, 36926, 12948, 10930, 49491, 42906, 41141, 20942, 906, 31193, 48414, 14399, 9687, 27764, 55417, 12616, 49249, 18476, 38955, 14894, 40812, 64680, 51130, 3484, 14794, 10258, 19407, 45341, 17959, 13461, 25511, 4259, 14224, 19418, 45708, 51694, 22184, 62621, 5248, 30182, 9593, 764, 41854, 33431, 60153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    55246, 8383, 64693, 37531, 58476, 29058, 565, 48636, 16881, 5745, 45855, 0, 6641, 31786, 33463, 37704, 25130, 32274, 45870, 51672, 27974, 34725, 13771, 0, 575, 47869, 29652, 24992, 51421, 55044, 4133, 39691, 15110, 21752, 22283, 0, 36336, 38112, 3183, 64319, 23269, 25348, 29519, 53169, 11947, 12366, 57033, 0, 1223, 44000, 2106, 11660, 30646, 11894, 28294, 9077, 42452, 42931, 23251, 0, 7725, 13601, 35418, 9860, 39823, 23152, 28788, 10986, 31717, 30396, 12514, 0, 34495, 58683, 2856, 18899, 14472, 18343, 40155, 2951, 14375, 5468, 10194, 0, 29007, 60222, 60669, 36926, 12948, 10930, 49491, 42906, 41141, 20942, 906, 0, 48414, 14399, 9687, 27764, 55417, 12616, 49249, 18476, 38955, 14894, 40812, 0, 51130, 3484, 14794, 10258, 19407, 45341, 17959, 13461, 25511, 4259, 14224, 0, 45708, 51694, 22184, 62621, 5248, 30182, 9593, 764, 41854, 33431, 60153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    8383, 64693, 37531, 58476, 29058, 565, 48636, 16881, 5745, 45855, 0, 0, 31786, 33463, 37704, 25130, 32274, 45870, 51672, 27974, 34725, 13771, 0, 0, 47869, 29652, 24992, 51421, 55044, 4133, 39691, 15110, 21752, 22283, 0, 0, 38112, 3183, 64319, 23269, 25348, 29519, 53169, 11947, 12366, 57033, 0, 0, 44000, 2106, 11660, 30646, 11894, 28294, 9077, 42452, 42931, 23251, 0, 0, 13601, 35418, 9860, 39823, 23152, 28788, 10986, 31717, 30396, 12514, 0, 0, 58683, 2856, 18899, 14472, 18343, 40155, 2951, 14375, 5468, 10194, 0, 0, 60222, 60669, 36926, 12948, 10930, 49491, 42906, 41141, 20942, 906, 0, 0, 14399, 9687, 27764, 55417, 12616, 49249, 18476, 38955, 14894, 40812, 0, 0, 3484, 14794, 10258, 19407, 45341, 17959, 13461, 25511, 4259, 14224, 0, 0, 51694, 22184, 62621, 5248, 30182, 9593, 764, 41854, 33431, 60153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};


