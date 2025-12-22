--- fig2dev/dev/genmp.c.orig	2025-12-22 22:09:17 UTC
+++ fig2dev/dev/genmp.c
@@ -1150,7 +1150,7 @@ F_text *t;
 	    }
 	} else {
 	    /* special text in latex mode: just write the text. */
-	    fprintf(tfp, t->cstring);
+	    fprintf(tfp, "%s", t->cstring);
 	}
 	fprintf(tfp," etex;\n");
 
@@ -1164,7 +1164,7 @@ F_text *t;
 
 	fprintf(tfp,"  picture q;\n");
 	fprintf(tfp,"  q=thelabel.urt(\"");
-        fprintf(tfp, t->cstring);
+        fprintf(tfp, "%s", t->cstring);
 	fprintf(tfp, "\" infont ");
 	if (t->font<0) {
 	    fprintf(tfp, "defaultfont");
