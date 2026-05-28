--- tools/dump-tree.c.orig	2025-11-22 20:03:47 UTC
+++ tools/dump-tree.c
@@ -117,7 +117,7 @@ static void fprintIndex(FILE *f, SmiNode *smiNode)
 	 smiElement; smiElement = smiGetNextElement(smiElement), i++) {
 	if (i > 0) fprintf(f, ",");
 	if (indexname) {
-	    fprintf(f, indexname);
+	    fprintf(f, "%s", indexname);
 	}
 	indexname = smiGetElementNode(smiElement)->name;
     }
@@ -143,7 +143,7 @@ static void fprintObjects(FILE *f, SmiNode *smiNode)
 	 smiElement = smiGetNextElement(smiElement), i++) {
 	if (i > 0) fprintf(f, ",");
 	if (objectname) {
-	    fprintf(f, objectname);
+	    fprintf(f, "%s", objectname);
 	}
 	objectname = smiGetElementNode(smiElement)->name;
     }
