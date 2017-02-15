/* Copyright (c) 2013, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*---------------------------------------------------------------------------
 * This file is autogenerated file using gcdb parser. Please do not edit it.
 * Update input XML file to add a new entry or update variable in this file
 * VERSION = "1.0"
 *---------------------------------------------------------------------------*/

#ifndef _PANEL_HE070NA_LVDS_600P_VIDEO_H_
#define _PANEL_HE070NA_LVDS_600P_VIDEO_H_
/*---------------------------------------------------------------------------*/
/* HEADER files                                                              */
/*---------------------------------------------------------------------------*/
#include "panel.h"

/*---------------------------------------------------------------------------*/
/* Panel configuration                                                       */
/*---------------------------------------------------------------------------*/
static struct panel_config he070na_lvds_600p_video_panel_data = {
	"qcom,mdss_dsi_he070na_lvds_600p_video", "dsi:0:", "qcom,mdss-dsi-panel",
	10, 0, "DISPLAY_1", 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel resolution                                                          */
/*---------------------------------------------------------------------------*/
static struct panel_resolution he070na_lvds_600p_video_panel_res = {
	1024, 600, 150, 150, 20, 0, 15, 15, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel color information                                                   */
/*---------------------------------------------------------------------------*/
static struct color_info he070na_lvds_600p_video_color = {
	24, 0, 0xff, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel on/off command information                                          */
/*---------------------------------------------------------------------------*/
static char he070na_lvds_600p_video_on_cmd0[] = {
	0x04, 0x00, 0x29, 0xC0,
	0xB9, 0xFF, 0x83, 0x94,
};

static char he070na_lvds_600p_video_on_cmd1[] = {
	0x29, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd he070na_lvds_600p_video_on_command[] = {
	{0x8, he070na_lvds_600p_video_on_cmd0, 0x00},
	{0x4, he070na_lvds_600p_video_on_cmd1, 0x14}
};

#define HE070NA_LVDS_600P_VIDEO_ON_COMMAND 0


static char he070na_lvds_600p_videooff_cmd0[] = {
	0x28, 0x00, 0x05, 0x80
};

static char he070na_lvds_600p_videooff_cmd1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd he070na_lvds_600p_video_off_command[] = {
	{0x4, he070na_lvds_600p_videooff_cmd0, 0x32},
	{0x4, he070na_lvds_600p_videooff_cmd1, 0x78}
};

#define HE070NA_LVDS_600P_VIDEO_OFF_COMMAND 2


static struct command_state he070na_lvds_600p_video_state = {
	0, 1
};

/*---------------------------------------------------------------------------*/
/* Command mode panel information                                            */
/*---------------------------------------------------------------------------*/
static struct commandpanel_info he070na_lvds_600p_video_command_panel = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Video mode panel information                                              */
/*---------------------------------------------------------------------------*/
static struct videopanel_info he070na_lvds_600p_video_video_panel = {
	1, 0, 0, 0, 1, 1, 2, 0, 0x9
};

/*---------------------------------------------------------------------------*/
/* Lane configuration                                                        */
/*---------------------------------------------------------------------------*/
static struct lane_configuration he070na_lvds_600p_video_lane_config = {
	4, 0, 1, 1, 1, 1
};

/*---------------------------------------------------------------------------*/
/* Panel timing                                                              */
/*---------------------------------------------------------------------------*/
static const uint32_t he070na_lvds_600p_video_timings[] = {
	0x65, 0x12, 0x0C, 0x00, 0x34, 0x38, 0x10, 0x16, 0x0F, 0x03, 0x04, 0x00
};

static struct panel_timing he070na_lvds_600p_video_timing_info = {
	0, 4, 0x05, 0x22
};

/*---------------------------------------------------------------------------*/
/* Panel reset sequence                                                      */
/*---------------------------------------------------------------------------*/
static struct panel_reset_sequence he070na_lvds_600p_video_reset_seq = {
	{1, 0, 1, }, {20, 2, 20, }, 2
};

/*---------------------------------------------------------------------------*/
/* Backlight setting                                                         */
/*---------------------------------------------------------------------------*/
static struct backlight he070na_lvds_600p_video_backlight = {
	1, 1, 255, 1, 0, "PMIC_8941"
};

#endif /*_PANEL_HE070NA_LVDS_600P_VIDEO_H_*/