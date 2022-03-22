/*
 * Copyright (c) Atmosphère-NX
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#define ATMOSPHERE_TARGET_FIRMWARE_WITH_REVISION(major, minor, micro, rev) ((major << 24) | (minor << 16) | (micro << 8) | (rev))

#define ATMOSPHERE_TARGET_FIRMWARE(major, minor, micro) ATMOSPHERE_TARGET_FIRMWARE_WITH_REVISION(major, minor, micro, 0)

#define ATMOSPHERE_TARGET_FIRMWARE_1_0_0  ATMOSPHERE_TARGET_FIRMWARE( 1,  0,  0)
#define ATMOSPHERE_TARGET_FIRMWARE_2_0_0  ATMOSPHERE_TARGET_FIRMWARE( 2,  0,  0)
#define ATMOSPHERE_TARGET_FIRMWARE_2_1_0  ATMOSPHERE_TARGET_FIRMWARE( 2,  1,  0)
#define ATMOSPHERE_TARGET_FIRMWARE_2_2_0  ATMOSPHERE_TARGET_FIRMWARE( 2,  2,  0)
#define ATMOSPHERE_TARGET_FIRMWARE_2_3_0  ATMOSPHERE_TARGET_FIRMWARE( 2,  3,  0)
#define ATMOSPHERE_TARGET_FIRMWARE_3_0_0  ATMOSPHERE_TARGET_FIRMWARE( 3,  0,  0)
#define ATMOSPHERE_TARGET_FIRMWARE_3_0_1  ATMOSPHERE_TARGET_FIRMWARE( 3,  0,  1)
#define ATMOSPHERE_TARGET_FIRMWARE_3_0_2  ATMOSPHERE_TARGET_FIRMWARE( 3,  0,  2)
#define ATMOSPHERE_TARGET_FIRMWARE_4_0_0  ATMOSPHERE_TARGET_FIRMWARE( 4,  0,  0)
#define ATMOSPHERE_TARGET_FIRMWARE_4_0_1  ATMOSPHERE_TARGET_FIRMWARE( 4,  0,  1)
#define ATMOSPHERE_TARGET_FIRMWARE_4_1_0  ATMOSPHERE_TARGET_FIRMWARE( 4,  1,  0)
#define ATMOSPHERE_TARGET_FIRMWARE_5_0_0  ATMOSPHERE_TARGET_FIRMWARE( 5,  0,  0)
#define ATMOSPHERE_TARGET_FIRMWARE_5_0_1  ATMOSPHERE_TARGET_FIRMWARE( 5,  0,  1)
#define ATMOSPHERE_TARGET_FIRMWARE_5_0_2  ATMOSPHERE_TARGET_FIRMWARE( 5,  0,  2)
#define ATMOSPHERE_TARGET_FIRMWARE_5_1_0  ATMOSPHERE_TARGET_FIRMWARE( 5,  1,  0)
#define ATMOSPHERE_TARGET_FIRMWARE_6_0_0  ATMOSPHERE_TARGET_FIRMWARE( 6,  0,  0)
#define ATMOSPHERE_TARGET_FIRMWARE_6_0_1  ATMOSPHERE_TARGET_FIRMWARE( 6,  0,  1)
#define ATMOSPHERE_TARGET_FIRMWARE_6_1_0  ATMOSPHERE_TARGET_FIRMWARE( 6,  1,  0)
#define ATMOSPHERE_TARGET_FIRMWARE_6_2_0  ATMOSPHERE_TARGET_FIRMWARE( 6,  2,  0)
#define ATMOSPHERE_TARGET_FIRMWARE_7_0_0  ATMOSPHERE_TARGET_FIRMWARE( 7,  0,  0)
#define ATMOSPHERE_TARGET_FIRMWARE_7_0_1  ATMOSPHERE_TARGET_FIRMWARE( 7,  0,  1)
#define ATMOSPHERE_TARGET_FIRMWARE_8_0_0  ATMOSPHERE_TARGET_FIRMWARE( 8,  0,  0)
#define ATMOSPHERE_TARGET_FIRMWARE_8_0_1  ATMOSPHERE_TARGET_FIRMWARE( 8,  0,  1)
#define ATMOSPHERE_TARGET_FIRMWARE_8_1_0  ATMOSPHERE_TARGET_FIRMWARE( 8,  1,  0)
#define ATMOSPHERE_TARGET_FIRMWARE_8_1_1  ATMOSPHERE_TARGET_FIRMWARE( 8,  1,  1)
#define ATMOSPHERE_TARGET_FIRMWARE_9_0_0  ATMOSPHERE_TARGET_FIRMWARE( 9,  0,  0)
#define ATMOSPHERE_TARGET_FIRMWARE_9_0_1  ATMOSPHERE_TARGET_FIRMWARE( 9,  0,  1)
#define ATMOSPHERE_TARGET_FIRMWARE_9_1_0  ATMOSPHERE_TARGET_FIRMWARE( 9,  1,  0)
#define ATMOSPHERE_TARGET_FIRMWARE_9_2_0  ATMOSPHERE_TARGET_FIRMWARE( 9,  2,  0)
#define ATMOSPHERE_TARGET_FIRMWARE_10_0_0 ATMOSPHERE_TARGET_FIRMWARE(10,  0,  0)
#define ATMOSPHERE_TARGET_FIRMWARE_10_0_1 ATMOSPHERE_TARGET_FIRMWARE(10,  0,  1)
#define ATMOSPHERE_TARGET_FIRMWARE_10_0_2 ATMOSPHERE_TARGET_FIRMWARE(10,  0,  2)
#define ATMOSPHERE_TARGET_FIRMWARE_10_0_3 ATMOSPHERE_TARGET_FIRMWARE(10,  0,  3)
#define ATMOSPHERE_TARGET_FIRMWARE_10_0_4 ATMOSPHERE_TARGET_FIRMWARE(10,  0,  4)
#define ATMOSPHERE_TARGET_FIRMWARE_10_1_0 ATMOSPHERE_TARGET_FIRMWARE(10,  1,  0)
#define ATMOSPHERE_TARGET_FIRMWARE_10_1_1 ATMOSPHERE_TARGET_FIRMWARE(10,  1,  1)
#define ATMOSPHERE_TARGET_FIRMWARE_10_2_0 ATMOSPHERE_TARGET_FIRMWARE(10,  2,  0)
#define ATMOSPHERE_TARGET_FIRMWARE_11_0_0 ATMOSPHERE_TARGET_FIRMWARE(11,  0,  0)
#define ATMOSPHERE_TARGET_FIRMWARE_11_0_1 ATMOSPHERE_TARGET_FIRMWARE(11,  0,  1)
#define ATMOSPHERE_TARGET_FIRMWARE_12_0_0 ATMOSPHERE_TARGET_FIRMWARE(12,  0,  0)
#define ATMOSPHERE_TARGET_FIRMWARE_12_0_1 ATMOSPHERE_TARGET_FIRMWARE(12,  0,  1)
#define ATMOSPHERE_TARGET_FIRMWARE_12_0_2 ATMOSPHERE_TARGET_FIRMWARE(12,  0,  2)
#define ATMOSPHERE_TARGET_FIRMWARE_12_0_3 ATMOSPHERE_TARGET_FIRMWARE(12,  0,  3)
#define ATMOSPHERE_TARGET_FIRMWARE_12_1_0 ATMOSPHERE_TARGET_FIRMWARE(12,  1,  0)
#define ATMOSPHERE_TARGET_FIRMWARE_13_0_0 ATMOSPHERE_TARGET_FIRMWARE(13,  0,  0)
#define ATMOSPHERE_TARGET_FIRMWARE_13_1_0 ATMOSPHERE_TARGET_FIRMWARE(13,  1,  0)
#define ATMOSPHERE_TARGET_FIRMWARE_13_2_0 ATMOSPHERE_TARGET_FIRMWARE(13,  2,  0)
#define ATMOSPHERE_TARGET_FIRMWARE_13_2_1 ATMOSPHERE_TARGET_FIRMWARE(13,  2,  1)
#define ATMOSPHERE_TARGET_FIRMWARE_14_0_0 ATMOSPHERE_TARGET_FIRMWARE(14,  0,  0)

#define ATMOSPHERE_TARGET_FIRMWARE_CURRENT ATMOSPHERE_TARGET_FIRMWARE_14_0_0

#define ATMOSPHERE_TARGET_FIRMWARE_MIN ATMOSPHERE_TARGET_FIRMWARE(0, 0, 0)
#define ATMOSPHERE_TARGET_FIRMWARE_MAX ATMOSPHERE_TARGET_FIRMWARE_CURRENT

#ifdef __cplusplus

namespace ams {

    enum TargetFirmware : u32 {
        TargetFirmware_Min     = ATMOSPHERE_TARGET_FIRMWARE_MIN,

        TargetFirmware_1_0_0   = ATMOSPHERE_TARGET_FIRMWARE_1_0_0,
        TargetFirmware_2_0_0   = ATMOSPHERE_TARGET_FIRMWARE_2_0_0,
        TargetFirmware_2_1_0   = ATMOSPHERE_TARGET_FIRMWARE_2_1_0,
        TargetFirmware_2_2_0   = ATMOSPHERE_TARGET_FIRMWARE_2_2_0,
        TargetFirmware_2_3_0   = ATMOSPHERE_TARGET_FIRMWARE_2_3_0,
        TargetFirmware_3_0_0   = ATMOSPHERE_TARGET_FIRMWARE_3_0_0,
        TargetFirmware_3_0_1   = ATMOSPHERE_TARGET_FIRMWARE_3_0_1,
        TargetFirmware_3_0_2   = ATMOSPHERE_TARGET_FIRMWARE_3_0_2,
        TargetFirmware_4_0_0   = ATMOSPHERE_TARGET_FIRMWARE_4_0_0,
        TargetFirmware_4_0_1   = ATMOSPHERE_TARGET_FIRMWARE_4_0_1,
        TargetFirmware_4_1_0   = ATMOSPHERE_TARGET_FIRMWARE_4_1_0,
        TargetFirmware_5_0_0   = ATMOSPHERE_TARGET_FIRMWARE_5_0_0,
        TargetFirmware_5_0_1   = ATMOSPHERE_TARGET_FIRMWARE_5_0_1,
        TargetFirmware_5_0_2   = ATMOSPHERE_TARGET_FIRMWARE_5_0_2,
        TargetFirmware_5_1_0   = ATMOSPHERE_TARGET_FIRMWARE_5_1_0,
        TargetFirmware_6_0_0   = ATMOSPHERE_TARGET_FIRMWARE_6_0_0,
        TargetFirmware_6_0_1   = ATMOSPHERE_TARGET_FIRMWARE_6_0_1,
        TargetFirmware_6_1_0   = ATMOSPHERE_TARGET_FIRMWARE_6_1_0,
        TargetFirmware_6_2_0   = ATMOSPHERE_TARGET_FIRMWARE_6_2_0,
        TargetFirmware_7_0_0   = ATMOSPHERE_TARGET_FIRMWARE_7_0_0,
        TargetFirmware_7_0_1   = ATMOSPHERE_TARGET_FIRMWARE_7_0_1,
        TargetFirmware_8_0_0   = ATMOSPHERE_TARGET_FIRMWARE_8_0_0,
        TargetFirmware_8_0_1   = ATMOSPHERE_TARGET_FIRMWARE_8_0_1,
        TargetFirmware_8_1_0   = ATMOSPHERE_TARGET_FIRMWARE_8_1_0,
        TargetFirmware_8_1_1   = ATMOSPHERE_TARGET_FIRMWARE_8_1_1,
        TargetFirmware_9_0_0   = ATMOSPHERE_TARGET_FIRMWARE_9_0_0,
        TargetFirmware_9_0_1   = ATMOSPHERE_TARGET_FIRMWARE_9_0_1,
        TargetFirmware_9_1_0   = ATMOSPHERE_TARGET_FIRMWARE_9_1_0,
        TargetFirmware_9_2_0   = ATMOSPHERE_TARGET_FIRMWARE_9_2_0,
        TargetFirmware_10_0_0  = ATMOSPHERE_TARGET_FIRMWARE_10_0_0,
        TargetFirmware_10_0_1  = ATMOSPHERE_TARGET_FIRMWARE_10_0_1,
        TargetFirmware_10_0_2  = ATMOSPHERE_TARGET_FIRMWARE_10_0_2,
        TargetFirmware_10_0_3  = ATMOSPHERE_TARGET_FIRMWARE_10_0_3,
        TargetFirmware_10_0_4  = ATMOSPHERE_TARGET_FIRMWARE_10_0_4,
        TargetFirmware_10_1_0  = ATMOSPHERE_TARGET_FIRMWARE_10_1_0,
        TargetFirmware_10_1_1  = ATMOSPHERE_TARGET_FIRMWARE_10_1_1,
        TargetFirmware_10_2_0  = ATMOSPHERE_TARGET_FIRMWARE_10_2_0,
        TargetFirmware_11_0_0  = ATMOSPHERE_TARGET_FIRMWARE_11_0_0,
        TargetFirmware_11_0_1  = ATMOSPHERE_TARGET_FIRMWARE_11_0_1,
        TargetFirmware_12_0_0  = ATMOSPHERE_TARGET_FIRMWARE_12_0_0,
        TargetFirmware_12_0_1  = ATMOSPHERE_TARGET_FIRMWARE_12_0_1,
        TargetFirmware_12_0_2  = ATMOSPHERE_TARGET_FIRMWARE_12_0_2,
        TargetFirmware_12_0_3  = ATMOSPHERE_TARGET_FIRMWARE_12_0_3,
        TargetFirmware_12_1_0  = ATMOSPHERE_TARGET_FIRMWARE_12_1_0,
        TargetFirmware_13_0_0  = ATMOSPHERE_TARGET_FIRMWARE_13_0_0,
        TargetFirmware_13_1_0  = ATMOSPHERE_TARGET_FIRMWARE_13_1_0,
        TargetFirmware_13_2_0  = ATMOSPHERE_TARGET_FIRMWARE_13_2_0,
        TargetFirmware_13_2_1  = ATMOSPHERE_TARGET_FIRMWARE_13_2_1,
        TargetFirmware_14_0_0  = ATMOSPHERE_TARGET_FIRMWARE_14_0_0,

        TargetFirmware_Current = ATMOSPHERE_TARGET_FIRMWARE_CURRENT,

        TargetFirmware_Max     = ATMOSPHERE_TARGET_FIRMWARE_MAX,
    };
    static_assert(TargetFirmware_Current <= TargetFirmware_Max);

}

#endif
