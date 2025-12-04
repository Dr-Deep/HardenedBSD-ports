--- src/svgdrv.c.orig	2025-12-04 19:57:14 UTC
+++ src/svgdrv.c
@@ -745,7 +745,7 @@ void svg_puttext(VPoint vp, char *s, int len, int font
             -tm->cxy, -tm->cyy,
             scaleval(vp.x), scaleval(vp.y));
 
-    fprintf(prstream, escape_specials((unsigned char *) s, len));
+    fprintf(prstream, "%s", escape_specials((unsigned char *) s, len));
 
     fprintf(prstream, "</text>\n");
 }
