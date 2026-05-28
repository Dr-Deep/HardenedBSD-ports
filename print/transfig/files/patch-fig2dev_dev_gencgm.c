--- fig2dev/dev/gencgm.c.orig	2025-12-22 21:02:50 UTC
+++ fig2dev/dev/gencgm.c
@@ -138,8 +138,10 @@ gencgm_start(objects)
   char	*p, *figname;
   
   if (from) {
-	figname = malloc(strlen(from)+1);
-	sprintf(figname, from);
+	figname = strdup(from);
+	if (figname == NULL) {
+		return;
+	}
 	p = strrchr(figname, '/');
 	if (p) 
 	    figname = p+1;		/* remove path from name for comment in file */
