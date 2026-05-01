PORTNAME=	xclock
DISTVERSION=	1.1.1
CATEGORIES=	x11-clocks

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Analog and digital clock for X
WWW=		https://gitlab.freedesktop.org/xorg/app/xclock

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

<<<<<<< HEAD
USE_HARDENING=	safestack

USES=		iconv xorg xorg-cat:app
USE_XORG=	x11 xaw xft xkbfile xmu xrender xt

GNU_CONFIGURE_MANPREFIX=	${PREFIX}/share
=======
USES=		iconv tar:xz xorg xorg-cat:app
USE_XORG=	x11 xaw xft xkbfile xmu xorgproto xrender xt
>>>>>>> upstream/main

.include <bsd.port.mk>
