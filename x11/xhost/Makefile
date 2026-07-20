PORTNAME=	xhost
DISTVERSION=	1.0.10
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Server access control program for X
WWW=		https://gitlab.freedesktop.org/xorg/app/xhost

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

<<<<<<< HEAD
USE_HARDENING=	safestack

USES=		xorg xorg-cat:app
USE_XORG=	x11 xmuu xau
=======
USES=		tar:xz xorg xorg-cat:app
USE_XORG=	x11 xau xmuu xorgproto
>>>>>>> rad/freebsd/main

PLIST_FILES=	bin/xhost share/man/man1/xhost.1.gz

.include <bsd.port.mk>
