/*
 * Copyright (c) 2015-2017, NVIDIA CORPORATION.  All rights reserved.
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

#ifndef __TEGRA_VIRT_ALT_IVC_COMMON_H__
#define __TEGRA_VIRT_ALT_IVC_COMMON_H__

#include <linux/types.h>

enum ivc_audio_err_t {
	NVAUDIO_ERR_OK,
	NVAUDIO_ERR_SERVER_STATE,
	NVAUDIO_ERR_ARGS,
	NVAUDIO_ERR_REQ,
	NVAUDIO_ERR_UNSUPPORTED_REQ
};

enum rx_state_t {
	RX_INIT,
	RX_PENDING,
	RX_AVAIL,
	RX_DONE,
};

enum nvaudio_ivc_cmd_t {
	NVAUDIO_DMAIF_SET_RXCIF,
	NVAUDIO_DMAIF_SET_TXCIF,
	NVAUDIO_START_PLAYBACK,
	NVAUDIO_STOP_PLAYBACK,
	NVAUDIO_START_CAPTURE,
	NVAUDIO_STOP_CAPTURE,
	NVAUDIO_XBAR_SET_ROUTE,
	NVAUDIO_XBAR_GET_ROUTE,
	NVAUDIO_AMIXER_SET_RX_GAIN,
	NVAUDIO_AMIXER_SET_TX_ADDER_CONFIG,
	NVAUDIO_AMIXER_SET_ENABLE,
	NVAUDIO_AMIXER_GET_TX_ADDER_CONFIG,
	NVAUDIO_AMIXER_GET_ENABLE,
	NVAUDIO_SFC_SET_IN_FREQ,
	NVAUDIO_SFC_GET_IN_FREQ,
	NVAUDIO_SFC_SET_OUT_FREQ,
	NVAUDIO_SFC_GET_OUT_FREQ,
	NVAUDIO_ASRC_SET_INT_RATIO,
	NVAUDIO_ASRC_GET_INT_RATIO,
	NVAUDIO_ASRC_SET_FRAC_RATIO,
	NVAUDIO_ASRC_GET_FRAC_RATIO,
	NVAUDIO_ASRC_SET_RATIO_SOURCE,
	NVAUDIO_ASRC_GET_RATIO_SOURCE,
	NVAUDIO_ASRC_SET_STREAM_ENABLE,
	NVAUDIO_ASRC_GET_STREAM_ENABLE,
	NVAUDIO_ASRC_SET_HWCOMP_DISABLE,
	NVAUDIO_ASRC_GET_HWCOMP_DISABLE,
	NVAUDIO_ASRC_SET_INPUT_THRESHOLD,
	NVAUDIO_ASRC_GET_INPUT_THRESHOLD,
	NVAUDIO_ASRC_SET_OUTPUT_THRESHOLD,
	NVAUDIO_ASRC_GET_OUTPUT_THRESHOLD,
	NVAUDIO_ARAD_SET_LANE_SRC,
	NVAUDIO_ARAD_GET_LANE_SRC,
	NVAUDIO_ARAD_SET_PRESCALAR,
	NVAUDIO_ARAD_GET_PRESCALAR,
	NVAUDIO_ARAD_SET_LANE_ENABLE,
	NVAUDIO_ARAD_GET_LANE_ENABLE,
	NVAUDIO_ARAD_GET_LANE_RATIO,
	NVAUDIO_AMX_SET_INPUT_STREAM_ENABLE,
	NVAUDIO_I2S_SET_LOOPBACK_ENABLE,
	NVAUDIO_I2S_GET_LOOPBACK_ENABLE,
	NVAUDIO_CMD_MAX,
};

struct nvaudio_ivc_t210_amx_info {
	int32_t		amx_id;
	uint32_t	amx_stream_id;
	uint32_t	amx_stream_enable;
};

struct nvaudio_ivc_t210_i2s_info {
	int32_t		i2s_id;
	uint32_t	i2s_loopback_enable;
};

struct nvaudio_ivc_t210_amixer_info {
	int32_t		id;
	uint32_t	rx_idx;
	uint32_t	gain;
	uint32_t	adder_idx;
	uint32_t	adder_rx_idx;
	uint32_t	adder_rx_idx_enable;
	uint32_t	enable;
};

struct nvaudio_ivc_t210_sfc_info {
	int32_t		id;
	uint32_t	in_freq;
	uint32_t	out_freq;
};

struct nvaudio_ivc_t186_asrc_info {
	int32_t		id;
	uint32_t	stream_num;
	uint32_t	int_ratio;
	uint32_t	frac_ratio;
	uint32_t	input_threshold;
	uint32_t	output_threshold;
	uint32_t	hwcomp_disable;
	uint32_t	stream_enable;
	uint32_t	ratio_source;
};

struct nvaudio_ivc_t186_arad_info {
	int32_t		id;
	uint32_t	lane_id;
	uint32_t	int_ratio;
	uint32_t	frac_ratio;
	int32_t		num_source;
	int32_t		den_source;
	int32_t		num_prescalar;
	int32_t		den_prescalar;
	uint32_t	lane_enable;
};

struct nvaudio_ivc_xbar_link {
	uint32_t	rx_reg;
	uint32_t	tx_value;
	uint32_t	tx_idx;
	uint32_t	bit_pos;
};

struct nvaudio_ivc_dmaif_info {
	int32_t	id;
	int32_t	value;
};

struct nvaudio_ivc_msg {
	int32_t			channel_id;
	enum nvaudio_ivc_cmd_t	cmd;
	union {
		struct nvaudio_ivc_dmaif_info		dmaif_info;
		struct nvaudio_ivc_t210_amixer_info	amixer_info;
		struct nvaudio_ivc_t210_sfc_info	sfc_info;
		struct nvaudio_ivc_t186_asrc_info	asrc_info;
		struct nvaudio_ivc_t186_arad_info	arad_info;
		struct nvaudio_ivc_t210_amx_info	amx_info;
		struct nvaudio_ivc_t210_i2s_info	i2s_info;
		struct nvaudio_ivc_xbar_link		xbar_info;
	} params;
	bool			ack_required;
	int32_t			err;
};

#endif
