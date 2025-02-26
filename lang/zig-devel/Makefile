PORTNAME=	zig-devel
DISTVERSION=	0.14.0
CATEGORIES=	lang

MAINTAINER=	0x1eef@protonmail.com
COMMENT=	Language designed for robustness, optimality, and maintainability
WWW=		https://ziglang.org/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

ONLY_FOR_ARCHS=	aarch64 amd64
ONLY_FOR_ARCHS_REASON=	not yet supported

BUILD_DEPENDS=	icu>=71:devel/icu \
		llvm${_LLVM_VER}>=0:devel/llvm${_LLVM_VER}

LIB_DEPENDS=	libzstd.so:archivers/zstd

USES=		cmake compiler:c++11-lang localbase:ldflags tar:xz
CMAKE_ARGS+=	-DZIG_TARGET_MCPU=baseline # ensure we run everywhere
CMAKE_ON=	THREADS_PREFER_PTHREAD_FLAG

USE_GITHUB=	yes
GH_PROJECT=	zig
GH_ACCOUNT=	ziglang
GH_TAGNAME=	8957b2707464a4dc7f0572bfc08fd104408bc8a3

CONFLICTS_INSTALL=	zig0* zig

OPTIONS_DEFINE=		DOCS STATIC
OPTIONS_DEFAULT=	DOCS

STATIC_DESC=	sets ZIG_STATIC to avoid 800MiB LLVM runtime dependency

STATIC_RUN_DEPENDS_OFF=	llvm${_LLVM_VER}>=0:devel/llvm${_LLVM_VER}
STATIC_CMAKE_BOOL=	ZIG_STATIC
STATIC_LDFLAGS=		-licudata -licuuc -llzma -lm -lmd -lxml2 -lz -lzstd
STATIC_LIB_DEPENDS+=	libxml2.so:textproc/libxml2

_LLVM_VER=	19
_ZIG_BIN=	${STAGEDIR}${PREFIX}/bin/zig

post-configure-STATIC-on:
	@${REINPLACE_CMD} 's/-Wl,-Bdynamic//' \
		${BUILD_WRKSRC}/build.ninja

post-build:
	@${MV} ${STAGEDIR}${PORTSDIR}/lang/zig-devel/work/.build/stage3/ ${STAGEDIR}${PREFIX}
	@${RM} -rf ${STAGEDIR}${PORTSDIR}

post-stage:
	@${RM} -rf ${STAGEDIR}${PORTSDIR}

do-test:
	mkdir ${WRKDIR}/cache
	(cd ${WRKSRC} && \
		${_ZIG_BIN} build test-behavior --cache-dir ${WRKDIR}/cache \
		--global-cache-dir ${WRKDIR}/cache --zig-lib-dir ${WRKSRC}/lib)

.include <bsd.port.mk>
