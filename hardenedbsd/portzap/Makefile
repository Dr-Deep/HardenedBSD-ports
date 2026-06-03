PORTNAME=           portzap
PORTVERSION=        2.4.0
DISTVERSIONPREFIX=  v
CATEGORIES=         hardenedbsd

MAINTAINER=     0x1eef@hardenedbsd.org
COMMENT=        Manages a local copy of the hardenedbsd ports tree
WWW=            https://git.hardenedbsd.org/0x1eef/portzap

LICENSE=        BSD0CLAUSE

RUN_DEPENDS=	rsync:net/rsync git:devel/git

USE_RADICLE=     yes
RID=	z4F5ZCdvemg71BDoMDHk5dKUDPs3D
RAD_COMMIT=	2db3778d466f3e6bb881f4633492349c6e7c3634
RAD_PROJECT_NAME=	portzap

BATCH=          yes
NO_ARCH=        yes
NO_BUILD=	yes

do-install:
	${MAKE} -C ${WRKSRC} PREFIX=${STAGEDIR}${PREFIX} install

.include <bsd.port.mk>
