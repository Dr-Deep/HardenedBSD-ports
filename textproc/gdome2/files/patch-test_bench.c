--- test/bench.c.orig	2025-12-07 01:05:53 UTC
+++ test/bench.c
@@ -81,7 +81,7 @@ void traversal (GdomeElement *el) {
 			break;
 		case GDOME_TEXT_NODE:
 			str = gdome_t_data ((GdomeText *)child, &exc);
-			printf (str->str);
+			printf ("%s", str->str);
 			gdome_str_unref (str);
 			break;
 		}
