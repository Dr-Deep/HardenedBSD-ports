PORTNAME=	secadm
PORTVERSION=	0.5.1
DISTVERSIONPREFIX=	v
PORTREVISION?=	14
CATEGORIES=	hardenedbsd

MAINTAINER=	shawn.webb@hardenedbsd.org
COMMENT=	HardenedBSD Security Administration

LICENSE=	BSD2CLAUSE

USES+=		uidfix
USE_HARDENING?=	safestack

USE_RADICLE=		yes
RID=			rad:z5p6VcE97HCTVkiNtjBhMtW5mEnW
RAD_PROJECT_NAME=	HardenedBSD-secadm
RAD_COMMIT=		001cda1ebea43f7971306417bd3232fd3cca6aae

.if !defined(KMOD)
LIBDIR?=	${PREFIX}/lib
MAKE_ENV+=	LIBDIR=${LIBDIR}
.endif

MAKE_JOBS_UNSAFE=	yes

.include <bsd.port.pre.mk>

.if defined(KMOD)
MAKE_ENV+=	WITHOUT_CLI=YES
.else
MAKE_ENV+=	WITHOUT_KMOD=YES

LIB_DEPENDS=	libucl.so:textproc/libucl
.if ${OPSYS} == FreeBSD && ${OSVERSION} < 1100000
LIB_DEPENDS+=	libxo.so:devel/libxo
.endif

.endif

.include <bsd.port.post.mk>
