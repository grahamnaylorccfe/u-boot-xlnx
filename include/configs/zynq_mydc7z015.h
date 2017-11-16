/*
 * (C) Copyright 2013 Xilinx, Inc.
 * (C) Copyright 2015 Antmicro Ltd
 * (C) Copyright 2017 Koheron SAS
 *
 * Configuration for MYIR MYD-C7Z015
 * See zynq-common.h for Zynq common configs
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __CONFIG_ZYNQ_MARS_H
#define __CONFIG_ZYNQ_MARS_H

#define CONFIG_CPU_FREQ_HZ		800000000

#define CONFIG_ZYNQ_SDHCI0

/* Select Micrel PHY */
#define CONFIG_PHY_MICREL

#define PHY_ANEG_TIMEOUT	8000	/* PHY needs a longer aneg time */

#include <configs/zynq-common.h>

/* Unselect Marvell PHY (selected by zynq-common) */
#ifdef CONFIG_PHY_MARVELL
#undef CONFIG_PHY_MARVELL
#endif

#endif /* __CONFIG_ZYNQ_MERCURY_H */
