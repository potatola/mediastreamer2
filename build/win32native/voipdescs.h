#include "mediastreamer2/msfilter.h"

extern MSFilterDesc ms_alaw_dec_desc;
extern MSFilterDesc ms_alaw_enc_desc;
extern MSFilterDesc ms_ulaw_dec_desc;
extern MSFilterDesc ms_ulaw_enc_desc;
extern MSFilterDesc ms_file_player_desc;
extern MSFilterDesc ms_rtp_send_desc;
extern MSFilterDesc ms_rtp_recv_desc;
extern MSFilterDesc ms_dtmf_gen_desc;
extern MSFilterDesc ms_file_rec_desc;
extern MSFilterDesc ms_speex_dec_desc;
extern MSFilterDesc ms_speex_enc_desc;
extern MSFilterDesc ms_gsm_dec_desc;
extern MSFilterDesc ms_gsm_enc_desc;
extern MSFilterDesc ms_speex_ec_desc;
//extern MSFilterDesc ms_conf_desc;
extern MSFilterDesc ms_v4w_desc;
extern MSFilterDesc ms_video_out_desc;
extern MSFilterDesc ms_h263_enc_desc;
extern MSFilterDesc ms_h263_dec_desc;
extern MSFilterDesc ms_h263_old_enc_desc;
extern MSFilterDesc ms_h263_old_dec_desc;
extern MSFilterDesc ms_mpeg4_enc_desc;
extern MSFilterDesc ms_mpeg4_dec_desc;
extern MSFilterDesc ms_h264_dec_desc;
//extern MSFilterDesc ms_snow_enc_desc;
extern MSFilterDesc ms_snow_dec_desc;
extern MSFilterDesc ms_theora_enc_desc;
extern MSFilterDesc ms_theora_dec_desc;
extern MSFilterDesc ms_mjpeg_enc_desc;
extern MSFilterDesc ms_mjpeg_dec_desc;
extern MSFilterDesc ms_size_conv_desc;
extern MSFilterDesc ms_pix_conv_desc;
extern MSFilterDesc ms_resample_desc;
extern MSFilterDesc ms_volume_desc;
extern MSFilterDesc ms_static_image_desc;
extern MSFilterDesc ms_mire_desc;
extern MSFilterDesc ms_vfw_desc;
extern MSFilterDesc ms_equalizer_desc;
extern MSFilterDesc ms_dd_display_desc;
extern MSFilterDesc ms_audio_mixer_desc;
extern MSFilterDesc ms_ext_display_desc;
extern MSFilterDesc ms_jpeg_writer_desc;
extern MSFilterDesc ms_tone_detector_desc;
extern MSFilterDesc ms_vp8_enc_desc;
extern MSFilterDesc ms_vp8_dec_desc;
extern MSFilterDesc ms_l16_enc_desc;
extern MSFilterDesc ms_l16_dec_desc;
extern MSFilterDesc ms_g722_enc_desc;
extern MSFilterDesc ms_g722_dec_desc;

MSFilterDesc * ms_voip_filter_descs[]={
&ms_alaw_dec_desc,
&ms_alaw_enc_desc,
&ms_ulaw_dec_desc,
&ms_ulaw_enc_desc,
&ms_file_player_desc,
&ms_rtp_send_desc,
&ms_rtp_recv_desc,
&ms_dtmf_gen_desc,
&ms_file_rec_desc,
&ms_speex_dec_desc,
&ms_speex_enc_desc,
&ms_gsm_dec_desc,
&ms_gsm_enc_desc,
&ms_speex_ec_desc,
//&ms_conf_desc,
&ms_h263_old_enc_desc,
&ms_h263_old_dec_desc,
&ms_h263_enc_desc,
&ms_h263_dec_desc,
&ms_mpeg4_enc_desc,
&ms_mpeg4_dec_desc,
&ms_h264_dec_desc,
//&ms_snow_enc_desc,
&ms_snow_dec_desc,
&ms_theora_enc_desc,
&ms_theora_dec_desc,
&ms_mjpeg_enc_desc,
&ms_mjpeg_dec_desc,
&ms_size_conv_desc,
&ms_pix_conv_desc,
#ifndef NORESAMPLE
&ms_resample_desc,
#endif
&ms_volume_desc,
&ms_static_image_desc,
&ms_mire_desc,
&ms_equalizer_desc,
&ms_dd_display_desc,
&ms_audio_mixer_desc,
&ms_ext_display_desc,
&ms_tone_detector_desc,
&ms_jpeg_writer_desc,
&ms_vp8_enc_desc,
&ms_vp8_dec_desc,
&ms_l16_enc_desc,
&ms_l16_dec_desc,
&ms_g722_enc_desc,
&ms_g722_dec_desc,
NULL
};

