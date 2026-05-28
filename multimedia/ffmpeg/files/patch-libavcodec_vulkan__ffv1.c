--- libavcodec/vulkan_ffv1.c.orig	2026-04-14 20:33:47 UTC
+++ libavcodec/vulkan_ffv1.c
@@ -324,7 +324,7 @@ static int vk_ffv1_end_frame(AVCodecContext *avctx)
     /* For some reason the C FFv1 encoder/decoder treats these differently */
     if (sw_format == AV_PIX_FMT_GBRP10 || sw_format == AV_PIX_FMT_GBRP12 ||
         sw_format == AV_PIX_FMT_GBRP14)
-        memcpy(pd.fmt_lut, (int [4]) { 2, 1, 0, 3 }, 4*sizeof(int));
+        memcpy(pd.fmt_lut, ((int [4]) { 2, 1, 0, 3 }), 4*sizeof(int));
     else
         ff_vk_set_perm(sw_format, pd.fmt_lut, 0);
 
