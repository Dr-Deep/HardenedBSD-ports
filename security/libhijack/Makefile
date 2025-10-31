PORTNAME=	libhijack
<<<<<<< HEAD
PORTVERSION=	0.8.1
PORTREVISION=	1
=======
DISTVERSIONPREFIX=	v
DISTVERSION=	0.9.0
>>>>>>> internal/freebsd/main
CATEGORIES=	security

MAINTAINER=	shawn.webb@hardenedbsd.org
COMMENT=	Runtime process infection made easy
WWW=		https://git.hardenedbsd.org/SoldierX/libhijack

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		uidfix
<<<<<<< HEAD

USE_HARDENING=	pie relro

ONLY_FOR_ARCHS=	aarch64 amd64

USE_GITLAB=	yes
GL_SITE=	https://git.hardenedbsd.org
GL_ACCOUNT=	SoldierX
GL_TAGNAME=	b98354defa0822ecf34036a4657bc8f58beb9ab8

USE_LDCONFIG=	yes

PLIST_FILES=	include/hijack.h \
		lib/libhijack.so \
		lib/libhijack.so.2 \
		sbin/hijack

=======

ONLY_FOR_ARCHS=	aarch64 amd64
ONLY_FOR_ARCHS_REASON=	not ported to other architectures
BROKEN_aarch64=	does not build, upstream is working on a fix (PR 283408)
BROKEN_FreeBSD_13=	does not build, upstream is working on a fix (PR 283408)

USE_GITLAB=	yes
GL_SITE=	https://git.hardenedbsd.org
GL_ACCOUNT=	SoldierX

USE_LDCONFIG=	yes

>>>>>>> internal/freebsd/main
.include <bsd.port.mk>
