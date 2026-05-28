--- pform_package.cc.orig	2025-12-08 02:44:38 UTC
+++ pform_package.cc
@@ -62,7 +62,7 @@ void pform_end_package_declaration(const struct vlltyp
 	    ostringstream msg;
 	    msg << "error: Package " << use_name << " was already declared here: "
 		<< test->second->get_fileline() << ends;
-	    VLerror(loc, msg.str().c_str());
+	    VLerror(loc, "%s", msg.str().c_str());
       }
 
 
