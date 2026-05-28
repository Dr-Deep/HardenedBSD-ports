--- unix/uuenview.c.orig	2025-12-06 23:51:10 UTC
+++ unix/uuenview.c
@@ -483,7 +483,7 @@ AttachFiles (char *towhom, char *subject,
       if (_FP_stristr (input, "multipart") != NULL) {
 	/* it is already a multipart posting. grab the boundary */
 	if ((ptr = _FP_stristr (input, "boundary=")) != NULL) {
-	  fprintf(thepipe,  input);
+	  fprintf(thepipe,  "%s", input);
 	  strcpy (boundary, ParseValue (ptr));
 	  hadmulti = 1;
 	}
