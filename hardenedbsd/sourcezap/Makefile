PORTNAME=           sourcezap
PORTVERSION=        2.4.0
DISTVERSIONPREFIX=  v
CATEGORIES=         hardenedbsd

MAINTAINER=     0x1eef@hardenedbsd.org
COMMENT=        Manages a local copy of the hardenedbsd source tree
WWW=            https://git.hardenedbsd.org/0x1eef/sourcezap

LICENSE=        BSD0CLAUSE

RUN_DEPENDS=	rsync:net/rsync git:devel/git

USE_RADICLE=     yes
RID=	z4Edk34PJMmH7TSTJfWd8YUX1gYCc
RAD_COMMIT=	e11a4a911433cee4e02dabf78ac00348bf365e58
RAD_PROJECT_NAME=	${PORTNAME}

BATCH=          yes
NO_ARCH=        yes
NO_BUILD=	yes

do-install:
	${MAKE} -C ${WRKSRC} PREFIX=${STAGEDIR}${PREFIX} install

.include <bsd.port.mk>
