--- genisoimage/tree.c.orig	2025-12-08 02:50:13 UTC
+++ genisoimage/tree.c
@@ -647,7 +647,7 @@ got_valid_name:
      fprintf(stderr, "Unable to sort directory %s\n",
            this_dir->whole_name);
      if(merge_warn_msg)
-        fprintf(stderr, merge_warn_msg);
+        fprintf(stderr, "%s", merge_warn_msg);
      exit(1);
 	}
 	/*
