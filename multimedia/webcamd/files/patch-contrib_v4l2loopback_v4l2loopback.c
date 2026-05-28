--- contrib/v4l2loopback/v4l2loopback.c.orig	2025-11-24 15:52:01 UTC
+++ contrib/v4l2loopback/v4l2loopback.c
@@ -754,7 +754,7 @@ static int vidioc_querycap(struct file *file, void *pr
 	__u32 capabilities = V4L2_CAP_STREAMING | V4L2_CAP_READWRITE;
 
 	strlcpy(cap->driver, "v4l2 loopback", sizeof(cap->driver));
-	snprintf(cap->card, labellen, dev->card_label);
+	snprintf(cap->card, labellen, "%s", dev->card_label);
 	snprintf(cap->bus_info, sizeof(cap->bus_info),
 		 "platform:v4l2loopback-%03d", device_nr);
 
@@ -2445,7 +2445,7 @@ static int v4l2_loopback_add(struct v4l2_loopback_conf
 	}
 
 	MARK();
-	snprintf(dev->vdev->name, sizeof(dev->vdev->name), dev->card_label);
+	snprintf(dev->vdev->name, sizeof(dev->vdev->name), "%s", dev->card_label);
 
 	((struct v4l2loopback_private *)video_get_drvdata(dev->vdev))
 		->device_nr = nr;
