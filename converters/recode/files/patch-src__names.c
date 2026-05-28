--- src/names.c.orig	2008-02-19 04:13:35 UTC
+++ src/names.c
@@ -101,6 +101,21 @@ alias_comparator (const void *void_first, const void *
   return strcmp (first->name, second->name) == 0;
 }
 
+static void 
+alias_freer (void *param)
+{
+  RECODE_ALIAS alias = param;
+  struct recode_surface_list *next = alias->implied_surfaces;
+  struct recode_surface_list *p;
+  while (next)
+    {
+      p = next->next;
+      free(next);
+      next = p;
+    }  
+  free(alias);
+}
+
 bool
 prepare_for_aliases (RECODE_OUTER outer)
 {
@@ -108,7 +123,7 @@ prepare_for_aliases (RECODE_OUTER outer)
   outer->number_of_symbols = 0;
 
   outer->alias_table
-    = hash_initialize (800, NULL, alias_hasher, alias_comparator, free);
+    = hash_initialize (800, NULL, alias_hasher, alias_comparator, alias_freer);
   if (!outer->alias_table)
     return false;
 
@@ -892,7 +907,7 @@ list_concise_charset (RECODE_OUTER outer,
 	    if (ucs2 >= 0)
 	      printf (format, code);
 	    else if (mnemonic || counter2 != 112)
-	      printf (blanks);
+	      printf ("%s", blanks);
 
 	    if (mnemonic)
 	      printf (counter2 == 112 ? " %s\n" : " %-3s", mnemonic);
