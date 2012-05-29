/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __S3C_FB_H__
#define __S3C_FB_H__
struct s3c_fb_user_window {
 int x;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int y;
};
struct s3c_fb_user_plane_alpha {
 int channel;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char red;
 unsigned char green;
 unsigned char blue;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct s3c_fb_user_chroma {
 int enabled;
 unsigned char red;
 unsigned char green;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char blue;
};
struct s3c_fb_user_ion_client {
 int fd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int offset;
};
enum s3c_fb_pixel_format {
 S3C_FB_PIXEL_FORMAT_RGBA_8888 = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 S3C_FB_PIXEL_FORMAT_RGB_888 = 1,
 S3C_FB_PIXEL_FORMAT_RGB_565 = 2,
 S3C_FB_PIXEL_FORMAT_BGRA_8888 = 3,
 S3C_FB_PIXEL_FORMAT_RGBA_5551 = 4,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 S3C_FB_PIXEL_FORMAT_RGBA_4444 = 5,
 S3C_FB_PIXEL_FORMAT_MAX = 6,
};
struct s3c_fb_win_config {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum {
 S3C_FB_WIN_STATE_DISABLED = 0,
 S3C_FB_WIN_STATE_COLOR,
 S3C_FB_WIN_STATE_BUFFER,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } state;
 union {
 __u32 color;
 struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int fd;
 __u32 offset;
 __u32 stride;
 int x;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int y;
 __u32 w;
 __u32 h;
 enum s3c_fb_pixel_format format;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 };
 };
};
#define S3C_FB_MAX_WIN (5)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct s3c_fb_win_config_data {
 int fence;
 struct s3c_fb_win_config config[S3C_FB_MAX_WIN];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define S3CFB_WIN_POSITION _IOW('F', 203,   struct s3c_fb_user_window)
#define S3CFB_WIN_SET_PLANE_ALPHA _IOW('F', 204,   struct s3c_fb_user_plane_alpha)
#define S3CFB_WIN_SET_CHROMA _IOW('F', 205,   struct s3c_fb_user_chroma)
#define S3CFB_SET_VSYNC_INT _IOW('F', 206, u32)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define S3CFB_GET_ION_USER_HANDLE _IOWR('F', 208,   struct s3c_fb_user_ion_client)
#define S3CFB_WIN_CONFIG _IOW('F', 209,   struct s3c_fb_win_config_data)
#endif

