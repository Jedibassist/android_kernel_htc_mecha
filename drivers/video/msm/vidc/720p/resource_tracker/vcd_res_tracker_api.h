/* Copyright (c) 2010-2012, Code Aurora Forum. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer in the documentation and/or other materials provided
 *       with the distribution.
 *     * Neither the name of Code Aurora Forum, Inc. nor the names of its
 *       contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */
#ifndef _VIDEO_720P_RESOURCE_TRACKER_API_H_
#define _VIDEO_720P_RESOURCE_TRACKER_API_H_

#include "vcd_core.h"

void res_trk_init(struct device *device, u32 irq);
u32 res_trk_power_up(void);
u32 res_trk_power_down(void);
u32 res_trk_enable_clocks(void);
u32 res_trk_disable_clocks(void);
u32 res_trk_get_max_perf_level(u32 *pn_max_perf_lvl);
u32 res_trk_set_perf_level(u32 req_perf_lvl, u32 *pn_set_perf_lvl,
	struct vcd_dev_ctxt *dev_ctxt);
u32 res_trk_get_curr_perf_level(u32 *pn_perf_lvl);
u32 res_trk_download_firmware(void);
u32 res_trk_get_core_type(void);
u32 res_trk_get_mem_type(void);
u32 res_trk_get_disable_fullhd(void);
u32 res_trk_get_enable_ion(void);
struct ion_client *res_trk_get_ion_client(void);
void res_trk_set_mem_type(enum ddl_mem_area mem_type);
int res_trk_check_for_sec_session(void);
int res_trk_open_secure_session(void);
int res_trk_close_secure_session(void);
#endif
