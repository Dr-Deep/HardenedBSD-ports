# Compile a port with additional hardening compilation flags
#
# Feature:	hardcflags
# Usage:	USES=hardcflags
#
# MAINTAINER:	shawn.webb@hardenedbsd.org

.if !defined(_INCLUDE_USES_HARDCFLAGS_MK)
_INCLUDE_USES_HARDCFLAGS_MK=    yes

HARDCFLAGS+=	-fno-delete-null-pointer-checks
HARDCXXFLAGS+=	-fno-delete-null-pointer-checks

HARDCFLAGS+=	-Wformat -Werror=format-security
HARDCXXFLAGS+=	-Wformat -Werror=format-security

CFLAGS+=	${HARDCFLAGS}
CXXFLAGS+=	${HARDCXXFLAGS}

.endif
