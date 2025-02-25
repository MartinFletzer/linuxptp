/**
 * @file ts2phc_generic_pps_source.h
 * @note Copyright (C) 2019 Richard Cochran <richardcochran@gmail.com>
 * @note SPDX-License-Identifier: GPL-2.0+
 */
#ifndef HAVE_TS2PHC_GENERIC_PPS_SOURCE_H
#define HAVE_TS2PHC_GENERIC_PPS_SOURCE_H

#include "ts2phc_pps_source.h"

struct ts2phc_pps_source *ts2phc_generic_pps_source_create(struct config *cfg,
							   const char *dev);

#endif
