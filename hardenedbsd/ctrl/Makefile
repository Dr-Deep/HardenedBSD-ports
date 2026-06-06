PORTNAME=           ctrl
PORTVERSION=        3.0.0
PORTREVISION=	2
DISTVERSIONPREFIX=  v
CATEGORIES=         hardenedbsd

MAINTAINER=     0x1eef@hardenedbsd.org
COMMENT=        An alternative implementation of hbsdcontrol(8)
WWW=            https://git.hardenedbsd.org/0x1eef/ctrl
LICENSE=        BSD0CLAUSE
LICENSE_FILE=   ${WRKSRC}/LICENSE

USES=           go:modules
GO_PKGNAME=     ctrl

USE_RADICLE=	yes
RID=	zCobqyNAXGwCEJWBxvHQGMwxUYmj
RAD_COMMIT=	8b79a80f8280ba4417f82137051cc3b73c541f17
RAD_PROJECT_NAME=	${PORTNAME}

GO_TARGET=      ./cmd/ctrl/
GO_ENV+=        GOMAXPROCS=1
GO_ENV+=        GOPROXY=direct
PLIST_FILES=    bin/ctrl share/man/man8/ctrl.8.gz

post-stage:
	@${CP} ${WRKSRC}/share/man/man8/ctrl.8 ${STAGEDIR}/${PREFIX}/share/man/man8/

.include <bsd.port.mk>
