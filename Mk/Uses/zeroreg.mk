# Compile a port with register zeroing
#
# Warning: this feature carries a performance hit.
#
# Feature:	zeroreg
# Usage:	USES=zeroreg
#
# MAINTAINER:	shawn.webb@hardenedbsd.org

.if !defined(_INCLUDE_USES_ZEROREG_MK)
_INCLUDE_USES_ZEROREG_MK=    yes

ZERO_REG_TYPE?=	used
ZERO_REG_FLAG?=	-fzero-call-used-regs=${ZERO_REG_TYPE}

CFLAGS+=	${ZERO_REG_FLAG}
CXXFLAGS+=	${ZERO_REG_FLAG}

.endif
