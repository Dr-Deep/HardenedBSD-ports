--- libavcodec/vulkan_ffv1.c.orig	2025-12-25 15:45:34 UTC
+++ libavcodec/vulkan_ffv1.c
@@ -449,9 +449,9 @@ static int vk_ffv1_end_frame(AVCodecContext *avctx)
     /* For some reason the C FFv1 encoder/decoder treats these differently */
     if (sw_format == AV_PIX_FMT_GBRP10 || sw_format == AV_PIX_FMT_GBRP12 ||
         sw_format == AV_PIX_FMT_GBRP14)
-        memcpy(pd.fmt_lut, (int [4]) { 2, 1, 0, 3 }, 4*sizeof(int));
+        memcpy(pd.fmt_lut, ((int [4]) { 2, 1, 0, 3 }), 4*sizeof(int));
     else if (sw_format == AV_PIX_FMT_X2BGR10)
-        memcpy(pd.fmt_lut, (int [4]) { 0, 2, 1, 3 }, 4*sizeof(int));
+        memcpy(pd.fmt_lut, ((int [4]) { 0, 2, 1, 3 }), 4*sizeof(int));
     else
         ff_vk_set_perm(sw_format, pd.fmt_lut, 0);
 
