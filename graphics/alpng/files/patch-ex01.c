--- ex01.c.orig	2025-12-05 03:57:18 UTC
+++ ex01.c
@@ -69,7 +69,7 @@ int main(int argc, char* argv[]) {
     alpng_init();
 
     if (argc < 2) {
-        allegro_message(usage);
+        allegro_message("%s", usage);
         allegro_message("Press S during viewing to save the picture to pok.png");
         return 1;
     }
@@ -152,7 +152,7 @@ void init(int bpp, int w, int h) {
     if (res != 0) {
         res = set_gfx_mode(GFX_AUTODETECT, w, h, 0, 0);
         if (res != 0) {
-            allegro_message(allegro_error);
+            allegro_message("%s", allegro_error);
             exit(-1);
         }
     }
