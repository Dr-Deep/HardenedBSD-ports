--- libavcodec/ffv1enc_vulkan.c.orig	2025-12-25 15:36:26 UTC
+++ libavcodec/ffv1enc_vulkan.c
@@ -245,7 +245,7 @@ static int run_rct_search(AVCodecContext *avctx, FFVkE
     if (avctx->sw_pix_fmt == AV_PIX_FMT_GBRP10 ||
         avctx->sw_pix_fmt == AV_PIX_FMT_GBRP12 ||
         avctx->sw_pix_fmt == AV_PIX_FMT_GBRP14)
-        memcpy(pd.fmt_lut, (int [4]) { 2, 1, 0, 3 }, 4*sizeof(int));
+        memcpy(pd.fmt_lut, ((int [4]) { 2, 1, 0, 3 }), 4*sizeof(int));
     else
         ff_vk_set_perm(avctx->sw_pix_fmt, pd.fmt_lut, 1);
 
@@ -506,7 +506,7 @@ static int vulkan_encode_ffv1_submit_frame(AVCodecCont
     if (avctx->sw_pix_fmt == AV_PIX_FMT_GBRP10 ||
         avctx->sw_pix_fmt == AV_PIX_FMT_GBRP12 ||
         avctx->sw_pix_fmt == AV_PIX_FMT_GBRP14)
-        memcpy(pd.fmt_lut, (int [4]) { 2, 1, 0, 3 }, 4*sizeof(int));
+        memcpy(pd.fmt_lut, ((int [4]) { 2, 1, 0, 3 }), 4*sizeof(int));
     else
         ff_vk_set_perm(avctx->sw_pix_fmt, pd.fmt_lut, 1);
 
