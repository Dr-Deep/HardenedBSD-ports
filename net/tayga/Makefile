PORTNAME=	tayga
DISTVERSION=	0.9.2
PORTREVISION=	2
CATEGORIES=	net
MASTER_SITES=	http://www.litech.org/tayga/

MAINTAINER=	franco@opnsense.org
COMMENT=	Userland stateless NAT64 daemon
WWW=		http://www.litech.org/tayga/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gmake tar:bzip2
GNU_CONFIGURE=	yes

USE_HARDENING=	safestack

post-configure:
	@${REINPLACE_CMD} -e 's|^CFLAGS =|CFLAGS ?=|g' ${WRKSRC}/Makefile

.include <bsd.port.mk>
