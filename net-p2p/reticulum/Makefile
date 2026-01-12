PORTNAME=	reticulum
DISTVERSION=	1.1.3
CATEGORIES=	net-p2p

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Self-configuring, encrypted and resilient mesh networking stack
WWW=		https://reticulum.network/

LICENSE=	UNKNOWN
LICENSE_FILE=	${WRKSRC}/LICENSE
LICENSE_NAME=	Reticulum License
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}netifaces>=0:net/py-netifaces@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyserial>0:comms/py-pyserial@${PY_FLAVOR}

WRKSRC=		${WRKDIR}/reticulum-${GL_TAGNAME}
USES=		python:3.11
USE_GITLAB=	yes
GL_ACCOUNT=	HardenedBSD
GL_TAGNAME=	d4adbc8983185dfbe1ce7fed67e388bcad9f249a
GL_SITE=	https://git.hardenedbsd.org
USE_PYTHON=	cryptography distutils
USE_RC_SUBR=	reticulum
GROUPS=		_reticulum
USERS=		_reticulum
SUB_LIST=	USERS="${USERS}" \
		GROUPS="${GROUPS}" \
		PYTHON=${PYTHON_CMD}
PLIST_SUB=	USERS="${USERS}" GROUPS="${GROUPS}"

NO_ARCH=	yes

post-install:
	@${MKDIR} ${STAGEDIR}${ETCDIR} ${STAGEDIR}${ETCDIR}/interfaces ${STAGEDIR}/var/db/reticulum \
		${STAGEDIR}/var/run/reticulum ${STAGEDIR}/var/log/reticulum
	${INSTALL_DATA} ${PATCHDIR}/config.sample ${STAGEDIR}${ETCDIR}/config.sample

.include <bsd.port.mk>
