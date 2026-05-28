--- genisoimage/genisoimage.c.orig	2025-12-08 02:48:49 UTC
+++ genisoimage/genisoimage.c
@@ -3406,7 +3406,7 @@ if (check_session == 0)
 	if (goof) {
 		fprintf(stderr, "ISO9660/Rock Ridge tree sort failed.\n");
 		if(merge_warn_msg)
-			fprintf(stderr, merge_warn_msg);
+			fprintf(stderr, "%s", merge_warn_msg);
 		exit(1);
 	}
 #ifdef UDF
@@ -3419,7 +3419,7 @@ if (check_session == 0)
 	if (goof) {
 		fprintf(stderr, "Joliet tree sort failed. The -joliet-long switch may help you.\n");
 		if(merge_warn_msg)
-			fprintf(stderr, merge_warn_msg);
+			fprintf(stderr, "%s", merge_warn_msg);
 		exit(1);
 	}
 	/*
