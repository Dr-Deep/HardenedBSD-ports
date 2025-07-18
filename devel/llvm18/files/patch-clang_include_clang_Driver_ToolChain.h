--- clang/include/clang/Driver/ToolChain.h.orig	2024-11-19 08:08:07 UTC
+++ clang/include/clang/Driver/ToolChain.h
@@ -487,7 +487,7 @@ class ToolChain { (public)
   /// Get the default trivial automatic variable initialization.
   virtual LangOptions::TrivialAutoVarInitKind
   GetDefaultTrivialAutoVarInit() const {
-    return LangOptions::TrivialAutoVarInitKind::Uninitialized;
+    return LangOptions::TrivialAutoVarInitKind::Zero;
   }
 
   /// GetDefaultLinker - Get the default linker to use.
