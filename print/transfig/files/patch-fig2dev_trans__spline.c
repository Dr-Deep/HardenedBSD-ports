--- fig2dev/trans_spline.c.orig	2025-12-22 22:06:22 UTC
+++ fig2dev/trans_spline.c
@@ -648,7 +648,7 @@ create_cpoint()
     F_control	   *cp;
 
     if ((cp = (F_control *) malloc(CONTROL_SIZE)) == NULL)
-	fprintf(stderr,Err_mem);
+	fprintf(stderr,"%s", Err_mem);
     return cp;
 }
 
@@ -659,7 +659,7 @@ create_line()
     F_line	   *l;
 
     if ((l = (F_line *) malloc(LINOBJ_SIZE)) == NULL)
-	fprintf(stderr,Err_mem);
+	fprintf(stderr,"%s", Err_mem);
     l->pic = NULL;
     l->next = NULL;
     l->for_arrow = NULL;
