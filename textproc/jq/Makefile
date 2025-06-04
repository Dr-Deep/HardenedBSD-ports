PORTNAME=	jq
<<<<<<< HEAD
DISTVERSION=	1.7.1
PORTREVISION=	2
=======
DISTVERSION=	1.8.0
>>>>>>> internal/freebsd/main
CATEGORIES=	textproc
MASTER_SITES=	https://github.com/jqlang/${PORTNAME}/releases/download/${PORTNAME}-${DISTVERSION}/

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Lightweight and flexible command-line JSON processor
WWW=		https://jqlang.github.io/jq/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cpe gmake libtool pathfix
CPE_VENDOR=	${PORTNAME}_project
USE_LDCONFIG=	yes

USE_HARDENING=	cfi safestack

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-maintainer-mode \
		--docdir="${DOCSDIR}"

TEST_TARGET=	check # 3 tests fail, see https://github.com/jqlang/jq/issues/2885

PORTDOCS=	*

OPTIONS_DEFINE=			DOCS ONIGURUMA
OPTIONS_DEFAULT=		ONIGURUMA

DOCS_CONFIGURE_ENABLE=		docs
DOCS_MAKE_ARGS_OFF=		docdir=

ONIGURUMA_DESC=			With oniguruma BSDL regular expression library
ONIGURUMA_USES=			localbase:ldflags
ONIGURUMA_LIB_DEPENDS=		libonig.so:devel/oniguruma
ONIGURUMA_CONFIGURE_WITH=	oniguruma=${LOCALBASE}

.include <bsd.port.mk>
