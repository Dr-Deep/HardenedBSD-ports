--- generic/jkSoundFile.c.orig	2025-12-08 02:36:17 UTC
+++ generic/jkSoundFile.c
@@ -2371,7 +2371,7 @@ PutCslHeader(Sound *s, Tcl_Interp *interp, Tcl_Channel
   sprintf(&buf[12], "HEDR");
   PutLELong(buf, 16, 32);
   Tcl_GlobalEvalObj(s->interp, Tcl_NewStringObj(CSL_DATECOMMAND, -1));
-  sprintf(&buf[20], Tcl_GetStringResult(s->interp));
+  sprintf(&buf[20], "%s", Tcl_GetStringResult(s->interp));
   
   PutLELong(buf, 40, s->samprate);
   PutLELong(buf, 44, s->length);
