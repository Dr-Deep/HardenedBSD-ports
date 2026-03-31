PORTNAME=	heartwood
DISTVERSION=	1.8.0
CATEGORIES=	net-p2p devel

MAINTAINER=	shawn.webb@hardenedbsd.org
COMMENT=	A sovereign code forge built on Git
WWW=		https://radicle.xyz/

USES=		cargo

USE_GITLAB=	yes
GL_SITE=	https://git.hardenedbsd.org
GL_ACCOUNT=	shawn.webb
GL_PROJECT=	heartwood
GL_TAGNAME=	8bac24d6ab961dec6308fdf64b31c41201e9e8d1

.include "Makefile.crates"

.include <bsd.port.mk>
