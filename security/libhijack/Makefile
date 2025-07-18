PORTNAME=	libhijack
PORTVERSION=	0.8.1
PORTREVISION=	1
CATEGORIES=	security

MAINTAINER=	shawn.webb@hardenedbsd.org
COMMENT=	Runtime process infection made easy
WWW=		https://git.hardenedbsd.org/SoldierX/libhijack

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		uidfix

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

.include <bsd.port.mk>
